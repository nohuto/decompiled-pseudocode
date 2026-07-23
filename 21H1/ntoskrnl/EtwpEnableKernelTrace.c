/*
 * XREFs of EtwpEnableKernelTrace @ 0x140786D80
 * Callers:
 *     EtwpUpdateGlobalGroupMasks @ 0x140787014 (EtwpUpdateGlobalGroupMasks.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IoPerfInit @ 0x140502248 (IoPerfInit.c)
 *     KeStartProfile @ 0x1405160CC (KeStartProfile.c)
 *     DbgSetDebugPrintCallback @ 0x14057FB20 (DbgSetDebugPrintCallback.c)
 *     KeSetIntervalProfile @ 0x140720424 (KeSetIntervalProfile.c)
 *     EtwpDisableKernelTrace @ 0x140786B60 (EtwpDisableKernelTrace.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786CEC (EtwpUpdateFileInfoDriverState.c)
 *     KeInitializeProfileCallback @ 0x1408B791C (KeInitializeProfileCallback.c)
 *     AlpcRegisterLogRoutine @ 0x1408BF04C (AlpcRegisterLogRoutine.c)
 *     ObEnableEtwReferenceTrace @ 0x1408D9610 (ObEnableEtwReferenceTrace.c)
 *     WmiSetNetworkNotify @ 0x14092EC98 (WmiSetNetworkNotify.c)
 */

