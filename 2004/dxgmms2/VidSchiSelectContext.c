/*
 * XREFs of VidSchiSelectContext @ 0x1C000A960
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C000A620 (VidSchiScheduleCommandToRun.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00D5928 (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C000BE90 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0012FE4 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiStartNodeYield @ 0x1C00130C0 (VidSchiStartNodeYield.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContext(__int64 a1, int a2)
{
  struct _VIDSCH_CONTEXT *v4; // rdi
  __int64 v5; // rax
  __int64 SetBits; // rax
  __int64 *v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  CCHAR v12; // al
  CCHAR MostSignificantBit; // al
  CCHAR v15; // al
  LARGE_INTEGER v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  LARGE_INTEGER v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-78h] BYREF
  __int64 v31; // [rsp+58h] [rbp-60h] BYREF
  __int128 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+70h] [rbp-48h]
  union _LARGE_INTEGER v34; // [rsp+C0h] [rbp+8h] BYREF
  char v35; // [rsp+C8h] [rbp+10h] BYREF
  union _LARGE_INTEGER v36; // [rsp+D0h] [rbp+18h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D8h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
  if ( *(_DWORD *)(a1 + 712) )
  {
    v5 = *(_QWORD *)(a1 + 240);
    if ( v5 && (*(_DWORD *)(v5 + 184) & 1) != 0 )
    {
      v4 = *(struct _VIDSCH_CONTEXT **)(a1 + 240);
      goto LABEL_19;
    }
    if ( *(_DWORD *)(a1 + 72) == 1 )
    {
      v8 = **(_QWORD **)(a1 + 624);
      if ( !*(_DWORD *)(v8 + 1760) )
        goto LABEL_19;
      goto LABEL_13;
    }
    RtlCopyBitMapEx(a1 + 432, a1 + 528, 0LL);
    RtlIntersectBitMapsEx(a1 + 528, a1 + 480);
    if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 528, 0LL, *(_QWORD *)(a1 + 528)) )
      RtlCopyBitMapEx(a1 + 432, a1 + 528, 0LL);
    SetBits = RtlFindSetBitsEx(a1 + 528, 1LL, (unsigned int)(*(_DWORD *)(a1 + 704) + 1));
    if ( SetBits != -1 )
    {
      v7 = *(__int64 **)(a1 + 624);
      if ( (unsigned int)SetBits < *(_DWORD *)(a1 + 696) )
        v7 += (unsigned int)SetBits;
      v8 = *v7;
      *(_DWORD *)(a1 + 704) = SetBits;
LABEL_13:
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 1764) )
        {
          v9 = *(_QWORD *)(v8 + 24);
          v35 = 0;
          v33 = 0LL;
          v31 = v8;
          v32 = 0LL;
          DpSynchronizeExecution(
            *(_QWORD *)(v9 + 24),
            VidSchiUpdateNodeRunningTimeAtISR,
            &v31,
            *(unsigned int *)(v9 + 32),
            &v35);
        }
        v10 = *(_QWORD *)(v8 + 24);
        PerformanceFrequency.QuadPart = 0LL;
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v11 = *(unsigned int *)(v8 + 1760);
        if ( *(_BYTE *)(v8 + 2016)
          && (v11 & 0xC0000000) == 0
          && (v11 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v10 + 192)))) != 0 )
        {
          MostSignificantBit = RtlFindMostSignificantBit(v11 & (0xFFFFFFFFuLL >> (31 - *(_BYTE *)(v10 + 192))));
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, MostSignificantBit, 1);
          if ( v4 )
          {
            VidSchiUpdateNodeYieldStatus((struct _VIDSCH_NODE *)v8);
          }
          else
          {
            v15 = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 1760));
            v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, v15, 0);
            if ( !*(_QWORD *)(v8 + 1992) )
            {
              v34.QuadPart = 0LL;
              v16 = KeQueryPerformanceCounter(&v34);
              v17 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 504LL);
              v18 = 0LL;
              if ( (unsigned int)v17 <= *(_DWORD *)(a1 + 40) )
                v18 = (unsigned int)v17;
              v19 = (unsigned int)v18;
              v20 = *(_QWORD *)(a1 + 8 * v18 + 3104);
              v21 = *(unsigned int *)(v20 + 70580);
              if ( !(_DWORD)v21 )
              {
                v22 = WdLogNewEntry5_WdWarning(v20, v17);
                *(_QWORD *)(v22 + 24) = v19;
                WdLogEvent5_WdWarning(v22);
                v21 = 16LL;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
                v8,
                (LARGE_INTEGER)v16.QuadPart,
                (union _LARGE_INTEGER)v34.QuadPart,
                v21);
            }
            VidSchiProfilePerformanceTick(20, a1, v8, 0, (__int64)v4, 0LL, 0LL, 1LL);
          }
        }
        else
        {
          v12 = RtlFindMostSignificantBit(*(unsigned int *)(v8 + 1760));
          v4 = VidSchiSelectContextFromThisPriority((struct _VIDSCH_NODE *)v8, v12, 0);
          if ( (*(_DWORD *)(a1 + 2448) & 4) != 0 && *(_BYTE *)(v8 + 2016) && !*(_QWORD *)(v8 + 1992) )
          {
            v36.QuadPart = 0LL;
            v23 = KeQueryPerformanceCounter(&v36);
            v24 = *(unsigned int *)(*((_QWORD *)v4 + 13) + 504LL);
            v25 = 0LL;
            if ( (unsigned int)v24 <= *(_DWORD *)(a1 + 40) )
              v25 = (unsigned int)v24;
            v26 = (unsigned int)v25;
            v27 = *(_QWORD *)(a1 + 8 * v25 + 3104);
            v28 = *(unsigned int *)(v27 + 70580);
            if ( !(_DWORD)v28 )
            {
              v29 = WdLogNewEntry5_WdWarning(v27, v24);
              *(_QWORD *)(v29 + 24) = v26;
              WdLogEvent5_WdWarning(v29);
              v28 = 16LL;
            }
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VidSchiStartNodeYield)(
              v8,
              (LARGE_INTEGER)v23.QuadPart,
              (union _LARGE_INTEGER)v36.QuadPart,
              v28);
          }
          VidSchiProfilePerformanceTick(20, a1, v8, 0, (__int64)v4, 0LL, 0LL, 0LL);
        }
      }
    }
  }
LABEL_19:
  VidSchiProfilePerformanceTick(2, a1, 0, 0, (__int64)v4, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
