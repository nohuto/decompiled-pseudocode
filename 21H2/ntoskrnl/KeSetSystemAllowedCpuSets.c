/*
 * XREFs of KeSetSystemAllowedCpuSets @ 0x140228DBC
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     KiInitializeReservedCpuSets @ 0x140A4DD9C (KiInitializeReservedCpuSets.c)
 * Callees:
 *     KeCpuSetReportParkedProcessors @ 0x140228EDC (KeCpuSetReportParkedProcessors.c)
 *     RtlWriteAcquireTickLock @ 0x14022965C (RtlWriteAcquireTickLock.c)
 *     KiValidateCpuSetMasks @ 0x140229680 (KiValidateCpuSetMasks.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 */

__int64 __fastcall KeSetSystemAllowedCpuSets(unsigned int a1, char *a2, int a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 result; // rax
  unsigned int v6; // r10d
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // r14d
  int v9; // esi
  __int64 v10; // r8
  signed __int64 v11; // r10
  signed __int64 v12; // r11
  __int64 *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *SchedulerAssist; // r9

  v3 = a2;
  v4 = a3;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    v8 = 20;
    if ( v6 < 0x14 )
      v8 = v6;
    v9 = 0;
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    LODWORD(v10) = 0;
    v11 = (char *)&qword_140CFC848 - v3;
    v12 = &KiReservedCpuSets - (_UNKNOWN *)v3;
    v13 = &KiSystemAllowedCpuSets[v4];
    do
    {
      v14 = *(_QWORD *)&v3[v11];
      if ( (unsigned int)v10 < v8 )
      {
        v15 = *(_QWORD *)v3;
      }
      else
      {
        v15 = 0LL;
        if ( !(_DWORD)v4 )
          v15 = *(_QWORD *)&v3[v11];
      }
      v16 = ~*(_QWORD *)&v3[v12] & v15;
      *v13 = v16;
      if ( (v14 & v16) != v14 )
        v9 = 1;
      v10 = (unsigned int)(v10 + 1);
      v3 += 8;
      v13 += 2;
    }
    while ( (unsigned int)v10 < 0x14 );
    if ( !(_DWORD)v4 )
      KiRestrictedSystemCpuSetsActive = v9;
    LOBYTE(v14) = CurrentIrql;
    ++KiCpuSetSequence;
    KeCpuSetReportParkedProcessors(0LL, v14, v10, v13);
    return 0LL;
  }
  return result;
}
