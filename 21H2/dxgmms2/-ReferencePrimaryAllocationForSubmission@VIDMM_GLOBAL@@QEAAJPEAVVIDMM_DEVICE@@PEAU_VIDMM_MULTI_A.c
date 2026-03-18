/*
 * XREFs of ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4398
 * Callers:
 *     VidMmReferencePrimaryAllocationForSubmission @ 0x1C0017030 (VidMmReferencePrimaryAllocationForSubmission.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v5; // rdi
  int *v6; // rcx
  struct VIDMM_DEVICE *v7; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx

  *a4 = 0LL;
  v5 = **(_QWORD **)a3;
  if ( !*(_BYTE *)(v5 + 81) )
  {
    v6 = *(int **)(v5 + 528);
    if ( (*v6 & 0x40000100) != 0 || *v6 < 0 )
    {
      if ( v6[3] )
      {
        v7 = (struct VIDMM_DEVICE *)*((_QWORD *)a3 + 1);
        if ( v7 == a2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
          *a4 = a3;
          return 0LL;
        }
        else
        {
          WdLogSingleEntry3(1LL, a2, a3, v7);
          DxgkLogInternalTriageEvent(v19, 0x40000LL);
          return 3223191829LL;
        }
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v6, a2, a3, a4);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = v5;
      }
    }
    else
    {
      WdLogSingleEntry1(1LL, 9289LL);
      DxgkLogInternalTriageEvent(v13, 0x40000LL);
      WdLogSingleEntry1(1LL, v5);
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
    }
    return 3221225485LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v5;
  }
  return 3223191814LL;
}
