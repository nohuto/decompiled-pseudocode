/*
 * XREFs of EtwpEnableKernelTrace @ 0x1406D5424
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x1406D520C (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpFixBootLoggers @ 0x140854CB8 (EtwpFixBootLoggers.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoPerfInit @ 0x1405594BC (IoPerfInit.c)
 *     KeStartProfile @ 0x14057158C (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x1405E41E0 (DbgSetDebugPrintCallback.c)
 *     EtwpDisableKernelTrace @ 0x1406D56D0 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1406D5860 (EtwpUpdateFileInfoDriverState.c)
 *     AlpcRegisterLogRoutine @ 0x140967754 (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x140985534 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x1409DE1A0 (WmiSetNetworkNotify.c)
 *     EtwpTimeProfileStart @ 0x1409E3B04 (EtwpTimeProfileStart.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(char *a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  int updated; // r15d
  int v5; // r10d
  __int64 v8; // r13
  int v9; // r14d
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _DWORD *v19; // rcx
  __int64 v20; // r8
  unsigned int i; // edi
  signed __int64 v22; // rbx
  signed __int64 v23; // rcx
  unsigned int v24; // [rsp+30h] [rbp-39h]
  __int128 v26; // [rsp+40h] [rbp-29h] BYREF
  __int128 v27; // [rsp+50h] [rbp-19h]
  _OWORD v28[2]; // [rsp+60h] [rbp-9h] BYREF

  updated = 0;
  v24 = a4;
  v5 = a3;
  v8 = 8LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( !EtwpBootPhase )
  {
    v19 = a2;
    v20 = 8LL;
    do
    {
      *v19 &= ~*(_DWORD *)((char *)v19 + (char *)&EtwpBootDeferredGroupMask - (char *)a2);
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  v9 = DWORD1(v26);
  if ( a2 )
  {
    v10 = a2[1];
    if ( (v10 & 0x80000) != 0 )
    {
      v9 = DWORD1(v26) | 0x80000;
      DWORD1(v26) |= 0x80000u;
    }
    if ( (v10 & 0x800000) != 0 )
    {
      v9 |= 0x800000u;
      DWORD1(v26) = v9;
    }
    if ( (v10 & 0x880000) != 0 )
    {
      *(_QWORD *)&v28[0] = 0LL;
      *((_QWORD *)&v28[0] + 1) = -1LL;
      KeSetTimer2(
        (__int64)&EtwpMemInfoTimer,
        -10000LL * (unsigned int)EtwpMemInfoInterval,
        10000LL * (unsigned int)EtwpMemInfoInterval,
        (__int64)v28);
      a4 = v24;
      v5 = a3;
    }
  }
  if ( (unsigned __int8)EtwpBootPhase > 3u )
  {
    updated = EtwpUpdateFileInfoDriverState((_DWORD)a1, (_DWORD)a2, 1, v5, a4);
    if ( updated )
    {
LABEL_56:
      if ( updated >= 0 )
        return (unsigned int)updated;
      goto LABEL_70;
    }
  }
  if ( !a2 )
    return (unsigned int)updated;
  v11 = *a2;
  v12 = v26;
  if ( (*a2 & 0x2000000) != 0 )
  {
    v12 = v26 | 0x2000000;
    qword_140C00318 = (__int64)EtwpTraceFileIo;
    v11 = *a2;
    LODWORD(v26) = v26 | 0x2000000;
  }
  if ( (v11 & 0x4000000) != 0 )
  {
    v12 |= 0x4000000u;
    qword_140C00310 = (__int64)EtwpTraceFileIo;
    v11 = *a2;
    LODWORD(v26) = v12;
  }
  if ( (v11 & 0x200) != 0 )
  {
    v12 |= 0x200u;
    qword_140C00308 = (__int64)EtwpTraceFileName;
    v11 = *a2;
    LODWORD(v26) = v12;
  }
  if ( (v11 & 0x100) != 0 )
  {
    v12 |= 0x100u;
    EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
    qword_140C002F8 = (__int64)EtwpTraceRedirectedIo;
    v11 = *a2;
    LODWORD(v26) = v12;
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 |= 0x400u;
    qword_140C4EF38 = (__int64)EtwpTraceIoInit;
    LODWORD(v26) = v12;
  }
  v13 = a2[4];
  v14 = v27;
  if ( (v13 & 1) != 0 )
  {
    v14 = v27 | 1;
    qword_140C4EF40 = (__int64)EtwpTraceOpticalIo;
    v13 = a2[4];
    LODWORD(v27) = v27 | 1;
  }
  if ( (v13 & 2) != 0 )
  {
    v14 |= 2u;
    qword_140C4EF48 = (__int64)EtwpTraceOpticalIoInit;
    LODWORD(v27) = v14;
  }
  if ( (*a2 & 0x200000) != 0 )
  {
    v12 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    LODWORD(v26) = v12;
  }
  v15 = a2[4];
  if ( (v15 & 0x400000) != 0 )
  {
    v14 |= 0x400000u;
    qword_140C002D8 = (__int64)EtwpTraceFltIo;
    v15 = a2[4];
    LODWORD(v27) = v14;
  }
  if ( (v15 & 0x80000) != 0 )
  {
    v14 |= 0x80000u;
    qword_140C002E0 = (__int64)EtwpTraceFltIo;
    v15 = a2[4];
    LODWORD(v27) = v14;
  }
  if ( (v15 & 0x100000) != 0 )
  {
    v14 |= 0x100000u;
    qword_140C002E8 = (__int64)EtwpTraceFltTimedIo;
    v15 = a2[4];
    LODWORD(v27) = v14;
  }
  if ( (v15 & 0x200000) != 0 )
  {
    v14 |= 0x200000u;
    qword_140C002F0 = (__int64)EtwpTraceFltTimedIo;
    v15 = a2[4];
    LODWORD(v27) = v14;
  }
  if ( (v15 & 0x1000000) != 0 )
  {
    v14 |= 0x1000000u;
    qword_140C0C5C0 = (__int64)EtwpTraceWdf;
    v15 = a2[4];
    LODWORD(v27) = v14;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v14 |= 0x2000000u;
    qword_140C0C5C8 = (__int64)EtwpTraceWdf;
    LODWORD(v27) = v14;
  }
  if ( (a2[2] & 0x8000000) != 0 )
  {
    DWORD2(v26) |= 0x8000000u;
    qword_140C0C5D0 = (__int64)EtwpSystemTraceWdf;
  }
  v16 = *a2;
  if ( (*a2 & 0x20000) != 0 )
  {
    updated = 0;
    CmpTraceRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EtwpTraceRegistry;
    v12 |= 0x20000u;
    LODWORD(v26) = v12;
    CmpTraceTxrRoutine = (__int64)EtwpTraceRegistryTransaction;
  }
  if ( (v16 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_70;
    v16 = *a2;
    v12 |= 0x100000u;
    LODWORD(v26) = v12;
  }
  if ( (v16 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify();
    v12 |= 0x10000u;
    LODWORD(v26) = v12;
  }
  if ( (a2[1] & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_70;
    v9 |= 0x10u;
    DWORD1(v26) = v9;
  }
  if ( (*a2 & 0x40000) == 0 )
  {
LABEL_49:
    v17 = a2[1];
    if ( (v17 & 2) != 0 )
    {
      EtwpTimeProfileStart();
      v17 = a2[1];
      v9 |= 2u;
      DWORD1(v26) = v9;
    }
    if ( (v17 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_140C16468 + 352 * i);
      DWORD1(v26) = v9 | 0x400;
    }
    if ( (a2[4] & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      LODWORD(v27) = v14 | 0x80;
    }
    if ( (a2[1] & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_56;
  }
  updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
  if ( updated >= 0 )
  {
    LODWORD(v26) = v12 | 0x40000;
    goto LABEL_49;
  }
LABEL_70:
  v22 = (char *)a2 - a1;
  memset(v28, 0, sizeof(v28));
  v23 = (char *)v28 - a1;
  do
  {
    *(_DWORD *)&a1[v23] = *(_DWORD *)a1 & ~*(_DWORD *)&a1[v22];
    a1 += 4;
    --v8;
  }
  while ( v8 );
  EtwpDisableKernelTrace(v28, &v26, a3, v24);
  return (unsigned int)updated;
}
