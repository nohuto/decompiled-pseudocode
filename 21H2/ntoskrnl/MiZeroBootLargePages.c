/*
 * XREFs of MiZeroBootLargePages @ 0x1403CAD94
 * Callers:
 *     MiZeroPageThread @ 0x1403CAD40 (MiZeroPageThread.c)
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     MiZeroPageCalibrate @ 0x1403AFF94 (MiZeroPageCalibrate.c)
 *     MiNodeCompletedBootZeroing @ 0x1403B1058 (MiNodeCompletedBootZeroing.c)
 *     MiAllocateZeroPageDecisionTraceBuffer @ 0x1403CB004 (MiAllocateZeroPageDecisionTraceBuffer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140A6F2CC (MiComputeMemoryNodeProcessorAssignments.c)
 */

__int64 __fastcall MiZeroBootLargePages(ULONG_PTR a1)
{
  unsigned int v2; // r13d
  _QWORD *p_P; // rdi
  int v4; // r14d
  int v5; // r15d
  unsigned int v6; // ebx
  _QWORD *Pool; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rax
  int SystemThread; // eax
  HANDLE v11; // rcx
  void *v13; // rcx
  _QWORD *P; // [rsp+50h] [rbp-30h] BYREF
  _QWORD **v15; // [rsp+58h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17[2]; // [rsp+68h] [rbp-18h] BYREF

  Handle = 0LL;
  *(_OWORD *)v17 = 0LL;
  KeQueryPerformanceCounter(&stru_140C4DF50);
  if ( !(unsigned int)MiComputeMemoryNodeProcessorAssignments(a1) )
    return 3221225473LL;
  *(_WORD *)(a1 + 6416) = 0;
  *(_DWORD *)(a1 + 6420) = 0;
  v2 = (unsigned __int16)KeNumberNodes;
  p_P = &P;
  *(_QWORD *)(a1 + 6432) = a1 + 6424;
  v4 = 0;
  *(_QWORD *)(a1 + 6424) = a1 + 6424;
  v5 = 0;
  *(_BYTE *)(a1 + 6418) = 6;
  *(_DWORD *)(a1 + 6348) = 0;
  v6 = 0;
  *(_QWORD *)(a1 + 6360) = a1 + 6352;
  *(_QWORD *)(a1 + 6352) = a1 + 6352;
  v15 = &P;
  *(_WORD *)(a1 + 6344) = 263;
  *(_BYTE *)(a1 + 6346) = 6;
  P = &P;
  if ( v2 )
  {
    while ( 1 )
    {
      *(_OWORD *)v17 = *(_OWORD *)(4544LL * v6 + *(_QWORD *)(a1 + 16) + 4472);
      Pool = MiAllocatePool(64, 0x138uLL, 0x20206D4Du);
      if ( !Pool )
        break;
      Pool[38] = MiAllocateZeroPageDecisionTraceBuffer(a1, v6);
      *((_DWORD *)Pool + 20) = v6;
      Pool[9] = a1;
      v8 = v15;
      if ( *v15 != &P )
LABEL_25:
        __fastfail(3u);
      Pool[1] = v15;
      *Pool = &P;
      ++v5;
      ++v6;
      *v8 = Pool;
      v15 = (_QWORD **)Pool;
      if ( v6 >= v2 )
        goto LABEL_6;
    }
    v4 = -1073741670;
    *(_BYTE *)(a1 + 6400) = 1;
LABEL_6:
    p_P = P;
  }
  *(_DWORD *)(a1 + 6336) = v5;
  *(_DWORD *)(a1 + 6408) = v5;
  while ( p_P != &P )
  {
    if ( (_QWORD **)p_P[1] != &P )
      goto LABEL_25;
    v9 = *p_P;
    if ( *(_QWORD **)(*p_P + 8LL) != p_P )
      goto LABEL_25;
    P = (_QWORD *)*p_P;
    *(_QWORD *)(v9 + 8) = &P;
    *(_OWORD *)p_P = 0LL;
    p_P[2] = 0LL;
    if ( v4 < 0 )
    {
      v11 = 0LL;
      Handle = 0LL;
    }
    else
    {
      *(_OWORD *)v17 = *(_OWORD *)(4544LL * *((unsigned int *)p_P + 20) + *(_QWORD *)(a1 + 16) + 4472);
      SystemThread = PsCreateSystemThreadEx(
                       (int)&Handle,
                       0LL,
                       (__int64)MiZeroNodePages,
                       (__int64)p_P,
                       (__int64)v17,
                       0LL);
      v11 = Handle;
      v4 = SystemThread;
    }
    if ( v4 < 0 )
    {
      *(_BYTE *)(a1 + 6400) = 1;
      MiNodeCompletedBootZeroing(a1);
      MiZeroPageCalibrate(a1, 0LL);
      v13 = (void *)p_P[38];
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      ExFreePoolWithTag(p_P, 0);
    }
    else
    {
      ObCloseHandle(v11, 0);
    }
    p_P = P;
  }
  KeWaitForGate(a1 + 6344, 0);
  if ( *(_BYTE *)(a1 + 6400) )
    return (unsigned int)-1073741823;
  return (unsigned int)v4;
}
