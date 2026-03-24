/*
 * XREFs of ?ReferenceAllocationForTokenSubmission@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B2F5C
 * Callers:
 *     VidMmReferenceAllocationForTokenSubmission @ 0x1C0022FB0 (VidMmReferenceAllocationForTokenSubmission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ReferenceAllocationForTokenSubmission(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax

  *a4 = 0LL;
  v6 = **(_QWORD **)a3;
  if ( *(_BYTE *)(v6 + 88) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v7) + 24) = v6;
    }
    return 3223191814LL;
  }
  else
  {
    v9 = *(unsigned int *)(*(_QWORD *)(v6 + 512) + 12LL);
    if ( (_DWORD)v9 )
    {
      if ( !a2 || *((struct VIDMM_DEVICE **)a3 + 1) == a2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a3 + 26);
        *a4 = a3;
        return 0LL;
      }
      else
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, a2, a3);
        v11[3] = a2;
        v11[4] = a3;
        v11[5] = *((_QWORD *)a3 + 1);
        WdLogEvent5_WdAssertion(v11);
        return 3223191829LL;
      }
    }
    else
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v9);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v6;
      }
      return 3223191812LL;
    }
  }
}
