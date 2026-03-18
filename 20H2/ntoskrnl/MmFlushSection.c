/*
 * XREFs of MmFlushSection @ 0x1403542A0
 * Callers:
 *     CcSetFileSizesEx @ 0x1402955E0 (CcSetFileSizesEx.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcPurgeAndClearCacheSection @ 0x140316714 (CcPurgeAndClearCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x14032E894 (CcMdlWriteComplete2.c)
 *     MiFlushDataSection @ 0x140355B28 (MiFlushDataSection.c)
 *     CcUnpinRepinnedBcb @ 0x1404E8BD0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiFlushRelease @ 0x14022BDC4 (MiFlushRelease.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     MiComputeFlushRange @ 0x140354434 (MiComputeFlushRange.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407080AC (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14070828C (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushSection(int a1, __int64 *a2, __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // r15
  unsigned int v11; // eax
  _QWORD *v12; // r12
  _QWORD *v13; // r13
  int v14; // edi
  unsigned int v16; // r14d
  ULONG_PTR v17; // rax
  struct _FILE_OBJECT *v18; // rsi
  unsigned int v19; // r15d
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
  v8 = (__int64)a5;
  *a5 = 0;
  *(_QWORD *)(v8 + 8) = a3;
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
    v17 = MiReferenceControlAreaFile(v10);
    v12 = (_QWORD *)v22;
    v18 = (struct _FILE_OBJECT *)v17;
    v13 = (_QWORD *)*((_QWORD *)&v21 + 1);
    v19 = a6;
    do
    {
      v14 = FsRtlAcquireFileForCcFlushEx(v18);
      if ( v14 < 0 )
        break;
      v14 = MiFlushSectionInternal(*((ULONG_PTR *)&v20 + 1), v21, v13, v12, 0LL, v19, (unsigned int *)v8);
      FsRtlReleaseFileForCcFlush(v18);
      if ( v14 != -1073741740 )
        break;
      ++v16;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v16 < 5 );
    v10 = v20;
    MiDereferenceControlAreaFile(v20, (unsigned __int64)v18);
    CurrentThread = v23;
    v6 = a3;
  }
  else
  {
    v12 = (_QWORD *)v22;
    v13 = (_QWORD *)*((_QWORD *)&v21 + 1);
    v14 = MiFlushSectionInternal(
            *((ULONG_PTR *)&v20 + 1),
            v21,
            *((_QWORD **)&v21 + 1),
            (_QWORD *)v22,
            0LL,
            v11,
            (unsigned int *)v8);
  }
  if ( v14 < 0 || *(_QWORD *)(v8 + 8) )
    *(_QWORD *)(v8 + 8) += (unsigned int)(DWORD2(v22) << 12);
  else
    *(_QWORD *)(v8 + 8) = v6;
  BYTE4(CurrentThread[1].Queue) = v25;
  MiFlushRelease(v10, (ULONG_PTR)v13, (ULONG_PTR)v12);
  return (unsigned int)v14;
}
