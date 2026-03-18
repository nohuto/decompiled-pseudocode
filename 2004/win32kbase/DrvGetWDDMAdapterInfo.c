/*
 * XREFs of DrvGetWDDMAdapterInfo @ 0x1C00A7820
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C000C6A4 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMGetDisplayMonitor @ 0x1C0166CD8 (RIMGetDisplayMonitor.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C00A7CD0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 */

__int64 __fastcall DrvGetWDDMAdapterInfo(__int64 a1, int a2, struct _LUID *a3, _DWORD *a4)
{
  __int64 v4; // r10
  struct _LUID *v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  v10 = a1;
  if ( a1
    && (a2 || (*(_DWORD *)(a1 + 40) & 0x400) == 0)
    && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
    && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10)
    && *(_QWORD *)(a1 + 2576) != v4 )
  {
    v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
    LODWORD(v4) = 1;
    *a3 = *v8;
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 2576) + 256LL);
  }
  return (unsigned int)v4;
}
