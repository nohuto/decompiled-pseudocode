/*
 * XREFs of IoSaveBugCheckProgress @ 0x140500C00
 * Callers:
 *     IoWriteCrashDump @ 0x140501150 (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x140509B70 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x140509C68 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140516580 (KiDisplayBlueScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C3ED4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140501060 (IoUpdateBugCheckProgressEnvVariable.c)
 */

LONG __fastcall IoSaveBugCheckProgress(int a1)
{
  int v2; // r8d
  LONG result; // eax
  int v4; // edx
  _DWORD Src[10]; // [rsp+20h] [rbp-38h] BYREF

  if ( CrashdmpDumpBlock )
  {
    v2 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v2 & 0x60000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v2 ^ ((unsigned __int16)a1 ^ (unsigned __int16)v2) & 0x1FF;
      result = IoUpdateBugCheckProgressEnvVariable();
    }
    if ( a1 == 4 )
    {
      v4 = 4 - *(_DWORD *)(CrashdmpDumpBlock + 1336);
      Src[3] = 0;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[5] = -2147483613;
      Src[4] = 8961 - (v4 != 0);
      Src[6] = 24;
      Src[7] = 8;
      Src[9] = *(_DWORD *)(CrashdmpDumpBlock + 1404);
      Src[8] = *(_DWORD *)(CrashdmpDumpBlock + 24);
      return WheaLogInternalEvent(Src);
    }
  }
  return result;
}
