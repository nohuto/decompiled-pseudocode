/*
 * XREFs of EtwpKernelTraceRundown @ 0x140814360
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1403AAEF4 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwKernelMemoryRundown @ 0x1409E1EFC (EtwKernelMemoryRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x1409EA2D4 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14022AFF8 (EtwpOpenLogger.c)
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     EtwpCloseLogger @ 0x1403860B0 (EtwpCloseLogger.c)
 *     KeTraceHgsPlusRundown @ 0x140573740 (KeTraceHgsPlusRundown.c)
 *     MmLogQueryCombineStats @ 0x1406EA034 (MmLogQueryCombineStats.c)
 *     EtwpProcessThreadImageRundown @ 0x14081454C (EtwpProcessThreadImageRundown.c)
 *     WmiTraceRundownNotify @ 0x14081AA90 (WmiTraceRundownNotify.c)
 *     CmEtwRunDown @ 0x1409103FC (CmEtwRunDown.c)
 *     MmIdentifyPhysicalMemory @ 0x14096B768 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x14096DDA8 (MmPerfLogSessionRundown.c)
 *     MmLogSystemShareablePfnInfo @ 0x140978990 (MmLogSystemShareablePfnInfo.c)
 *     EtwpClockSourceRunDown @ 0x1409EA068 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1409EA1EC (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogMemInfoRundown @ 0x1409EA348 (EtwpLogMemInfoRundown.c)
 *     EtwpLogRefSetAutoMark @ 0x1409EA6C0 (EtwpLogRefSetAutoMark.c)
 *     EtwpObjectTypeRundown @ 0x1409EAA18 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1409EAB74 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1409EB100 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1409EB5B4 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1409EB760 (EtwpSpinLockConfigRunDown.c)
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
  _DWORD *v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  char v25[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+18h] BYREF

  v26 = a3;
  v7 = a4;
  v25[0] = 0;
  v8 = a3;
  v10 = IoSetThreadHardErrorMode(0);
  v11 = EtwpOpenLogger(v8, a2, 0, v25);
  v15 = v11;
  if ( v11 )
  {
    if ( !a1 )
    {
LABEL_33:
      EtwpCloseLogger(v8, a2, v25[0]);
      return IoSetThreadHardErrorMode(v10);
    }
    if ( (a1[1] & 0x20) != 0 && !(_BYTE)v7 )
      EtwpLogRefSetAutoMark(0LL, v11);
    v16 = *a1;
    if ( (*a1 & 0xC004) != 0 || (a1[4] & 0x40) != 0 || (v16 & 1) != 0 || (v16 & 2) != 0 || (a1[1] & 0x8000000) != 0 )
    {
      LOBYTE(v13) = v7;
      EtwpProcessThreadImageRundown((_DWORD)a1, v15, v13, a5, a6);
      v16 = *a1;
    }
    v17 = a1 + 2;
    v18 = v16 & 0x20000;
    if ( (_DWORD)v18 )
    {
      if ( (*v17 & 0x1000000) == 0 )
      {
        v14 = 0;
LABEL_55:
        LOBYTE(v13) = (_DWORD)v18 != 0;
        CmEtwRunDown(a2, v8, v13, v14, v7);
        goto LABEL_12;
      }
    }
    else if ( (*v17 & 0x1000000) == 0 )
    {
LABEL_12:
      v19 = a1[1];
      if ( (v19 & 2) != 0 )
      {
        LOBYTE(v13) = 1;
        LOBYTE(v12) = v7;
        EtwpSampledProfileRunDown(v15, v12, v13);
        v19 = a1[1];
      }
      if ( (v19 & 0x400) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpSampledProfileRunDown(v15, v12, 0LL);
        v19 = a1[1];
      }
      if ( (v19 & 0x10000) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpSpinLockConfigRunDown(v15, v12);
        v19 = a1[1];
      }
      if ( (v19 & 0x20000) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpExecutiveResourceConfigRunDown(v15, v12);
        v19 = a1[1];
      }
      if ( (v19 & 0x400008) != 0 )
      {
        MmPerfLogSessionRundown(a2, v8, v7);
        v19 = a1[1];
      }
      if ( (v19 & 0x8000049) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpPoolRunDown(v15, v12);
      }
      if ( (*v17 & 0x100000) != 0 )
      {
        LOBYTE(v12) = v7;
        EtwpClockSourceRunDown(v15, v12);
      }
      if ( (a1[5] & 0x180) != 0 )
        KeTraceHgsPlusRundown(v7);
      v20 = a1[1];
      if ( (_BYTE)v7 )
      {
        if ( (v20 & 0x8000000) != 0 )
        {
          MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
          MmLogSystemShareablePfnInfo(a2, v8);
          v20 = a1[1];
        }
        if ( (v20 & 0x20) != 0 )
        {
          LOBYTE(v18) = v7;
          EtwpLogRefSetAutoMark(v18, v15);
        }
      }
      else
      {
        if ( (v20 & 0x8000000) != 0 )
        {
          MmLogSystemShareablePfnInfo(a2, v8);
          MmIdentifyPhysicalMemory(a2, v8, 645LL, 1LL);
          v20 = a1[1];
        }
        if ( (v20 & 9) != 0 || (a1[5] & 0x40) != 0 )
        {
          EtwpLogMemInfoRundown(v15);
          if ( (a1[5] & 0x40) != 0 )
          {
            v23 = 650LL;
            v24 = 2LL;
          }
          else
          {
            v23 = 547LL;
            v24 = 0LL;
          }
          MmIdentifyPhysicalMemory(a2, v8, v23, v24);
        }
        if ( (a1[1] & 0x80000) != 0 )
        {
          MmLogQueryCombineStats(a2, &v26, 0LL);
          v8 = v26;
        }
        if ( (*a1 & 0x200) != 0 )
          WmiTraceRundownNotify(**(_QWORD **)(v15 + 1096), v8);
        v22 = a1[4];
        if ( (v22 & 0x8000) != 0 )
        {
          PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmTracePerfIdleRundown, 0LL, 0LL);
          v22 = a1[4];
        }
        if ( (v22 & 0x40) != 0 || (v22 & 0x80u) != 0 )
          EtwpObjectTypeRundown(v15, 0LL);
        if ( (a1[2] & 0x10000) != 0 )
          EtwpProcessorRundown(v15);
      }
      goto LABEL_33;
    }
    LOBYTE(v14) = 1;
    goto LABEL_55;
  }
  return IoSetThreadHardErrorMode(v10);
}
