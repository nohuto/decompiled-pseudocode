/*
 * XREFs of MmFlushSection @ 0x140283C50
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14023C1EC (CcPurgeAndClearCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1402581E0 (CcMdlWriteComplete2.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     MiFlushDataSection @ 0x14029E64C (MiFlushDataSection.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140230680 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14027A794 (MiReferenceControlAreaFileWithTag.c)
 *     MiComputeFlushRange @ 0x140283E8C (MiComputeFlushRange.c)
 *     MiFlushRelease @ 0x1402867DC (MiFlushRelease.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407F0748 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407F099C (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushSection(int a1, __int64 *a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // r12
  int v14; // edi
  unsigned int v16; // r14d
  __int64 v17; // rax
  struct _FILE_OBJECT *v18; // rsi
  int v19; // r13d
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+60h] [rbp-10h]
  struct _KTHREAD *v23; // [rsp+B8h] [rbp+48h]
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v25 = 0LL;
  v6 = a3;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v25;
    v25 = v7;
  }
  v8 = a5;
  *a5 = 0;
  *((_QWORD *)v8 + 1) = a3;
  if ( !(unsigned int)MiComputeFlushRange(a1, (_DWORD)a2, a3, 0, (__int64)&v20) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = v20;
  v23 = CurrentThread;
  LOBYTE(v25) = BYTE4(CurrentThread[1].Queue);
  v11 = a6;
  BYTE4(CurrentThread[1].Queue) = 1;
  if ( (v11 & 1) != 0 )
  {
    v16 = 0;
    v17 = MiReferenceControlAreaFileWithTag(v10, 1666411853LL);
    v12 = v22;
    v18 = (struct _FILE_OBJECT *)v17;
    v13 = *((_QWORD *)&v21 + 1);
    v19 = a6;
    do
    {
      v14 = FsRtlAcquireFileForCcFlushEx(v18);
      if ( v14 < 0 )
        break;
      v14 = MiFlushSectionInternal(*((_QWORD *)&v20 + 1), v21, v13, v12, 0LL, v19, v8);
      FsRtlReleaseFileForCcFlush(v18);
      if ( v14 != -1073741740 )
        break;
      ++v16;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v16 < 5 );
    v10 = v20;
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(v20 + 64), (unsigned __int64)v18, 0x63536D4Du);
    CurrentThread = v23;
    v6 = a3;
  }
  else
  {
    v12 = v22;
    v13 = *((_QWORD *)&v21 + 1);
    v14 = MiFlushSectionInternal(*((_QWORD *)&v20 + 1), v21, *((_QWORD *)&v21 + 1), v22, 0LL, v11, v8);
  }
  if ( v14 < 0 || *((_QWORD *)v8 + 1) )
    *((_QWORD *)v8 + 1) += (unsigned int)(DWORD2(v22) << 12);
  else
    *((_QWORD *)v8 + 1) = v6;
  BYTE4(CurrentThread[1].Queue) = v25;
  MiFlushRelease(v10, v13, v12);
  return (unsigned int)v14;
}
