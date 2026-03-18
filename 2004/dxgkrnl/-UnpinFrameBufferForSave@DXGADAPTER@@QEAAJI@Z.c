/*
 * XREFs of ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C0210034
 * Callers:
 *     DxgkUnpinFrameBufferForSaveCB @ 0x1C0042690 (DxgkUnpinFrameBufferForSaveCB.c)
 * Callees:
 *     DpiRemoveMemoryTracker @ 0x1C0056C34 (DpiRemoveMemoryTracker.c)
 */

__int64 __fastcall DXGADAPTER::UnpinFrameBufferForSave(DXGADAPTER *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v6; // rdi
  struct _MDL *v7; // rsi
  __int64 v8; // rax
  char *v9; // rbx

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 < *((_DWORD *)this + 70) )
  {
    v6 = *((_QWORD *)this + 323) + 360LL * (unsigned int)a2;
    v7 = *(struct _MDL **)(v6 + 72);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v8 + 24) = 10553LL;
      WdLogEvent5_WdAssertion(v8);
    }
    DpiRemoveMemoryTracker(*((_QWORD *)this + 27), (_QWORD *)(v6 + 80));
    v9 = (char *)v7->StartVa + v7->ByteOffset;
    MmUnlockPages(v7);
    IoFreeMdl(v7);
    MmUnmapViewInSystemSpace(v9);
    *(_QWORD *)(v6 + 72) = 0LL;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
