/*
 * XREFs of PspSetProcessPriorityClass @ 0x1406DFD24
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406E8A74 (PspApplyIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 == 4
    && *(_BYTE *)(a1 + 1463) != 4
    && !(a3
       ? ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
           SeIncreaseBasePriorityPrivilege,
           a3,
           512LL,
           a4)
       : SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a4)) )
  {
    return 3221225569LL;
  }
  v6 = *(_QWORD *)(a1 + 1296);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    if ( (*(_DWORD *)(v6 + 848) & 0x20) != 0 )
      v4 = *(_BYTE *)(v6 + 872);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v8, v9, v10);
  }
  *(_BYTE *)(a1 + 1463) = v4;
  return 0LL;
}
