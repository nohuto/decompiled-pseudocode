/*
 * XREFs of VidSchiProcessIsrCompletedPacket @ 0x1C000CC60
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000CF80 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C003AE8C (VidSchiUpdateCurrentIsrFrameTime.c)
 */

__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  union _SLIST_HEADER *v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // r12
  int v7; // r10d
  _BOOL8 v8; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  _QWORD *v13; // r13
  __int64 v14; // rbx
  int v15; // eax
  _DWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  bool v22; // zf
  __int64 result; // rax
  _QWORD v24[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v25; // [rsp+50h] [rbp-48h]
  union _SLIST_HEADER *v26; // [rsp+A0h] [rbp+8h]
  unsigned int v27; // [rsp+A8h] [rbp+10h]

  v4 = *(union _SLIST_HEADER **)(a1 + 24);
  v5 = 0;
  v6 = a2;
  v7 = a3;
  v26 = v4;
  v8 = *a4 == 9;
  if ( a2 == *(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( *(_DWORD *)(a1 + 64) == a2 )
    return v5;
  while ( 1 )
  {
    v10 = *(unsigned int *)(a1 + 1412);
    v11 = *(_QWORD *)(a1 + 8 * v10 + 1424);
    if ( !v11 )
      break;
    if ( *(_DWORD *)(v11 + 88) == 3 || v8 && *(_DWORD *)(v11 + 104) == (_DWORD)v6 )
      return 1;
    _InterlockedExchange((volatile __int32 *)(a1 + 1412), ((_BYTE)v10 + 1) & 0xF);
    v12 = *(unsigned int *)(a1 + 1556);
    *(_DWORD *)(a1 + 500) = ((unsigned __int8)*(_DWORD *)(a1 + 500) + 1) & 0xF;
    v13 = *(_QWORD **)(a1 + 8 * v12 + 1568);
    v27 = ((_BYTE)v12 + 1) & 0xF;
    _InterlockedExchange((volatile __int32 *)(a1 + 1556), v27);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v11 + 104);
    v14 = *(_QWORD *)(v11 + 104);
    v15 = v7 << 6;
    if ( v7 )
    {
      ++*(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 64) = v14;
      *(_QWORD *)(a1 + 72) = v14;
      ++v4[27].Alignment;
      v16 = (_DWORD *)(v11 + 92);
      *(_DWORD *)(v11 + 92) ^= (*(_DWORD *)(v11 + 92) ^ v15) & 0x40;
      if ( !v8 )
      {
        v17 = v13[12];
        if ( (*(_DWORD *)(v17 + 12) & 0x10) != 0 )
        {
          v16 = (_DWORD *)(v11 + 92);
        }
        else
        {
          v18 = *(unsigned __int16 *)(v17 + 4);
          v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13[13] + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v17 + 24) + 4LL));
          v20 = *(_QWORD *)(v19 + 8);
          if ( (unsigned int)v18 < *(_DWORD *)(v19 + 80) )
            v20 += 8 * v18;
          v16 = (_DWORD *)(v11 + 92);
          if ( *(_QWORD *)v20 )
          {
            ++*(_DWORD *)(*(_QWORD *)v20 + 224LL);
            v16 = (_DWORD *)(v11 + 92);
          }
        }
      }
    }
    else
    {
      v16 = (_DWORD *)(v11 + 92);
      *(_DWORD *)(v11 + 92) ^= (*(_DWORD *)(v11 + 92) ^ v15) & 0x40;
    }
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 10;
    if ( *(_QWORD *)(v11 + 56) )
    {
      *(_QWORD *)(*(_QWORD *)(v11 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(v11 + 56) + 52LL) = 10;
    }
    *(_DWORD *)(v11 + 16) = 1;
    v24[0] = 0LL;
    v25 = 0LL;
    v24[1] = v13;
    VidSchiUpdateContextRunningTimeAtISR(v24, 1LL, 0xFFFFF78000000320uLL);
    v21 = *(_QWORD **)(a1 + 8LL * v27 + 1568);
    if ( v21 && v21 != v13 )
      v21[58] = v13[58];
    v22 = (*v16 & 0x200) == 0;
    v4 = v26;
    if ( !v22 )
    {
      VidSchiUpdateCurrentIsrFrameTime(
        v26,
        *(&v26[200].Alignment + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 160LL)),
        0LL);
      *(_QWORD *)(*(_QWORD *)(v11 + 56) + 136LL) = *(_QWORD *)(*(&v26[200].Alignment
                                                               + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 160LL))
                                                             + 44056);
      *(_DWORD *)(*(_QWORD *)(v11 + 56) + 132LL) = *(_DWORD *)(*(&v26[200].Alignment
                                                               + *(unsigned int *)(*(_QWORD *)(v11 + 56) + 160LL))
                                                             + 44064);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2900));
    VidSchiProfilePerformanceTick(8LL, (__int64)v26, a1, 0LL, 0LL, 0LL, v11, 0LL);
    ExpInterlockedPushEntrySList(v26 + 111, (PSLIST_ENTRY)(v11 + 32));
    if ( (_DWORD)v14 == (_DWORD)v6 )
      return v5;
    v7 = a3;
  }
  if ( !*((_BYTE *)&v4[3].HeaderX64 + 5) )
  {
    WdLogSingleEntry5(0LL, 281LL, 1LL, v6, *(unsigned int *)(a1 + 152), v4[1].Alignment);
    __debugbreak();
    JUMPOUT(0x1C0025156LL);
  }
  *(_DWORD *)(a1 + 2032) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 2025) = 1;
  return result;
}
