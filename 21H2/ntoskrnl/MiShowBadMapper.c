/*
 * XREFs of MiShowBadMapper @ 0x14052D1EC
 * Callers:
 *     MiFillSystemPtes @ 0x140226EF0 (MiFillSystemPtes.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiInsertPhysicalPteMapping @ 0x140298318 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x1403C8C44 (MiMapMdlCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CE20 (RtlCaptureStackBackTrace.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmLockLoadedModuleListExclusive @ 0x140372568 (MmLockLoadedModuleListExclusive.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 result; // rax
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 *v9; // rdi
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v12; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17[4]; // [rsp+30h] [rbp-68h] BYREF
  ULONG BackTraceHash[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  BackTraceHash[0] = 0;
  v17[0] = 0;
  result = (__int64)memset(BackTrace, 0, sizeof(BackTrace));
  v5 = byte_140C4E7FB;
  if ( byte_140C4E7FB )
    goto LABEL_23;
  if ( (a2 & 1) != 0 && KdPitchDebugger == byte_140C4E7FB && (_BYTE)KdDebuggerNotPresent == byte_140C4E7FB )
LABEL_24:
    KeBugCheckEx(0x1Au, 0x1233uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (a2 & 4) != 0 )
  {
    RtlCaptureStackBackTrace(1u, 8u, BackTrace, BackTraceHash);
    MmLockLoadedModuleListExclusive(v17);
    v8 = 0;
    v9 = (unsigned __int64 *)BackTrace;
    while ( *v9 > 0x7FFFFFFEFFFFLL )
    {
      v10 = MiLookupDataTableEntry(*v9, 0LL, v6, v7);
      if ( v10 && (*(_DWORD *)(v10 + 104) & 0x2000000) != 0 && (MmVerifierData & 0x400000) == 0 )
      {
        v5 = 1;
        break;
      }
      ++v8;
      ++v9;
      if ( v8 >= 8 )
        break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v12 = v17[0];
      if ( v17[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = v17[0];
        v15 = ~(unsigned __int16)(-1LL << (v17[0] + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v12 = v17[0];
    }
    result = v12;
    __writecr8(v12);
LABEL_23:
    if ( v5 == 1 )
      goto LABEL_24;
  }
  return result;
}
