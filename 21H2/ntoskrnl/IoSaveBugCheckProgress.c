/*
 * XREFs of IoSaveBugCheckProgress @ 0x140552B40
 * Callers:
 *     IoWriteCrashDump @ 0x140553244 (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x14055CC5C (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055CF88 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KiBugCheckWriteCrashDump @ 0x140567588 (KiBugCheckWriteCrashDump.c)
 *     KiCollectTriageDumpDataBlocks @ 0x140567630 (KiCollectTriageDumpDataBlocks.c)
 *     KiDisplayBlueScreen @ 0x140567874 (KiDisplayBlueScreen.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x140579B48 (KiUpdateBugcheckRecoveryProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14064E9C0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x140553164 (IoUpdateBugCheckProgressEnvVariable.c)
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
    if ( (v2 & 0x860000) == 0 )
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
