/*
 * XREFs of ?ndisOidPreAddPMProtocolOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091050
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z @ 0x1C00169F8 (-ndisIsValidPmCountedString@@YAEPEAU_NDIS_PM_COUNTED_STRING@@@Z.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B554 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0090650 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094B38 (-ndisSourcePreAddProtocolOffload@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID.c)
 */

unsigned __int8 __fastcall ndisOidPreAddPMProtocolOffload(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned __int8 v5; // r8
  __int64 v6; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // r9
  struct _NDIS_OPEN_BLOCK *v14; // r10
  int v15; // eax
  struct _NDIS_FILTER_BLOCK *v16; // rdx
  int v17; // eax
  int v18; // eax
  unsigned __int8 v20; // [rsp+30h] [rbp+8h] BYREF

  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = 1;
  v6 = *(_QWORD *)(v3 + 32);
  v7 = MiniportFromReqTracker;
  v20 = 1;
  if ( v4
    && (v8 = *(_QWORD *)(v4 + 24), *(_BYTE *)(v8 + 56) <= 6u)
    && (*(_BYTE *)(v8 + 56) != 6 || *(_BYTE *)(v8 + 57) < 0x14u)
    || (v9 = *((_QWORD *)a1 + 1)) != 0
    && (*(_DWORD *)(v6 + 88) & 0x4000) == 0
    && (v10 = *(_QWORD *)(v9 + 16), *(_BYTE *)(v10 + 100) <= 6u)
    && (*(_BYTE *)(v10 + 100) != 6 || *(_BYTE *)(v10 + 101) < 0x14u)
    || *(_DWORD *)(v6 + 4) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return v5;
  }
  if ( (*(_DWORD *)(v6 + 88) & 0xC0000) != 0 )
    return 0;
  v11 = *(_QWORD *)(v6 + 40);
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v6 + 48) < 0x100u )
  {
    *(_DWORD *)(v6 + 56) = 256;
    *((_DWORD *)a1 + 10) = -1073676268;
    return v5;
  }
  if ( *(_BYTE *)v11 != 0x80 )
  {
LABEL_18:
    *((_DWORD *)a1 + 10) = -1073676267;
    return v5;
  }
  v12 = *(_BYTE *)(v11 + 1);
  if ( v12 == 1 )
  {
    if ( *(_WORD *)(v11 + 2) < 0xF0u )
      goto LABEL_18;
  }
  else if ( v12 != 2 || *(_WORD *)(v11 + 2) < 0x100u )
  {
    goto LABEL_18;
  }
  if ( !ndisIsValidPmCountedString((struct _NDIS_PM_COUNTED_STRING *)(v11 + 16))
    || *(_DWORD *)(v13 + 152)
    || (unsigned int)(*(_DWORD *)(v13 + 12) - 1) > 3 )
  {
    goto LABEL_18;
  }
  if ( !*((_QWORD *)a1 + 3)
    || (v15 = ndisSourcePreAddProtocolOffload(v14, 0LL, (struct _NDIS_OID_REQUEST *)v6, &v20),
        v5 = v20,
        *((_DWORD *)a1 + 10) = v15,
        !v5) )
  {
    v16 = (struct _NDIS_FILTER_BLOCK *)*((_QWORD *)a1 + 1);
    if ( !v16
      || (*(_DWORD *)(v6 + 88) & 0x4000) != 0
      || (v17 = ndisSourcePreAddProtocolOffload(0LL, v16, (struct _NDIS_OID_REQUEST *)v6, &v20),
          v5 = v20,
          *((_DWORD *)a1 + 10) = v17,
          !v5) )
    {
      if ( !*(_QWORD *)a1 )
        return 0;
      v18 = ndisMiniportPreAddProtocolOffload(v7, (struct _NDIS_OID_REQUEST *)v6, (char *)&v20);
      v5 = v20;
      *((_DWORD *)a1 + 10) = v18;
      if ( !v5 )
        return 0;
    }
  }
  return v5;
}
