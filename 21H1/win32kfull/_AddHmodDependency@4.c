/*
 * XREFs of _AddHmodDependency@4 @ 0x15F82
 * Callers:
 *     _zzzSetWindowsHookEx@24 @ 0x13290 (_zzzSetWindowsHookEx@24.c)
 *     __SetWinEventHook@32 @ 0x148F0 (__SetWinEventHook@32.c)
 *     __RegisterDManipHook@0 @ 0xE43A6 (__RegisterDManipHook@0.c)
 *     __RegisterUserApiHook@16 @ 0xEABF4 (__RegisterUserApiHook@16.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x16A32 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  tagDomLock *v2; // [esp+4h] [ebp-4h] BYREF

  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v2);
  if ( a1 < catomSysTableEntries )
    (&acatomSysDepends)[a1] = (int *)((char *)(&acatomSysDepends)[a1] + 1);
  tagDomLock::UnLockExclusive(v2);
}
