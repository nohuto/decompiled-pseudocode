/*
 * XREFs of DesktopAlloc @ 0x1C0036AD0
 * Callers:
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C0033FAC (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00364FC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     xxxConsoleControl @ 0x1C003B148 (xxxConsoleControl.c)
 *     DefSetText @ 0x1C004ACE8 (DefSetText.c)
 *     _InitPwSB @ 0x1C005E044 (_InitPwSB.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00BC098 (xxxCreateDefaultImeWindow.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C01198A0 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
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
