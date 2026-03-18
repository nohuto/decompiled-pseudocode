/*
 * XREFs of FillDevmodeFromVidPn @ 0x1C00DF328
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00E02B8 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00DF3C0 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 */

__int64 __fastcall FillDevmodeFromVidPn(__int64 a1, int a2, void *a3)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  const struct DMMVIDPNPRESENTPATH *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // rax

  LODWORD(v6) = -1073741823;
  memset(a3, 0, 0xF4uLL);
  v7 = *(_QWORD *)(a1 + 120);
  v8 = 0LL;
  if ( v7 != a1 + 120 )
    v8 = (const struct DMMVIDPNPRESENTPATH *)(v7 - 8);
  while ( v8 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v8 + 11) + 24LL) == a2 )
    {
      v9 = VIDPN_MGR::PopulateGdiDisplayModeFromPath(v8, (struct _CDD_DEVMODE *)a3);
      v6 = v9;
      if ( v9 < 0 )
      {
        v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v15 + 24) = v8;
        *(_QWORD *)(v15 + 32) = v6;
        WdLogEvent5_WdWarning(v15);
      }
      return (unsigned int)v6;
    }
    v14 = *((_QWORD *)v8 + 1);
    v8 = (const struct DMMVIDPNPRESENTPATH *)(v14 - 8);
    if ( v14 == a1 + 120 )
      v8 = 0LL;
  }
  return (unsigned int)v6;
}
