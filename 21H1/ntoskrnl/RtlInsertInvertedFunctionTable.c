/*
 * XREFs of RtlInsertInvertedFunctionTable @ 0x14036EE6C
 * Callers:
 *     MiProcessLoaderEntry @ 0x14036EFD4 (MiProcessLoaderEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x14036EEF0 (RtlpInsertInvertedFunctionTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14036F1EC (MmLockLoadedModuleListExclusive.c)
 *     RtlCaptureImageExceptionValues @ 0x14036F230 (RtlCaptureImageExceptionValues.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlInsertInvertedFunctionTable(__int64 a1, int a2)
{
  int v3; // edi
  int v4; // ecx
  unsigned __int8 v5; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = 0LL;
  v14 = 0;
  v13 = 0;
  v3 = a1;
  RtlCaptureImageExceptionValues(a1, v12, &v14);
  MmLockLoadedModuleListExclusive(&v13);
  RtlpInsertInvertedFunctionTableEntry(v4, v3, v12[0], a2, v14);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v5 = v13;
    if ( v13 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v5 = v13;
      v10 = ~(unsigned __int16)(-1LL << (v13 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v5 = v13;
  }
  result = v5;
  __writecr8(v5);
  return result;
}
