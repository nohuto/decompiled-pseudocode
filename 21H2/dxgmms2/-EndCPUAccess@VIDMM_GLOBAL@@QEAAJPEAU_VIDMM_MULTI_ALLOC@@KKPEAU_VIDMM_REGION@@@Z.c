/*
 * XREFs of ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C00A5E70
 * Callers:
 *     VidMmEndCPUAccess @ 0x1C0017FF0 (VidMmEndCPUAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C002E6EC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DA5FC (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EndCPUAccess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC ***a2,
        __int64 a3,
        __int64 a4)
{
  struct _VIDMM_GLOBAL_ALLOC *v4; // rbx
  __int64 v5; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdi
  struct _VIDMM_GLOBAL_ALLOC **v8; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+28h] [rbp-30h]

  v4 = 0LL;
  v5 = (unsigned int)a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v5;
  }
  if ( (v5 & 0xFFFFFFFE) != 0 )
  {
    WdLogSingleEntry1(1LL, 8642LL);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 3221225712LL;
  }
  v7 = **a2;
  if ( !*((_DWORD *)v7 + 90) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225485LL;
  }
  if ( *((_BYTE *)v7 + 80) )
  {
    WdLogSingleEntry1(1LL, 8658LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v7 + 18) & 0x2000) != 0 )
    UnlockParavirtualizedAllocationOnHost(**a2);
  _InterlockedDecrement((volatile signed __int32 *)v7 + 90);
  if ( bTracingEnabled )
  {
    v8 = a2[1];
    if ( v8 )
      v4 = v8[3];
    if ( (byte_1C006E941 & 1) != 0 )
    {
      v13 = v5;
      McTemplateK0ppq_EtwWriteTransfer((__int64)this, &EventUnlock, a3, v4, a2, v13);
    }
  }
  return 0LL;
}
