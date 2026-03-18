/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x1C000D420
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000D170 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1C000D3A0 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000ECE0 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002FFB0 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C002CFD0 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // r15
  __int64 v5; // r14
  bool v6; // si
  LARGE_INTEGER v7; // r10
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  _BOOL8 result; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  signed __int32 v22; // eax
  __int64 v23; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h]

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 496) )
    v3 = *(_QWORD *)(v1 + 496);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 436), 0, 0) == 1;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = v7.QuadPart - *(_QWORD *)(v1 + 464);
  v9 = 10000000 * v8;
  v25 = (v8 * (unsigned __int128)0x989680uLL) >> 64;
  v10 = 10000000 * v8;
  if ( is_mul_ok(v8, 0x989680uLL) )
  {
    if ( PerformanceFrequency.QuadPart == 10000000 )
    {
      v11 = v10 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      v12 = v10 / 0x989680;
    }
    else
    {
      *((_QWORD *)&v11 + 1) = v9 % PerformanceFrequency.QuadPart;
      v12 = v9 / PerformanceFrequency.QuadPart;
    }
  }
  else
  {
    v10 = v8 / PerformanceFrequency.QuadPart;
    *((_QWORD *)&v11 + 1) = 10000000 * (v8 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
    v12 = 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
        + 10000000 * (v8 / PerformanceFrequency.QuadPart);
  }
  *(_QWORD *)(v1 + 448) += v12;
  *(_QWORD *)(v1 + 456) += v12;
  v4[330] += v12;
  v13 = *(_QWORD *)(v1 + 96);
  if ( (*(_DWORD *)(v13 + 12) & 0x10) != 0 )
  {
    v15 = 0LL;
  }
  else
  {
    v10 = *(unsigned __int16 *)(v13 + 4);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 24LL)
                    + 8LL * *(unsigned int *)(*(_QWORD *)(v13 + 24) + 4LL));
    *((_QWORD *)&v11 + 1) = *(_QWORD *)(v14 + 8);
    if ( (unsigned int)v10 < *(_DWORD *)(v14 + 80) )
      *((_QWORD *)&v11 + 1) += 8 * v10;
    v15 = (_QWORD *)**((_QWORD **)&v11 + 1);
  }
  *v15 += v12;
  LODWORD(v16) = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 6480), v12);
  *(LARGE_INTEGER *)(v1 + 464) = v7;
  if ( v6
    || (*(_DWORD *)(v5 + 2448) & 4) != 0
    && (v16 = gulPriorityToYieldPriorityBand, !gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)]) )
  {
    v20 = *(_QWORD *)(v3 + 440) - v12;
    *(_QWORD *)(v3 + 440) = v20;
    if ( v6 && v20 <= 0 )
    {
      v21 = *(_QWORD *)(v1 + 496);
      v22 = 1;
      if ( v21 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 436), 2, 1);
        v16 = *(int **)(v1 + 496);
        v22 = 0;
      }
      else
      {
        v16 = (int *)v1;
      }
      _InterlockedCompareExchange(v16 + 109, 2, v22);
      v6 = 0;
    }
  }
  if ( bTracingEnabled )
  {
    v17 = *(_QWORD *)(v1 + 56);
    if ( !v17 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v17) = v1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq_EtwWriteTransfer(
        (_DWORD)v16,
        DWORD2(v11),
        v10,
        v17,
        *(_QWORD *)(v1 + 448),
        *(_QWORD *)(v1 + 440),
        v4[251],
        *(_DWORD *)(v1 + 436),
        2);
    v18 = *(_QWORD *)(v1 + 496);
    if ( v18 )
    {
      v23 = *(_QWORD *)(v18 + 56);
      if ( !v23 || (*(_DWORD *)(v18 + 112) & 0x40) != 0 )
        v23 = *(_QWORD *)(v1 + 496);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0piixqq_EtwWriteTransfer(
          *(_QWORD *)(v18 + 448),
          v18,
          v10,
          v23,
          *(_QWORD *)(v18 + 448),
          *(_QWORD *)(v18 + 440),
          v4[251],
          *(_DWORD *)(v18 + 436),
          2);
    }
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 440);
  a1[2] = *(_QWORD *)(v1 + 448);
  return result;
}
