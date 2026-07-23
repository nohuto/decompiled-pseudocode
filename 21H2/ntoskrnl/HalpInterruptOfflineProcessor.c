/*
 * XREFs of HalpInterruptOfflineProcessor @ 0x1404D7420
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x1409A91AC (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn HalpInterruptOfflineProcessor(volatile signed __int32 *a1)
{
  ULONG_PTR v1; // r10
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  void (__fastcall *v5)(__int64, __int128 *); // rax
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = HalpInterruptController;
  v7 = 0LL;
  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  v5 = *(void (__fastcall **)(__int64, __int128 *))(v1 + 80);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v1 + 16);
    LODWORD(v7) = 4;
    v5(v6, &v7);
  }
  _InterlockedDecrement(&HalpInterruptProcessorsStarted);
  _InterlockedIncrement(a1);
  __halt();
}
