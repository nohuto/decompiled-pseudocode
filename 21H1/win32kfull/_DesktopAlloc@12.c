/*
 * XREFs of _DesktopAlloc@12 @ 0x1EAD0
 * Callers:
 *     _xxxConsoleControl@12 @ 0x1A9EA (_xxxConsoleControl@12.c)
 *     _xxxCreateDefaultImeWindow@12 @ 0x1D8EA (_xxxCreateDefaultImeWindow@12.c)
 *     ?MNAllocMenuItems@@YGHABV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1DDEC (-MNAllocMenuItems@@YGHABV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     _DefSetText@8 @ 0x1E45A (_DefSetText@8.c)
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     __InitPwSB@4 @ 0x6E5B6 (__InitPwSB@4.c)
 *     ?xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z @ 0xA9B34 (-xxxCreateDesktopEx2@@YGJPAUtagWINDOWSTATION@@PAU_ACCESS_STATE@@DPAU_UNICODE_STRING@@KPAPAX@Z.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 * Callees:
 *     <none>
 */

PVOID __stdcall DesktopAlloc(int a1, SIZE_T Size, int a3)
{
  PVOID Heap; // esi

  if ( (*(_BYTE *)(a1 + 24) & 8) != 0 )
    return 0;
  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 64), 0, Size);
  if ( !Heap && (*_gpsi & 0x100) != 0 )
  {
    _InterlockedAnd(_gpsi, 0xFFFFFEFF);
    UserLogError(-2147483405);
  }
  return Heap;
}
