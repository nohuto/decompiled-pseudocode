/*
 * XREFs of NtSetBootOptions @ 0x1409505F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x1408957BC (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtSetBootOptions(int *a1, char a2)
{
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // r8
  unsigned int v9; // eax
  struct _KTHREAD *v10; // rax
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v16 = 0;
  v17[0] = 0;
  if ( dword_140C19730 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v6 = (unsigned __int64)(a1 + 1);
  if ( PreviousMode )
  {
    if ( v6 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v7 = *(_DWORD *)v6;
  }
  else
  {
    v7 = *(_DWORD *)v6;
  }
  v17[1] = v7;
  if ( v7 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int64)a1 + v7;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  v18 = *a1;
  if ( v18 != 1 )
    return 3221225485LL;
  v16 = a1[2];
  v9 = a1[4];
  v17[0] = v9;
  if ( (a2 & 2) != 0 && v9 > 0xFFFF )
    return 3221225485LL;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = 0;
  if ( (a2 & 1) != 0 )
  {
    v12 = v16;
    if ( v16 == -1 )
    {
      v16 = 0xFFFF;
    }
    else
    {
      if ( v16 > 0xFFFE )
        v12 = 65534;
      v16 = v12;
    }
    v11 = IoSetEnvironmentVariableEx((const size_t *)L"Timeout", (__int64)&EfiBootVariablesGuid, (__int64)&v16, 2, 1);
  }
  if ( v11 >= 0 && (a2 & 2) != 0 )
    v11 = IoSetEnvironmentVariableEx((const size_t *)L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)v17, 2, 1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  return (unsigned int)v11;
}
