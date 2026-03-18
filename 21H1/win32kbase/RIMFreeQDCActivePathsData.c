/*
 * XREFs of RIMFreeQDCActivePathsData @ 0x1C00A4A24
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C00A37A8 (RIMOnDisplayStateChange.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00A46B0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     RIMGetQDCActivePathsData @ 0x1C00A4CD8 (RIMGetQDCActivePathsData.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0168B18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMFindMonitorForDigitizer @ 0x1C016CEB0 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall RIMFreeQDCActivePathsData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
      Win32FreePool(v4, a2, a3);
    *(_OWORD *)a1 = 0LL;
  }
}
