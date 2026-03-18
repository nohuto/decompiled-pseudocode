/*
 * XREFs of DesktopAlloc @ 0x1C00ADCA0
 * Callers:
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     _InitPwSB @ 0x1C0027658 (_InitPwSB.c)
 *     xxxConsoleControl @ 0x1C0027F08 (xxxConsoleControl.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00313C8 (xxxCreateDefaultImeWindow.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C005DDA0 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     DefSetText @ 0x1C00ADA20 (DefSetText.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00AECD0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0118DD8 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DesktopAlloc(__int64 a1, unsigned int a2)
{
  PVOID Heap; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
    return 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 128), 0, a2);
  if ( !Heap && (*gpsi & 0x100) != 0 )
  {
    _InterlockedAnd(gpsi, 0xFFFFFEFF);
    UserLogError(2147483891LL);
  }
  return Heap;
}
