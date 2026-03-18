/*
 * XREFs of MiLockPageAndSetDirty @ 0x140224410
 * Callers:
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiMakePteClean @ 0x1402BBED4 (MiMakePteClean.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     MiMakeCombineCandidateClean @ 0x14036713C (MiMakeCombineCandidateClean.c)
 *     MmSetPageProtection @ 0x140376CE0 (MmSetPageProtection.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockPageAndSetDirty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int8 v5; // di
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( (_DWORD)a2 == 1 )
  {
    v12 = 0;
    v5 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v5 = MiLockPageInline(a1, a2, a3);
  }
  result = MiCaptureDirtyBitToPfn(a1);
  if ( result )
    v3 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    result = MiReleasePageFileInfo(v3, result, 1LL);
  if ( v5 != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
