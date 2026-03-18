/*
 * XREFs of AddHmodDependency @ 0x1C0074FE8
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C0074888 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0076C94 (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x1C011D224 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0127C48 (_RegisterUserApiHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00754E0 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
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
