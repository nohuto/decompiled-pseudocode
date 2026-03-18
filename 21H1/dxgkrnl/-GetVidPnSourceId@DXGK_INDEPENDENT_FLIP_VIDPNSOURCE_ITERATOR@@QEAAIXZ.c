/*
 * XREFs of ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C001D494
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1C0160624 (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this,
        __int64 a2)
{
  __int64 v4; // rax

  if ( !*(_DWORD *)this )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 1809LL;
    WdLogEvent5_WdAssertion(v4);
  }
  return *((unsigned int *)this + 1);
}
