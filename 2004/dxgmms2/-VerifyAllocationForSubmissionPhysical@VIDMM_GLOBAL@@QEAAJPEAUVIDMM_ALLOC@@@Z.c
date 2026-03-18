/*
 * XREFs of ?VerifyAllocationForSubmissionPhysical@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00B713C
 * Callers:
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00B3554 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::VerifyAllocationForSubmissionPhysical(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // cf
  __int64 v10; // rax

  v5 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v5 + 76) & 0x100000) != 0 )
  {
    v6 = WdLogNewEntry5_WdError(v5, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = a2;
    WdLogEvent5_WdError(v6);
  }
  else
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v5 + 496) + 4LL);
    v8 = (_WORD)v7 == 2;
    LOWORD(v7) = v7 - 2;
    if ( !v8 && (_WORD)v7 != 1 && (*((_BYTE *)a2 + 28) & 3) == 2 )
      return 0LL;
    v10 = WdLogNewEntry5_WdAssertion(v7, a2, a3);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdAssertion(v10);
  }
  return 3221225473LL;
}
