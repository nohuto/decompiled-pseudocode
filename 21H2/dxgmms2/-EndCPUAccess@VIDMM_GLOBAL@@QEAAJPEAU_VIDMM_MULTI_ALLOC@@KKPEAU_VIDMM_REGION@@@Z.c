/*
 * XREFs of ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00870C0
 * Callers:
 *     VidMmEndCPUAccess @ 0x1C0014450 (VidMmEndCPUAccess.c)
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C00245A8 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B4528 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EndCPUAccess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC ***a2,
        __int64 a3,
        unsigned int a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v4; // rdi
  __int64 v5; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v7; // rbx
  struct _VIDMM_GLOBAL_ALLOC **v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v5;
  }
  if ( (v5 & 0xFFFFFFFE) != 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v11 + 24) = 8410LL;
    WdLogEvent5_WdAssertion(v11);
    return 3221225712LL;
  }
  v7 = **a2;
  if ( !*((_DWORD *)v7 + 84) )
  {
    v12 = WdLogNewEntry5_WdWarning(this, a2);
    WdLogEvent5_WdWarning(v12);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v7 + 21) & 0x20) != 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v13 + 24) = 8426LL;
    WdLogEvent5_WdAssertion(v13);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v7 + 20) & 0x2000) != 0 )
    UnlockParavirtualizedAllocationOnHost(**a2);
  _InterlockedDecrement((volatile signed __int32 *)v7 + 84);
  if ( bTracingEnabled )
  {
    v8 = a2[1];
    if ( v8 )
      v4 = v8[3];
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v14 = v5;
      McTemplateK0ppq_EtwWriteTransfer((__int64)this, &EventUnlock, a3, v4, a2, v14);
    }
  }
  return 0LL;
}
