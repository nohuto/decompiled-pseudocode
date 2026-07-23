/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140668330
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140668404 (ExpWnfSubscribeWnfStateChange.c)
 */

NTSTATUS __cdecl NtSubscribeWnfStateChange(
        PCWNF_STATE_NAME StateName,
        WNF_CHANGE_STAMP ChangeStamp,
        ULONG EventMask,
        PULONG64 SubscriptionId)
{
  int v7; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  NTSTATUS v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v7 = (int)StateName;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = 0LL;
  if ( SubscriptionId )
  {
    ProbeForWrite(SubscriptionId, 8uLL, 1u);
    *SubscriptionId = 0LL;
  }
  v10 = ExpWnfSubscribeWnfStateChange(
          (unsigned __int64)&v14 & -(__int64)(SubscriptionId != 0LL),
          0,
          v7,
          ChangeStamp,
          0LL,
          0LL,
          EventMask,
          1);
  if ( v10 >= 0 && SubscriptionId )
    *SubscriptionId = v14;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v11, v12);
  return v10;
}
