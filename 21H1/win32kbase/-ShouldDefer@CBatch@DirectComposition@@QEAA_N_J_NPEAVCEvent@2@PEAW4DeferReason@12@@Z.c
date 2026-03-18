/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C00B35E0
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00B3220 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C01D5EEC (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@3@W4DeferReason@43@@Z @ 0x1C004B4D0 (-RecordBatchDeferred@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEA.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00B4284 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

bool __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        __int64 a2,
        char a3,
        struct DirectComposition::CEvent *a4,
        enum DirectComposition::CBatch::DeferReason *a5)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // edi
  __int64 v11; // rax
  bool result; // al
  struct _KEVENT *v13; // rcx
  __int64 v14; // rsi
  void *v15; // rcx
  unsigned int v16; // edx
  DirectComposition::CEvent *v17; // rcx
  char v18; // cl
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v10 = 1;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 242LL) )
  {
    v10 = 2;
LABEL_12:
    if ( a4 )
    {
      v13 = (struct _KEVENT *)*((_QWORD *)a4 + 1);
LABEL_14:
      KeSetEvent(v13, 1, 0);
    }
    goto LABEL_18;
  }
  v8 = *((_QWORD *)this + 8);
  if ( v8 && a2 && v8 - a2 > 0 )
  {
    v10 = 3;
    goto LABEL_12;
  }
  if ( *((_QWORD *)this + 5) && *((int *)this + 12) > 0 )
  {
    v10 = 4;
  }
  else
  {
    v9 = *((_QWORD *)this + 13);
    v10 = 6;
    while ( v9 )
    {
      v15 = *(void **)(v9 + 8);
      Timeout.QuadPart = 0LL;
      if ( KeWaitForSingleObject(v15, UserRequest, 0, 0, &Timeout) )
      {
        v10 = 5;
        if ( !a4 )
          goto LABEL_18;
        goto LABEL_29;
      }
      v17 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
      v9 = *(_QWORD *)v17;
      if ( v17 )
        DirectComposition::CEvent::`scalar deleting destructor'(v17, v16);
      *((_QWORD *)this + 13) = v9;
    }
    v11 = *((_QWORD *)this + 12);
    if ( !v11 )
      return 0;
    v18 = *(_BYTE *)(v11 + 33);
    if ( v18 )
    {
      if ( *(int *)(v11 + 36) <= 0 )
        return 0;
    }
    if ( a4 && !v18 )
    {
LABEL_29:
      v13 = (struct _KEVENT *)*((_QWORD *)a4 + 1);
      goto LABEL_14;
    }
  }
LABEL_18:
  if ( a3 )
  {
    v14 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v14 + 49) )
    {
      if ( (*(_BYTE *)(v14 + 241) & 4) != 0 )
        DirectComposition::CApplicationChannel::WaitForCommitCompletionData::RecordBatchDeferred(
          *(_QWORD *)(v14 + 720),
          (__int64)this,
          v10);
      *(_BYTE *)(v14 + 49) = 1;
    }
  }
  result = 1;
  *(_DWORD *)a5 = v10;
  return result;
}
