/*
 * XREFs of MiLockPageAndSetDirty @ 0x1402B7090
 * Callers:
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiMakePteClean @ 0x140262EA4 (MiMakePteClean.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     MiMakeCombineCandidateClean @ 0x140367AFC (MiMakeCombineCandidateClean.c)
 *     MmSetPageProtection @ 0x140377AF0 (MmSetPageProtection.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockPageAndSetDirty(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int8 v6; // di
  __int64 result; // rax
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
        KeYieldProcessorEx(&v13, a2, a3, a4);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v6 = MiLockPageInline(a1);
  }
  result = MiCaptureDirtyBitToPfn(a1);
  if ( result )
    v4 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( result )
    result = MiReleasePageFileInfo(v4, result, 1LL);
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
    result = v6;
    __writecr8(v6);
  }
  return result;
}
