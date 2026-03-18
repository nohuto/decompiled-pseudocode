/*
 * XREFs of MiReferenceControlAreaFileWithTag @ 0x14027A794
 * Callers:
 *     MiDeprioritizeVad @ 0x1402598CC (MiDeprioritizeVad.c)
 *     MmFlushSection @ 0x140283C50 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiCreateSystemSection @ 0x1402D9E3C (MiCreateSystemSection.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MmGetFileObjectForSection @ 0x14066BA80 (MmGetFileObjectForSection.c)
 *     PsReferenceProcessFilePointer @ 0x140673AD0 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x14070F3A8 (PspInitializeFullProcessImageName.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14027A950 (ObFastReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferenceControlAreaFileWithTag(__int64 a1, __int64 a2)
{
  ULONG v3; // esi
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v3 = a2;
  result = ObFastReferenceObject(a1 + 64, a2);
  if ( !result )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
    v6 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 )
      ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), v3);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
    return v6;
  }
  return result;
}
