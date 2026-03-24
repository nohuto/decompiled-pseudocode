/*
 * XREFs of MiLockPageAndSetDirty @ 0x14030FA6C
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiMakePteClean @ 0x14030F56C (MiMakePteClean.c)
 *     MiMakeCombineCandidateClean @ 0x140369D8C (MiMakeCombineCandidateClean.c)
 *     MmSetPageProtection @ 0x140379C80 (MmSetPageProtection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiLockPageAndSetDirty(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned __int8 v6; // di
  unsigned __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( (_DWORD)a2 == 1 )
  {
    v13 = 0;
    v6 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v13, a2, a3, (__int64)a4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v6 = MiLockPageInline(a1, a2, a3, a4);
  }
  v7 = MiCaptureDirtyBitToPfn(a1);
  if ( v7 )
    v4 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
    MiReleasePageFileInfo(v4, v7, 1);
  if ( v6 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
}
