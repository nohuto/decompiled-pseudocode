/*
 * XREFs of SeSetVirtualizationToken @ 0x1406E88BC
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *__fastcall SeSetVirtualizationToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // eax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v11, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( !a2 )
  {
    v10 = v5 & 0xFFFFFBFF;
    goto LABEL_5;
  }
  if ( (v5 & 0x200) != 0 )
  {
    v10 = v5 | 0x400;
LABEL_5:
    *(_DWORD *)(a1 + 200) = v10;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v11, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
}
