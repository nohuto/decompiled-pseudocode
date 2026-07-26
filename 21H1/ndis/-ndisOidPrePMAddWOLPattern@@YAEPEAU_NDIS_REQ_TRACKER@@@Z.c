/*
 * XREFs of ?ndisOidPrePMAddWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00167E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z @ 0x1C0016940 (-ndisIsValidWoLPattern@@YAEPEAU_NDIS_PM_WOL_PATTERN@@I@Z.c)
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x1C0016A4C (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     ?ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0016A8C (-ndisSourcePreAddWoLPattern@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQU.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003AFDC (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0093EA0 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009547C (-ndisXlateAddWolPatternToPacketPatternOid@@YAHPEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMAddWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_OPEN_BLOCK *v1; // r14
  unsigned __int8 v2; // di
  struct _NDIS_MINIPORT_BLOCK *v3; // rbp
  __int64 v5; // rsi
  unsigned int WoLPatternSize; // eax
  struct _NDIS_PM_WOL_PATTERN *v7; // r9
  unsigned int v8; // edx
  struct _NDIS_FILTER_BLOCK *v9; // rdx
  int v10; // eax
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rcx
  _NDIS_PROTOCOL_BLOCK *v13; // rcx
  int v14; // eax
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int8 v19; // [rsp+40h] [rbp+8h] BYREF

  v1 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v2 = 1;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *((_QWORD *)a1 + 4);
  v19 = 1;
  if ( v1 )
  {
    ProtocolHandle = v1->ProtocolHandle;
    if ( ProtocolHandle->MajorNdisVersion <= 6u
      && (ProtocolHandle->MajorNdisVersion != 6 || ProtocolHandle->MinorNdisVersion < 0x14u) )
    {
      goto LABEL_19;
    }
  }
  if ( *(_DWORD *)(v5 + 4) != 1 )
    goto LABEL_19;
  if ( (*(_DWORD *)(v5 + 88) & 0xC0000) != 0 )
    return 0;
  *(_DWORD *)(v5 + 56) = 0;
  if ( *(_DWORD *)(v5 + 48) < 0xC4u )
  {
    *((_DWORD *)a1 + 10) = -1073741811;
    return v2;
  }
  WoLPatternSize = ndisGetWoLPatternSize(*(struct _NDIS_PM_WOL_PATTERN **)(v5 + 40));
  *((_DWORD *)a1 + 10) = 0;
  v8 = *(_DWORD *)(v5 + 48);
  if ( v8 < WoLPatternSize )
  {
    *(_DWORD *)(v5 + 56) = WoLPatternSize;
    *((_DWORD *)a1 + 10) = -1073676268;
    return v2;
  }
  if ( !ndisIsValidWoLPattern(v7, v8) )
  {
    *((_DWORD *)a1 + 10) = -1073676267;
    return v2;
  }
  if ( *((_QWORD *)a1 + 3) )
  {
    v13 = v1->ProtocolHandle;
    if ( v13->MajorNdisVersion <= 6u && (v13->MajorNdisVersion != 6 || v13->MinorNdisVersion < 0x14u) )
      goto LABEL_19;
    v14 = ndisSourcePreAddWoLPattern(v1, 0LL, (struct _NDIS_OID_REQUEST *)v5, &v19);
    v2 = v19;
    *((_DWORD *)a1 + 10) = v14;
    if ( v2 )
      return v2;
  }
  v9 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 1);
  if ( !v9 || (*(_DWORD *)(v5 + 88) & 0x4000) != 0 )
    goto LABEL_9;
  FilterDriver = v9->FilterDriver;
  if ( FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
    && (FilterDriver->DefaultFilterCharacteristics.MajorNdisVersion != 6
     || FilterDriver->DefaultFilterCharacteristics.MinorNdisVersion < 0x14u) )
  {
LABEL_19:
    *((_DWORD *)a1 + 10) = -1073741637;
    return v2;
  }
  v16 = ndisSourcePreAddWoLPattern(0LL, v9, (struct _NDIS_OID_REQUEST *)v5, &v19);
  v2 = v19;
  *((_DWORD *)a1 + 10) = v16;
  if ( v2 )
    return v2;
LABEL_9:
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( v3->MajorNdisVersion > 6u || v3->MajorNdisVersion == 6 && v3->MinorNdisVersion >= 0x14u )
  {
    v10 = ndisMiniportPreAddWoLPattern(v3, (struct _NDIS_OID_REQUEST *)v5, &v19);
    v2 = v19;
    *((_DWORD *)a1 + 10) = v10;
    if ( !v2 )
      return 0;
  }
  else
  {
    v17 = ndisXlateAddWolPatternToPacketPatternOid((struct _NDIS_OID_REQUEST *)v5, &v19);
    v2 = v19;
    *((_DWORD *)a1 + 10) = v17;
    if ( v2 != 1 )
    {
      v18 = ndisSetAddWakeUpPattern(v3, (struct _NDIS_OID_REQUEST *)v5, &v19);
      v2 = v19;
      *((_DWORD *)a1 + 10) = v18;
      if ( v2 != 1 )
        return 0;
    }
  }
  return v2;
}
