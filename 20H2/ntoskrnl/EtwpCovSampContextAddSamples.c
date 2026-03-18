/*
 * XREFs of EtwpCovSampContextAddSamples @ 0x14094561C
 * Callers:
 *     EtwpCovSampCaptureBufferProcess @ 0x1409449C0 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampContextAddAddresses @ 0x140945520 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampSampleBufferProcess @ 0x140948374 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     EtwCovSampHash @ 0x1405AC914 (EtwCovSampHash.c)
 *     EtwpCovSampCaptureContextSetPaused @ 0x140944A78 (EtwpCovSampCaptureContextSetPaused.c)
 *     EtwpCovSampHashLookupInTable @ 0x140947490 (EtwpCovSampHashLookupInTable.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x140947570 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerFreeTable @ 0x140948B68 (EtwpCoverageSamplerFreeTable.c)
 */

__int64 __fastcall EtwpCovSampContextAddSamples(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r12
  unsigned int RoomAndAcquireLock; // eax
  __int64 v11; // r12
  _DWORD *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // r9d
  unsigned int i; // r10d
  _QWORD *v17; // r13
  _QWORD *v19; // [rsp+30h] [rbp-88h]
  _QWORD *v20; // [rsp+38h] [rbp-80h]
  __int64 v21; // [rsp+40h] [rbp-78h]
  _QWORD *v22; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  ULONG_PTR v24; // [rsp+60h] [rbp-58h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  ULONG_PTR v26; // [rsp+70h] [rbp-48h]
  unsigned int v28; // [rsp+D8h] [rbp+20h]

  v4 = a2;
  v24 = BugCheckParameter2;
  v26 = BugCheckParameter2;
  v7 = 0;
  v22 = 0LL;
  v8 = 0;
  P = 0LL;
  v9 = qword_140C19748;
  RoomAndAcquireLock = EtwpCovSampHashMakeRoomAndAcquireLock(BugCheckParameter2);
  v28 = RoomAndAcquireLock;
  if ( RoomAndAcquireLock < a3 )
  {
    EtwpCovSampCaptureContextSetPaused(BugCheckParameter2, v9, 1);
    RoomAndAcquireLock = v28;
  }
  v11 = 0LL;
  while ( RoomAndAcquireLock && (unsigned int)v11 < a3 )
  {
    v12 = (_DWORD *)(v4 + 8 * v11);
    v20 = v12;
    v13 = *(_QWORD *)(BugCheckParameter2 + 1192);
    if ( !v13 )
      goto LABEL_14;
    LODWORD(v21) = *(_DWORD *)(v24 + 28);
    HIDWORD(v21) = v21;
    v14 = EtwCovSampHash(__PAIR64__(*v12, v12[1]), v21);
    v25 = v14;
    v15 = 1;
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 1208); ++i )
    {
      if ( (*(_BYTE *)(((*(_DWORD *)(BugCheckParameter2 + 1204) & ((unsigned int)v14 + i * HIDWORD(v25))) >> 3) + v13) & (unsigned __int8)(1 << (*(_BYTE *)(BugCheckParameter2 + 1204) & (v14 + i * BYTE4(v25)) & 7))) == 0 )
      {
        v15 = 0;
        break;
      }
    }
    if ( !v15 )
    {
      v12 = v20;
LABEL_14:
      v17 = *(_QWORD **)(BugCheckParameter2 + 1168);
      while ( 1 )
      {
        v19 = v17;
        if ( (unsigned int)EtwpCovSampHashLookupInTable(v17, v12, &v22) )
          break;
        v17 = (_QWORD *)*v17;
        v12 = v20;
        if ( v17 == (_QWORD *)(BugCheckParameter2 + 1168) )
        {
          *v22 = *v20;
          ++*((_DWORD *)v19 + 4);
          ++v7;
          RoomAndAcquireLock = --v28;
          goto LABEL_19;
        }
      }
    }
    ++v8;
    RoomAndAcquireLock = v28;
LABEL_19:
    v11 = (unsigned int)(v11 + 1);
    v4 = a2;
  }
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 8) == KeGetCurrentThread() )
  {
    *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( P )
    EtwpCoverageSamplerFreeTable(P);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 616), v7);
  _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 620), v8);
  if ( a3 > v8 + v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 624), a3 - v8 - v7);
  return v7;
}
