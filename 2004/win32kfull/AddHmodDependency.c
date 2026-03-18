/*
 * XREFs of AddHmodDependency @ 0x1C0046128
 * Callers:
 *     _SetWinEventHook @ 0x1C0043FA4 (_SetWinEventHook.c)
 *     zzzSetWindowsHookEx @ 0x1C00459C8 (zzzSetWindowsHookEx.c)
 *     _RegisterDManipHook @ 0x1C011C264 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0126348 (_RegisterUserApiHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0046620 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 */

void __fastcall AddHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagDomLock *v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v2);
  if ( (int)v1 < catomSysTableEntries )
    ++*((_DWORD *)&acatomSysDepends + v1);
  tagDomLock::UnLockExclusive(v2);
}
