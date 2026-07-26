/*
 * XREFs of ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00AEAB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00196A4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001D1DC (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?IsOidRequestDirectOid@@YAEK@Z @ 0x1C00AE478 (-IsOidRequestDirectOid@@YAEK@Z.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00AE4A4 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 */

__int64 __fastcall ndisMDirectOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v4; // edi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  char v7[4]; // [rsp+38h] [rbp-20h]

  v4 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)a1,
      a2);
  if ( IsOidRequestDirectOid(a2->DATA.QUERY_INFORMATION.Oid) )
  {
    if ( ndisReferenceOpenByHandle((__int64)a1, 6u) )
    {
      if ( !*(_QWORD *)(a1[3] + 776LL) )
        goto LABEL_10;
      v5 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
      if ( (v5->DriverVerifyFlags & 0x400) == 0 )
        a2->SupportedRevision = 1;
      memset(a2->NdisReserved, 0, 0x60uLL);
      *(_DWORD *)&a2->NdisReserved[16] |= 0x200020u;
      *(_QWORD *)&a2->NdisReserved[24] = 0LL;
      *(_QWORD *)&a2->NdisReserved[32] = a1;
      v4 = ndisDoDirectOidRequest(a2, v5, 0LL, 0LL);
      if ( v4 != 259 )
LABEL_10:
        ndisMDereferenceOpenUnlocked((__int64)a1, 6);
    }
    else
    {
      v4 = -1073676286;
    }
  }
  else
  {
    v4 = -1073741637;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xEu,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)a1,
      (char)a2,
      *(_DWORD *)v7);
  }
  return v4;
}
