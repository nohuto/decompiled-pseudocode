/*
 * XREFs of SeSetVirtualizationToken @ 0x14070C88C
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall SeSetVirtualizationToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  unsigned int v7; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v8, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( !a2 )
  {
    v7 = v5 & 0xFFFFFBFF;
    goto LABEL_5;
  }
  if ( (v5 & 0x200) != 0 )
  {
    v7 = v5 | 0x400;
LABEL_5:
    *(_DWORD *)(a1 + 200) = v7;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v8, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
