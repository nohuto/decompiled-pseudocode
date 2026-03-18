/*
 * XREFs of ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00A93D0
 * Callers:
 *     VidMmWaitOnAllocationPresentQueue @ 0x1C002D6D0 (VidMmWaitOnAllocationPresentQueue.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00A5CE0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0016FA4 (VidSchiInterlockedRemoveEntryList.c)
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0017D88 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationPresentQueue(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2)
{
  _VIDMM_GLOBAL_ALLOC_NONPAGED *v2; // rsi
  int v4; // ebp
  __int64 v5; // rbx
  KSPIN_LOCK *v6; // r14
  unsigned int v8; // edi
  __int64 v9; // rcx
  _QWORD v10[20]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = (_VIDMM_GLOBAL_ALLOC_NONPAGED *)*((_QWORD *)a2 + 12);
  v4 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
  v6 = *(KSPIN_LOCK **)(v5 + 32);
  if ( *(_BYTE *)(v5 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0) )
  {
    v8 = -1071775232;
    WdLogSingleEntry2(3LL, v5, -1071775232LL);
  }
  else
  {
    if ( *((int *)a2 + 26) <= 0 && !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2) )
      return 0LL;
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[2]) = 5;
    LOBYTE(v10[19]) = 1;
    VidSchRegisterCompletionEvent((__int64)v6, (__int64)v10);
    while ( (*((int *)a2 + 26) > 0 || _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2)) && v4 >= 0 )
      v4 = VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)v6, (__int64)v10, 2LL);
    VidSchiInterlockedRemoveEntryList(v6 + 218, v10, 0LL);
    if ( v4 < 0 || *((int *)a2 + 26) <= 0 && !_VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v2) )
      return 0LL;
    v8 = -1073741811;
    WdLogSingleEntry2(1LL, v5, -1073741811LL);
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
  }
  return v8;
}
