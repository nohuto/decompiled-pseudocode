/*
 * XREFs of HalpInterruptEnableNmi @ 0x1403A38BC
 * Callers:
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 *     HalpInterruptInitSystem @ 0x14099C890 (HalpInterruptInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A9408 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140378880 (HalpInterruptDestinationToTarget.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x140378AAC (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403CB924 (HalpInterruptSetRemappedLineStateInternal.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1404C5874 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpHvMapDeviceInterrupt @ 0x1409A8098 (HalpHvMapDeviceInterrupt.c)
 */

__int64 HalpInterruptEnableNmi()
{
  unsigned __int8 v0; // al
  struct _KPRCB *CurrentPrcb; // r15
  ULONG_PTR v2; // r14
  unsigned int v3; // ecx
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  __int64 v6; // rsi
  char v7; // dl
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // ecx
  int v12; // ebx
  __int64 Number; // rcx
  __int64 v15; // rax
  _QWORD *Lines; // rax
  __int64 v17; // rcx
  ULONG_PTR *v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v22; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-41h]
  __int128 v28; // [rsp+58h] [rbp-39h] BYREF
  __int128 v29; // [rsp+68h] [rbp-29h] BYREF
  __int128 v30; // [rsp+78h] [rbp-19h]
  __int64 v31; // [rsp+88h] [rbp-9h]
  __int128 v32; // [rsp+90h] [rbp-1h] BYREF
  __int128 *v33; // [rsp+A0h] [rbp+Fh]
  __int128 v34; // [rsp+A8h] [rbp+17h] BYREF
  __int128 v35; // [rsp+B8h] [rbp+27h] BYREF

  v26 = 0LL;
  v27 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v35 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v34 = 0LL;
  v0 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0LL;
  v3 = 0;
  v4 = v0;
  v5 = (unsigned int)HalpInterruptProcessorCount;
  if ( (_DWORD)HalpInterruptProcessorCount )
  {
    while ( 1 )
    {
      v2 = HalpInterruptProcessorState + ((unsigned __int64)v3 << 6);
      if ( *(_WORD *)(v2 + 16) == CurrentPrcb->Group && *(_BYTE *)(v2 + 18) == CurrentPrcb->GroupIndex )
        break;
      if ( ++v3 >= (unsigned int)HalpInterruptProcessorCount )
        goto LABEL_7;
    }
    v5 = v3;
  }
LABEL_7:
  if ( (_DWORD)v5 == (_DWORD)HalpInterruptProcessorCount )
    KeBugCheckEx(
      0x5Cu,
      0x104uLL,
      CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8),
      (unsigned int)HalpInterruptProcessorCount,
      0LL);
  v6 = HalpInterruptNmiSources;
  if ( !HalpInterruptNmiSources )
  {
LABEL_19:
    v12 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v7 = 0;
    if ( *(_BYTE *)(v6 + 8) )
      break;
    if ( !CurrentPrcb->Number )
      goto LABEL_13;
LABEL_18:
    v6 = *(_QWORD *)v6;
    if ( !v6 )
      goto LABEL_19;
  }
  if ( !*(_BYTE *)(v2 + 13) )
    goto LABEL_18;
  v8 = *(_DWORD *)(v6 + 12);
  if ( v8 != -1 && v8 != *(_DWORD *)(v2 + 4) )
    goto LABEL_18;
  v7 = 1;
LABEL_13:
  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v34 = 0LL;
  if ( *(_BYTE *)(v6 + 8) )
  {
    v9 = (*(_DWORD *)(v6 + 16) & 0xC) != 12;
    DWORD2(v28) = v9;
    v10 = ((*(_BYTE *)(v6 + 16) & 3) == 3) + 1;
  }
  else
  {
    v9 = (*(_DWORD *)(v6 + 16) & 8) == 0;
    DWORD2(v28) = v9;
    v10 = 2 - ((*(_BYTE *)(v6 + 16) & 3u) < 2);
  }
  v32 = 0uLL;
  *(_QWORD *)&v29 = 0x2FFFFFFFFLL;
  LODWORD(v34) = v34 & 0x80000000 | 0x40000002;
  v33 = &v34;
  LODWORD(v28) = v10;
  HIDWORD(v28) = 16;
  if ( v7 )
  {
    LODWORD(v32) = 5;
    v11 = *(_DWORD *)(HalpInterruptController + 232);
    HIDWORD(v26) = *(_DWORD *)(v6 + 20);
    LODWORD(v26) = v11;
LABEL_17:
    LOBYTE(v5) = 15;
    v12 = HalpInterruptSetLineState(&v26, 0LL, v5, v9, v10, &v32, &v29);
    if ( v12 < 0 )
      goto LABEL_20;
    goto LABEL_18;
  }
  if ( (int)HalpInterruptGsiToLine(*(unsigned int *)(v6 + 20), &v26) < 0 )
  {
    HalpInterruptLastProblem = 18;
    goto LABEL_18;
  }
  if ( HalpInterruptPhysicalModeOnly )
  {
    LODWORD(v32) = 3;
  }
  else
  {
    v35 = 0LL;
    Number = CurrentPrcb->Number;
    LODWORD(v32) = 1;
    v15 = 0LL;
    _bittestandset64(&v15, KiProcessorIndexToNumberMappingTable[Number] & 0x3F);
    *(_QWORD *)&v35 = v15;
    *((_QWORD *)&v32 + 1) = &v35;
  }
  Lines = HalpInterruptFindLines((unsigned int *)&v26);
  if ( Lines )
  {
    if ( !*(_BYTE *)(Lines[6] + 16LL * v27 + 12) )
    {
      v18 = HalpInterruptLookupController(v26);
      if ( !v18 )
      {
        HalpInterruptLastProblem = 17;
        goto LABEL_49;
      }
      v19 = HalpInterruptDestinationToTarget(v17, (__int64)&v32, (__int64)&v29 + 8);
      if ( v19 < 0 )
      {
        *((_DWORD *)v18 + 74) = v19;
        HalpInterruptLastProblem = 19;
        v18[38] = (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c";
        *((_DWORD *)v18 + 73) = 19;
        *((_DWORD *)v18 + 78) = 1546;
        goto LABEL_49;
      }
      if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 && KeGetCurrentPrcb()->CpuVendor != 1 )
      {
        HalpIommuUpdateRemappingTableEntry(0LL, v34 & 0x3FFFFFFF, &v28);
        DWORD2(v29) = 7;
        LODWORD(v30) = v34 & 0x3FFFFFFF;
      }
      if ( qword_140C4A1E8 )
      {
        v12 = HalpHvMapDeviceInterrupt(*((unsigned int *)v18 + 58), v20, &v28, 0LL);
        if ( v12 < 0 )
        {
          *((_DWORD *)v18 + 74) = v12;
          HalpInterruptLastProblem = 31;
          *((_DWORD *)v18 + 73) = 31;
          v18[38] = (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c";
          *((_DWORD *)v18 + 78) = 1597;
          goto LABEL_20;
        }
      }
      HIDWORD(v28) &= ~0x10u;
      v12 = HalpInterruptSetRemappedLineStateInternal(v18, &v26, &v28);
      if ( v12 < 0 )
        goto LABEL_20;
      v9 = DWORD2(v28);
      v10 = v28;
    }
    goto LABEL_17;
  }
  HalpInterruptLastProblem = 18;
LABEL_49:
  v12 = -1073741275;
LABEL_20:
  KxReleaseSpinLock(&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        SchedulerAssist = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(v4);
  return (unsigned int)v12;
}
