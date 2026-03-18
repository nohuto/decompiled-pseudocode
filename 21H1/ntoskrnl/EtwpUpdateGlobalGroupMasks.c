/*
 * XREFs of EtwpUpdateGlobalGroupMasks @ 0x140787014
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14077FE0C (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateKernelGroupsWork @ 0x140786A10 (EtwpUpdateKernelGroupsWork.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409385B4 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140938610 (EtwReferenceSpinLockCounters.c)
 *     EtwpCoverageSamplerStart @ 0x140942988 (EtwpCoverageSamplerStart.c)
 *     EtwpCoverageSamplerStop @ 0x140942C54 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PspGetNextSilo @ 0x1406158F4 (PspGetNextSilo.c)
 *     EtwpDisableKernelTrace @ 0x140786B60 (EtwpDisableKernelTrace.c)
 *     EtwpEnableKernelTrace @ 0x140786D80 (EtwpEnableKernelTrace.c)
 */

__int64 __fastcall EtwpUpdateGlobalGroupMasks(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rcx
  __m128i *v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // rbx
  void *v13; // rcx
  __int128 v14; // xmm1
  void *NextSilo; // rax
  __int64 v16; // rdx
  __m128i *v17; // rcx
  __int64 v18; // r8
  __m128i si128; // xmm3
  __int64 v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  int v24; // r14d
  __int64 v26; // rdx
  void *v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __m128i *v30; // rcx
  int v31; // eax
  __m128i v32; // [rsp+30h] [rbp-39h] BYREF
  __int128 v33; // [rsp+40h] [rbp-29h]
  __int128 v34; // [rsp+50h] [rbp-19h] BYREF
  __int128 v35; // [rsp+60h] [rbp-9h]
  _OWORD v36[2]; // [rsp+70h] [rbp+7h] BYREF

  v3 = a3;
  v4 = a2;
  v34 = 0LL;
  v35 = 0LL;
  memset(v36, 0, sizeof(v36));
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v6 = 8LL;
  if ( (unsigned int)v3 < 8
    && ((unsigned int)v4 >= *(_DWORD *)(a1 + 16) ? (LOBYTE(v7) = 1) : (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 8 * v4)),
        (v7 & 1) != 0) )
  {
    v24 = -2147483611;
  }
  else
  {
    v8 = 10LL;
    v9 = a1 - (_QWORD)&v32 + 4260;
    v32 = 0LL;
    v33 = 0LL;
    do
    {
      v10 = &v32;
      v11 = 8LL;
      do
      {
        v10->m128i_i32[0] |= *(unsigned __int32 *)((char *)v10->m128i_u32 + v9);
        v10 = (__m128i *)((char *)v10 + 4);
        --v11;
      }
      while ( v11 );
      v9 += 32LL;
      --v8;
    }
    while ( v8 );
    v12 = (_DWORD *)(a1 + 4228);
    v13 = 0LL;
    v14 = v33;
    *(__m128i *)(a1 + 4228) = v32;
    *(_OWORD *)(a1 + 4244) = v14;
    while ( 1 )
    {
      NextSilo = PspGetNextSilo(v13, 1);
      if ( !NextSilo )
        break;
      v26 = *((_QWORD *)PsGetServerSiloGlobals((__int64)NextSilo) + 108);
      if ( v26 )
      {
        v28 = 8LL;
        v29 = v26 - (_QWORD)&v32;
        v30 = &v32;
        do
        {
          v30->m128i_i32[0] |= *(unsigned __int32 *)((char *)&v30[264].m128i_u32[1] + v29);
          v30 = (__m128i *)((char *)v30 + 4);
          --v28;
        }
        while ( v28 );
      }
      v13 = v27;
    }
    v16 = EtwpHostSiloState - (_QWORD)&v32;
    v17 = &v32;
    v18 = 8LL;
    do
    {
      v17->m128i_i32[0] |= *(unsigned __int32 *)((char *)&v17[264].m128i_u32[1] + v16);
      v17 = (__m128i *)((char *)v17 + 4);
      --v18;
    }
    while ( v18 );
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v20 = 0LL;
    v21 = 2LL;
    do
    {
      v22 = _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v20]);
      v23 = _mm_loadu_si128((__m128i *)((char *)&v32 + v20 * 16));
      v36[v20++] = _mm_and_si128(_mm_andnot_si128(v23, si128), v22);
      *(__int128 *)((char *)&v33 + v20 * 16) = (__int128)_mm_and_si128(_mm_andnot_si128(v22, si128), v23);
      --v21;
    }
    while ( v21 );
    EtwpDisableKernelTrace((__int64)&v32, (int *)v36, a1, v4);
    v24 = EtwpEnableKernelTrace(&v32, (char *)&v34, (_QWORD *)a1, v4);
    if ( v24 < 0 )
    {
      do
      {
        v31 = ~*(_DWORD *)((char *)v12 + (_QWORD)&v34 - a1 - 4228);
        *v12 &= v31;
        v12[8 * v3 + 8] &= v31;
        *(_DWORD *)((char *)v12++ + (_QWORD)&v32 - a1 - 4228) &= v31;
        --v6;
      }
      while ( v6 );
    }
    PerfGlobalGroupMask[0] = (__int128)v32;
    xmmword_140CFC490 = v33;
    if ( (v32.m128i_i8[4] & 4) != 0 )
      _interlockedbittestandset(&KiCpuTracingFlags, 0);
    else
      _interlockedbittestandreset(&KiCpuTracingFlags, 0);
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v24;
}
