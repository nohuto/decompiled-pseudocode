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

NTSTATUS __cdecl NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  char v2; // si
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 p_Length; // rax
  unsigned int v7; // eax
  char *v8; // r8
  ULONG NextBootEntryId; // eax
  struct _KTHREAD *v10; // rax
  NTSTATUS v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG Timeout; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-30h] BYREF
  ULONG Version; // [rsp+40h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v2 = FieldsToChange;
  Timeout = 0;
  v17[0] = 0;
  if ( dword_140C19730 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  p_Length = (unsigned __int64)&BootOptions->Length;
  if ( PreviousMode )
  {
    if ( p_Length >= 0x7FFFFFFF0000LL )
      p_Length = 0x7FFFFFFF0000LL;
    v7 = *(_DWORD *)p_Length;
  }
  else
  {
    v7 = *(_DWORD *)p_Length;
  }
  v17[1] = v7;
  if ( v7 < 0x14 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)BootOptions & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)BootOptions + v7;
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < (char *)BootOptions )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  Version = BootOptions->Version;
  if ( Version != 1 )
    return -1073741811;
  Timeout = BootOptions->Timeout;
  NextBootEntryId = BootOptions->NextBootEntryId;
  v17[0] = NextBootEntryId;
  if ( (v2 & 2) != 0 && NextBootEntryId > 0xFFFF )
    return -1073741811;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = 0;
  if ( (v2 & 1) != 0 )
  {
    v12 = Timeout;
    if ( Timeout == -1 )
    {
      Timeout = 0xFFFF;
    }
    else
    {
      if ( Timeout > 0xFFFE )
        v12 = 65534;
      Timeout = v12;
    }
    v11 = IoSetEnvironmentVariableEx(
            (const size_t *)L"Timeout",
            (__int64)&EfiBootVariablesGuid,
            (__int64)&Timeout,
            2,
            1);
  }
  if ( v11 >= 0 && (v2 & 2) != 0 )
    v11 = IoSetEnvironmentVariableEx((const size_t *)L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)v17, 2, 1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  return v11;
}
