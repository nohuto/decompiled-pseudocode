/*
 * XREFs of ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C001DA98
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1C0174948 (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this,
        __int64 a2)
{
  __int64 v4; // rax

  if ( !*(_DWORD *)this )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 1819LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return *(unsigned int *)(*((_QWORD *)this + 2) + 4LL * *((unsigned int *)this + 2));
}
