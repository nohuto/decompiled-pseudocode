/*
 * XREFs of ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x1C000B5E0
 * Callers:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000AD90 (VidSchiCheckFlipQueueTimeout.c)
 * Callees:
 *     VidSchiSkipXboxVsyncTimeout @ 0x1C003A9E0 (VidSchiSkipXboxVsyncTimeout.c)
 */

__int64 __fastcall VidSchiCheckHeadTimeout(
        KSPIN_LOCK *a1,
        unsigned int a2,
        int *a3,
        unsigned __int64 *a4,
        union _ULARGE_INTEGER *a5)
{
  unsigned int v6; // r14d
  unsigned __int64 *v7; // rbx
  __int64 v8; // r13
  KSPIN_LOCK v9; // r12
  int i; // edi
  KSPIN_LOCK v11; // rsi
  LARGE_INTEGER *v12; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v14; // r15
  LONG HighPart; // eax
  LARGE_INTEGER v17; // rbx
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  KSPIN_LOCK v21; // r8
  _DWORD *QuadPart; // rcx
  unsigned int v23; // edx
  bool v24; // zf
  int v25; // eax
  char v26; // cl
  char v27; // r10
  unsigned __int64 v28; // rax
  int v29; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF

  v6 = 0;
  v7 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = a2;
  v9 = a1[v8 + 400];
  KeAcquireInStackQueuedSpinLock(a1 + 216, &LockHandle);
  for ( i = -1; ; ++i )
  {
    if ( i == *((_DWORD *)a1 + 38) )
    {
LABEL_16:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return v6;
    }
    v11 = a1[v8 + 400];
    if ( i == -1 )
      v12 = *(LARGE_INTEGER **)(v11 + 24);
    else
      v12 = *(LARGE_INTEGER **)(v11 + 8LL * i + 32);
    if ( !v12 || *(int *)(v9 + 4) < 4 && !*((_BYTE *)a1 + 156) )
      goto LABEL_14;
    if ( (v12->LowPart & 1) != 0 )
      break;
    if ( *((_BYTE *)a1 + 59) )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = MEMORY[0xFFFFF78000000320];
    v12[1] = PerformanceCounter;
    if ( *(_DWORD *)(v9 + 2988) )
    {
      v14 = &v12[172 * (unsigned int)v12[8].HighPart];
      HighPart = v14[146].HighPart;
      if ( HighPart == 5 || HighPart == 15 )
      {
        v17 = v12[1];
        v18 = v14[153];
        if ( v17.QuadPart <= (unsigned __int64)v18.QuadPart )
          goto LABEL_14;
        v19 = v17.QuadPart - v18.QuadPart;
        if ( *((_BYTE *)a1 + 59) )
        {
          v21 = a1[328];
          if ( is_mul_ok(v19, 0x989680uLL) )
            v20 = v19 * (unsigned __int128)0x989680uLL / v21;
          else
            v20 = 10000000 * (v19 / v21) + 10000000 * (v19 % v21) / v21;
        }
        else
        {
          v20 = v19 * KeQueryTimeIncrement();
        }
        if ( v20 > 10000000 * (unsigned __int64)g_TdrConfig[1]
          && !(unsigned __int8)VidSchiSkipXboxVsyncTimeout(a1, v12, &v14[15]) )
        {
          v12->LowPart |= 1u;
          v12[2].QuadPart = v19;
          v12[3] = v14[153];
          QuadPart = (_DWORD *)v14[162].QuadPart;
          *a3 = i;
          if ( (v14[157].LowPart & 0x10) != 0 )
            v23 = ((unsigned __int16)*QuadPart | (unsigned __int16)(*QuadPart >> 10)) & 0x3FF;
          else
            v23 = (1 << *((_DWORD *)a1 + 38)) - 1;
          v24 = !_BitScanForward((unsigned int *)&v25, v23);
          v26 = -1;
          v12[4].QuadPart = 0LL;
          if ( !v24 )
            v26 = v25;
          v27 = 0;
          v28 = 0LL;
          if ( v23 )
          {
            while ( 1 )
            {
              v28 = *(_QWORD *)(((8 * *(_DWORD *)(v14[162].QuadPart + 8) + 231) & 0xFFFFFFF8) * v27
                              + v14[162].QuadPart
                              + 24);
              if ( v28 )
                break;
              v29 = 1 << v26;
              v26 = -1;
              v23 &= ~v29;
              v24 = !_BitScanForward((unsigned int *)&v29, v23);
              if ( !v24 )
                v26 = v29;
              ++v27;
              if ( !v23 )
              {
                v28 = 0LL;
                goto LABEL_41;
              }
            }
            v12[4].QuadPart = v28;
          }
LABEL_41:
          *a4 = v28;
          if ( a5 )
            *a5 = (union _ULARGE_INTEGER)v12[3].QuadPart;
        }
      }
    }
    v6 = v12->LowPart & 1;
    if ( v6 )
      goto LABEL_16;
LABEL_14:
    v7 = a4;
  }
  if ( a5 )
    *a5 = (union _ULARGE_INTEGER)v12[3].QuadPart;
  *a3 = i;
  *v7 = v12[4].QuadPart;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 1LL;
}
