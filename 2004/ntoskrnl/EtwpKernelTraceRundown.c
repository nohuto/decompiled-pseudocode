/*
 * XREFs of EtwpKernelTraceRundown @ 0x14077F77C
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14077F430 (EtwpUpdateGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x140932458 (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x14093A5DC (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14026D558 (EtwpOpenLogger.c)
 *     IoSetThreadHardErrorMode @ 0x14027C5F0 (IoSetThreadHardErrorMode.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     EtwpCloseLogger @ 0x140377E94 (EtwpCloseLogger.c)
 *     EtwpProcessThreadImageRundown @ 0x14077F968 (EtwpProcessThreadImageRundown.c)
 *     WmiTraceRundownNotify @ 0x1407AF204 (WmiTraceRundownNotify.c)
 *     CmEtwRunDown @ 0x140866D18 (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C3AB8 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1408C5618 (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x1408CE1F0 (MmLogSystemShareablePfnInfo.c)
 *     MmLogQueryCombineStats @ 0x1408D6600 (MmLogQueryCombineStats.c)
 *     EtwpClockSourceRunDown @ 0x14093A368 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x14093A4F4 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x14093A650 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x14093A850 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x14093ABA4 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x14093AD00 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x14093B28C (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x14093B708 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14093B8B4 (EtwpSpinLockConfigRunDown.c)
 */

BOOLEAN __fastcall EtwpKernelTraceRundown(int *a1, __int64 a2, unsigned int a3, unsigned __int8 a4, __int64 a5, int a6)
{
  unsigned int v7; // esi
  unsigned int v8; // ebp
  BOOLEAN v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rdi
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v21; // eax
  char v22[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v23 = a3;
  v7 = a4;
  v22[0] = 0;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v11 = EtwpOpenLogger(v8, a2, 0, v22);
  v15 = v11;
  if ( v11 )
  {
    if ( a1 )
    {
      if ( (a1[1] & 0x20) != 0 && !(_BYTE)v7 )
        EtwpLogRefSetAutoMark(0LL, v11);
      v16 = *a1;
      if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (v16 & 1) != 0 || (v16 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
      {
        LOBYTE(v13) = v7;
        EtwpProcessThreadImageRundown((_DWORD)a1, v15, v13, a5, a6);
        v16 = *a1;
      }
      v17 = v16 & 0x20000;
      if ( (_DWORD)v17 || (a1[2] & 0x1000000) != 0 )
      {
        LOBYTE(v14) = *((_BYTE *)a1 + 11) & 1;
        LOBYTE(v13) = (_DWORD)v17 != 0;
        CmEtwRunDown(a2, v8, v13, v14, v7);
      }
      v18 = a1[1];
      if ( (v18 & 2) != 0 )
      {
        LOBYTE(v13) = 1;
        LOBYTE(v12) = v7;
        EtwpSampledProfileRunDown(v15, v12, v13);
        v18 = a1[1];
      }
      if ( (v18 & 0x400) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpSampledProfileRunDown(v15, v12, 0LL);
        v18 = a1[1];
      }
      if ( (v18 & 0x10000) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpSpinLockConfigRunDown(v15, v12);
        v18 = a1[1];
      }
      if ( (v18 & 0x20000) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpExecutiveResourceConfigRunDown(v15, v12);
        v18 = a1[1];
      }
      if ( (v18 & 0x400008) != 0 )
      {
        MmPerfLogSessionRundown(a2, v8, v7);
        v18 = a1[1];
      }
      if ( (v18 & 0x8000049) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpPoolRunDown(v15, v12);
      }
      if ( (a1[2] & 0x100000) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpClockSourceRunDown(v15, v12);
      }
      v19 = a1[1];
      if ( (_BYTE)v7 )
      {
        if ( (v19 & 0x8000000) != 0 )
        {
          MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
          MmLogSystemShareablePfnInfo(a2, v8);
          v19 = a1[1];
        }
        if ( (v19 & 0x20) != 0 )
        {
          LOBYTE(v17) = v7;
          EtwpLogRefSetAutoMark(v17, v15);
        }
      }
      else
      {
        if ( (v19 & 0x8000000) != 0 )
        {
          MmLogSystemShareablePfnInfo(a2, v8);
          MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
          v19 = a1[1];
        }
        if ( (v19 & 9) != 0 )
        {
          EtwpLogMemInfoRundown(v15);
          MmIdentifyPhysicalMemory(a2, v8, 547LL, 0LL);
          v19 = a1[1];
        }
        if ( (v19 & 0x80000) != 0 )
        {
          MmLogQueryCombineStats(a2, &v23, 0LL);
          v8 = v23;
        }
        if ( (*a1 & 0x200) != 0 )
          WmiTraceRundownNotify(**(_QWORD **)(v15 + 1112), v8);
        v21 = a1[4];
        if ( (v21 & 0x8000) != 0 )
        {
          PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
          v21 = a1[4];
        }
        if ( (v21 & 0x40) != 0 || (v21 & 0x80u) != 0 )
          EtwpObjectTypeRundown(v15, 0LL);
        if ( (a1[2] & 0x10000) != 0 )
          EtwpProcessorRundown(v15);
      }
    }
    EtwpCloseLogger(v8, a2, v22[0]);
  }
  return IoSetThreadHardErrorMode(v10);
}