__int64 __fastcall EtwpEnableKernelTrace(__m128i *a1, char *a2, _QWORD *a3, unsigned int a4)
{
  int updated; // r15d
  int v7; // ecx
  int v8; // r14d
  int v9; // eax
  __int64 v10; // r12
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int i; // ebx
  signed __int64 v20; // rdi
  char *v21; // rax
  int v22; // [rsp+38h] [rbp-39h]
  _QWORD *v23; // [rsp+40h] [rbp-31h]
  _QWORD v24[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v25; // [rsp+58h] [rbp-19h] BYREF
  __int128 v26; // [rsp+68h] [rbp-9h]
  _OWORD v27[2]; // [rsp+78h] [rbp+7h] BYREF

  v22 = a4;
  updated = 0;
  v23 = a3;
  v25 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v7 = *((_DWORD *)a2 + 1);
    if ( (v7 & 0x80000) != 0 )
    {
      v8 = 0x80000;
      v9 = 8912896;
    }
    else
    {
      v8 = DWORD1(v25);
      v9 = 0x800000;
    }
    if ( (v7 & 0x800000) != 0 )
      v8 = v9;
    DWORD1(v25) = v8;
  }
  else
  {
    v8 = DWORD1(v25);
  }
  if ( a1 && (a1->m128i_i32[1] & 0x880000) != 0 )
  {
    v24[0] = 0LL;
    v24[1] = -1LL;
    KeSetTimer2(
      (__int64)&EtwpMemInfoTimer,
      -10000LL * (unsigned int)EtwpMemInfoInterval,
      10000LL * (unsigned int)EtwpMemInfoInterval,
      (__int64)v24);
    a4 = v22;
    a3 = v23;
  }
  v10 = 2LL;
  if ( EtwpFileSystemReady && (updated = EtwpUpdateFileInfoDriverState(a1, a2, 1, a3, a4)) != 0 || !a2 )
  {
LABEL_57:
    if ( updated >= 0 )
      return (unsigned int)updated;
    goto LABEL_70;
  }
  v11 = *(_DWORD *)a2;
  v12 = v25;
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    v12 = v25 | 0x2000000;
    qword_140C00EF8 = (__int64)EtwpTraceFileIo;
    v11 = *(_DWORD *)a2;
    LODWORD(v25) = v25 | 0x2000000;
  }
  if ( (v11 & 0x4000000) != 0 )
  {
    v12 |= 0x4000000u;
    qword_140C00EF0 = (__int64)EtwpTraceFileIo;
    v11 = *(_DWORD *)a2;
    LODWORD(v25) = v12;
  }
  if ( (v11 & 0x200) != 0 )
  {
    v12 |= 0x200u;
    qword_140C00EE8 = (__int64)EtwpTraceFileName;
    v11 = *(_DWORD *)a2;
    LODWORD(v25) = v12;
  }
  if ( (v11 & 0x100) != 0 )
  {
    v12 |= 0x100u;
    EtwpDiskIoNotifyRoutines = (__int64)EtwpTraceIo;
    qword_140C00ED8 = (__int64)EtwpTraceRedirectedIo;
    v11 = *(_DWORD *)a2;
    LODWORD(v25) = v12;
  }
  if ( (v11 & 0x400) != 0 )
  {
    v12 |= 0x400u;
    qword_140C54658 = (__int64)EtwpTraceIoInit;
    LODWORD(v25) = v12;
  }
  v13 = *((_DWORD *)a2 + 4);
  v14 = v26;
  if ( (v13 & 1) != 0 )
  {
    v14 = v26 | 1;
    qword_140C54660 = (__int64)EtwpTraceOpticalIo;
    v13 = *((_DWORD *)a2 + 4);
    LODWORD(v26) = v26 | 1;
  }
  if ( (v13 & 2) != 0 )
  {
    v14 |= 2u;
    qword_140C54668 = (__int64)EtwpTraceOpticalIoInit;
    LODWORD(v26) = v14;
  }
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
  {
    v12 |= 0x200000u;
    EtwpSplitIoNotifyRoutines = (__int64)EtwpTraceSplitIo;
    LODWORD(v25) = v12;
  }
  v15 = *((_DWORD *)a2 + 4);
  if ( (v15 & 0x400000) != 0 )
  {
    v14 |= 0x400000u;
    qword_140C00EB8 = (__int64)EtwpTraceFltIo;
    v15 = *((_DWORD *)a2 + 4);
    LODWORD(v26) = v14;
  }
  if ( (v15 & 0x80000) != 0 )
  {
    v14 |= 0x80000u;
    qword_140C00EC0 = (__int64)EtwpTraceFltIo;
    v15 = *((_DWORD *)a2 + 4);
    LODWORD(v26) = v14;
  }
  if ( (v15 & 0x100000) != 0 )
  {
    v14 |= 0x100000u;
    qword_140C00EC8 = (__int64)EtwpTraceFltTimedIo;
    v15 = *((_DWORD *)a2 + 4);
    LODWORD(v26) = v14;
  }
  if ( (v15 & 0x200000) != 0 )
  {
    v14 |= 0x200000u;
    qword_140C00ED0 = (__int64)EtwpTraceFltTimedIo;
    v15 = *((_DWORD *)a2 + 4);
    LODWORD(v26) = v14;
  }
  if ( (v15 & 0x1000000) != 0 )
  {
    v14 |= 0x1000000u;
    qword_140C11EB0 = (__int64)EtwpTraceWdf;
    v15 = *((_DWORD *)a2 + 4);
    LODWORD(v26) = v14;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v14 |= 0x2000000u;
    qword_140C11EB8 = (__int64)EtwpTraceWdf;
    LODWORD(v26) = v14;
  }
  if ( (*((_DWORD *)a2 + 2) & 0x8000000) != 0 )
  {
    DWORD2(v25) |= 0x8000000u;
    qword_140C11EC0 = (__int64)EtwpSystemTraceWdf;
  }
  v16 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    updated = 0;
    *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) = (BOOLEAN *)EtwpTraceRegistry;
    v12 |= 0x20000u;
    LODWORD(v25) = v12;
    CmpTraceTxrRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))EtwpTraceRegistryTransaction;
  }
  if ( (v16 & 0x100000) != 0 )
  {
    updated = AlpcRegisterLogRoutine();
    if ( updated < 0 )
      goto LABEL_70;
    v16 = *(_DWORD *)a2;
    v12 |= 0x100000u;
    LODWORD(v25) = v12;
  }
  if ( (v16 & 0x10000) != 0 )
  {
    EtwpTdiIoNotify = (__int64)EtwpTraceNetwork;
    WmiSetNetworkNotify(EtwpTraceNetwork);
    v12 |= 0x10000u;
    LODWORD(v25) = v12;
  }
  if ( (*((_DWORD *)a2 + 1) & 0x10) != 0 )
  {
    updated = IoPerfInit(1);
    if ( updated < 0 )
      goto LABEL_70;
    v8 |= 0x10u;
    DWORD1(v25) = v8;
  }
  if ( (*(_DWORD *)a2 & 0x40000) == 0 )
  {
LABEL_50:
    v17 = *((_DWORD *)a2 + 1);
    if ( (v17 & 2) != 0 )
    {
      KeSetIntervalProfile(EtwpProfileInterval, 0);
      KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
      KeStartProfile((ULONG_PTR)&EtwpProfileObject);
      v17 = *((_DWORD *)a2 + 1);
      v8 |= 2u;
      DWORD1(v25) = v8;
    }
    if ( (v17 & 0x400) != 0 )
    {
      for ( i = 0; i < EtwpPmcProfile; ++i )
        KeStartProfile((ULONG_PTR)qword_140C19DB8 + 248 * i);
      DWORD1(v25) = v8 | 0x400;
    }
    if ( (*((_DWORD *)a2 + 4) & 0x80u) != 0 )
    {
      ObEnableEtwReferenceTrace();
      LODWORD(v26) = v14 | 0x80;
    }
    if ( (*((_DWORD *)a2 + 1) & 0x20000) != 0 )
      _InterlockedIncrement(&EtwpEthreadSyncTrackingSequence);
    goto LABEL_57;
  }
  updated = DbgSetDebugPrintCallback((PDEBUG_PRINT_CALLBACK)EtwpTraceDebugPrint, 1u);
  if ( updated >= 0 )
  {
    LODWORD(v25) = v12 | 0x40000;
    goto LABEL_50;
  }
LABEL_70:
  v20 = a2 - (char *)a1;
  memset(v27, 0, sizeof(v27));
  v21 = (char *)((char *)v27 - (char *)a1);
  do
  {
    *(__m128i *)((char *)a1 + (_QWORD)v21) = _mm_and_si128(
                                               _mm_andnot_si128(
                                                 _mm_loadu_si128((__m128i *)((char *)a1 + v20)),
                                                 (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                               _mm_loadu_si128(a1));
    ++a1;
    --v10;
  }
  while ( v10 );
  EtwpDisableKernelTrace((__int64)v27, (int *)&v25, (int)v23, v22);
  return (unsigned int)updated;
}
