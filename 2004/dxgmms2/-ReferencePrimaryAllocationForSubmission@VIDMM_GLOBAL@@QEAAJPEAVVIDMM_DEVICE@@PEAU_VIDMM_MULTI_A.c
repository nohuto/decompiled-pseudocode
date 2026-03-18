/*
 * XREFs of ?ReferencePrimaryAllocationForSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008649C
 * Callers:
 *     VidMmReferencePrimaryAllocationForSubmission @ 0x1C0012CF0 (VidMmReferencePrimaryAllocationForSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferencePrimaryAllocationForSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v6; // rdi
  int *v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax

  *a4 = 0LL;
  v6 = **(_QWORD **)a3;
  if ( !*(_BYTE *)(v6 + 88) )
  {
    v7 = *(int **)(v6 + 496);
    if ( (*v7 & 0x40000100) != 0 || *v7 < 0 )
    {
      if ( v7[3] )
      {
        if ( *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
          *a4 = a3;
          return 0LL;
        }
        else
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, a2, a3);
          v16[3] = a2;
          v16[4] = a3;
          v16[5] = *((_QWORD *)a3 + 1);
          WdLogEvent5_WdAssertion(v16);
          return 3223191829LL;
        }
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v7);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v6;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, a2, a3);
      *(_QWORD *)(v10 + 24) = 8955LL;
      WdLogEvent5_WdAssertion(v10);
      v14 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = v6;
      WdLogEvent5_WdAssertion(v14);
    }
    return 3221225485LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v6;
  }
  return 3223191814LL;
}
