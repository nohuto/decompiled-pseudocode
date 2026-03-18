/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x140373E1C
 * Callers:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiQueryAddressSpan @ 0x14030EC70 (MiQueryAddressSpan.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiQueueForceTrimRequest @ 0x140373F2C (MiQueueForceTrimRequest.c)
 *     MiSelfTrim @ 0x140374278 (MiSelfTrim.c)
 *     MiReduceWs @ 0x14037443C (MiReduceWs.c)
 */

void __fastcall MiPreUnlockWorkingSetShared(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  char v3; // si
  int v5; // eax
  volatile LONG *SharedVm; // rax
  volatile LONG *v7; // rax
  __int64 v8; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
    return;
  v5 = *(_DWORD *)(a1 + 188);
  if ( (v5 & 3) != 0 )
  {
    if ( (v5 & 4) != 0 )
    {
      if ( ((*(_BYTE *)(a1 + 184) & 0x40) == 0
         || *(_QWORD *)(a1 + 128) <= (unsigned __int64)(*(_QWORD *)(a1 + 120) + 64LL))
        && (unsigned __int64)MiGetAvailablePagesBelowPriority(
                               *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)),
                               6u) >= 0x120 )
      {
        goto LABEL_7;
      }
    }
    else if ( (unsigned int)MiQueueForceTrimRequest() )
    {
      goto LABEL_7;
    }
    LOBYTE(a2) = v3;
    MiSelfTrim(a1, a2);
  }
LABEL_7:
  if ( (*(_BYTE *)(a1 + 187) & 0x10) != 0 )
  {
    SharedVm = (volatile LONG *)MiGetSharedVm(a1);
    ExAcquireSpinLockExclusiveAtDpcLevel(SharedVm + 16);
    *(_BYTE *)(a1 + 187) &= ~0x10u;
    v7 = (volatile LONG *)MiGetSharedVm(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(v7 + 16);
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    LOBYTE(v8) = v3;
    MiReduceWs(a1, v8, *(_QWORD *)(a1 + 120));
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
}
