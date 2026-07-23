/*
 * XREFs of NtDeleteDriverEntry @ 0x14094E850
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D24B0 (swprintf_s.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x1408954AC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1408957BC (IoSetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtDeleteDriverEntry(ULONG Id)
{
  KPROCESSOR_MODE PreviousMode; // dl
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+30h] [rbp-38h] BYREF
  size_t Dst[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_140C19730 != 2 )
    return -1073741822;
  if ( Id > 0xFFFF )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
    return -1073741727;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", Id);
  v9 = 0;
  EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v9, 0LL);
  if ( EnvironmentVariable != -1073741568 )
    goto LABEL_11;
  if ( ((2 * ((Id | (2 * Id)) & 0xC4444444)) & Id) != 0 )
  {
    swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x", Id);
    v9 = 0;
    EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, &v9, 0LL);
LABEL_11:
    if ( !EnvironmentVariable || EnvironmentVariable == -1073741789 )
      EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, 0, 1);
  }
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
  return EnvironmentVariable;
}
