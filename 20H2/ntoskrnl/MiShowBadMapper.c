/*
 * XREFs of MiShowBadMapper @ 0x14052B6EC
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiMapMdlCommon @ 0x1403C80A4 (MiMapMdlCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140228FF0 (RtlCaptureStackBackTrace.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x140371D6C (MmLockLoadedModuleListExclusive.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 result; // rax
  char v5; // si
  unsigned int v6; // ebx
  unsigned __int64 *v7; // rdi
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v10; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15[4]; // [rsp+30h] [rbp-68h] BYREF
  ULONG BackTraceHash[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  BackTraceHash[0] = 0;
  v15[0] = 0;
  result = (__int64)memset(BackTrace, 0, sizeof(BackTrace));
  v5 = byte_140C4E67B;
  if ( byte_140C4E67B )
    goto LABEL_23;
  if ( (a2 & 1) != 0 && KdPitchDebugger == byte_140C4E67B && (_BYTE)KdDebuggerNotPresent == byte_140C4E67B )
LABEL_24:
    KeBugCheckEx(0x1Au, 0x1233uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (a2 & 4) != 0 )
  {
    RtlCaptureStackBackTrace(1u, 8u, BackTrace, BackTraceHash);
    MmLockLoadedModuleListExclusive(v15);
    v6 = 0;
    v7 = (unsigned __int64 *)BackTrace;
    while ( *v7 > 0x7FFFFFFEFFFFLL )
    {
      v8 = MiLookupDataTableEntry(*v7, 0);
      if ( v8 && (*(_DWORD *)(v8 + 104) & 0x2000000) != 0 && (MmVerifierData & 0x400000) == 0 )
      {
        v5 = 1;
        break;
      }
      ++v6;
      ++v7;
      if ( v6 >= 8 )
        break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v10 = v15[0];
      if ( v15[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = v15[0];
        v13 = ~(unsigned __int16)(-1LL << (v15[0] + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v10 = v15[0];
    }
    result = v10;
    __writecr8(v10);
LABEL_23:
    if ( v5 == 1 )
      goto LABEL_24;
  }
  return result;
}
