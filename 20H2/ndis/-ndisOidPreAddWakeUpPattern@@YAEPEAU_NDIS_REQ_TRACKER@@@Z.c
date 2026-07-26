/*
 * XREFs of ?ndisOidPreAddWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00916A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003B21C (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094360 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094AA0 (-ndisSetOpenAddWakeUpPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0095700 (-ndisXlateAddPacketPatternToWolPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreAddWakeUpPattern(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rsi
  unsigned __int8 v2; // dl
  __int64 v3; // rdi
  struct _NDIS_OPEN_BLOCK *v5; // rcx
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // r8
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v11 = 0;
  if ( v5
    && ((ProtocolHandle = v5->ProtocolHandle, ProtocolHandle->MajorNdisVersion > 6u)
     || ProtocolHandle->MajorNdisVersion == 6 && ProtocolHandle->MinorNdisVersion >= 0x14u) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  else if ( *(_DWORD *)(v3 + 4) == 1 && (*(_DWORD *)(v3 + 88) & 0xC0000) == 0 )
  {
    *(_DWORD *)(v3 + 152) = 0;
    if ( !v5
      || (v7 = ndisSetOpenAddWakeUpPattern(v5, (struct _NDIS_OID_REQUEST *)v3, &v11),
          v2 = v11,
          *((_DWORD *)a1 + 10) = v7,
          v2 != 1) )
    {
      if ( *(_QWORD *)a1 )
      {
        if ( v1->MajorNdisVersion > 6u || v1->MajorNdisVersion == 6 && v1->MinorNdisVersion >= 0x14u )
        {
          v9 = ndisXlateAddPacketPatternToWolPatternOid((struct _NDIS_OID_REQUEST *)v3, &v11);
          v2 = v11;
          *((_DWORD *)a1 + 10) = v9;
          if ( v2 == 1 )
            return v2;
          v8 = ndisMiniportPreAddWoLPattern(v1, (struct _NDIS_OID_REQUEST *)v3, (char *)&v11);
        }
        else
        {
          v8 = ndisSetAddWakeUpPattern(v1, (struct _NDIS_OID_REQUEST *)v3, &v11);
        }
        v2 = v11;
        *((_DWORD *)a1 + 10) = v8;
      }
    }
  }
  return v2;
}
