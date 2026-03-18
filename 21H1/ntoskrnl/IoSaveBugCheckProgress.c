/*
 * XREFs of IoSaveBugCheckProgress @ 0x1404FCCE0
 * Callers:
 *     IoWriteCrashDump @ 0x1404FD230 (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x140505BF0 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x140505CE8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140512600 (KiDisplayBlueScreen.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405BFB34 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1404FD140 (IoUpdateBugCheckProgressEnvVariable.c)
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
