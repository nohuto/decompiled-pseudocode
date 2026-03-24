/*
 * XREFs of ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x1C020FD10
 * Callers:
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C0043460 (DxgkUnmapFrameBufferPointerCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::UnmapFrameBufferPointer(DXGADAPTER *this, __int64 a2, void *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 < *((_DWORD *)this + 70) )
  {
    MmUnmapViewInSystemSpace(a3);
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
