/*
 * XREFs of ndisMSetPowerManagementCapabilities @ 0x1C003D818
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C00237A4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ndisRssPmObjectHeaderFixup @ 0x1C0023D3C (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

__int64 __fastcall ndisMSetPowerManagementCapabilities(__int64 a1, __int64 a2)
{
  void *v2; // rbp
  size_t v5; // rdi
  char v6; // al
  unsigned __int16 v7; // cx

  v2 = (void *)(a1 + 1000);
  *(_OWORD *)(a1 + 1000) = 0LL;
  *(_OWORD *)(a1 + 1016) = 0LL;
  v5 = 60LL;
  *(_OWORD *)(a1 + 1032) = 0LL;
  *(_QWORD *)(a1 + 1048) = 0LL;
  *(_DWORD *)(a1 + 1056) = 0;
  if ( *(_BYTE *)(a2 + 1) >= 2u )
  {
    v6 = 2;
    v7 = 60;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 32) > 6u || *(_BYTE *)(a1 + 32) == 6 && *(_BYTE *)(a1 + 33) >= 0x50u )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x76u,
          (struct _GUID *)&WPP_155eeae1e7503765e0b6eba6f413c090_Traceguids,
          a1,
          a2);
      return 3223519276LL;
    }
    v6 = 1;
    v7 = 52;
  }
  if ( ndisRssPmObjectHeaderFixup((__int64)"PowerManagementCapabilities", a2, 128, v6, v7)
    && (*(_BYTE *)(a1 + 32) > 6u || *(_BYTE *)(a1 + 32) == 6 && *(_BYTE *)(a1 + 33) >= 0x50u) )
  {
    return 3223519276LL;
  }
  if ( *(_WORD *)(a2 + 2) < 0x3Cu )
    v5 = *(unsigned __int16 *)(a2 + 2);
  memmove(v2, (const void *)a2, v5);
  return 0LL;
}
