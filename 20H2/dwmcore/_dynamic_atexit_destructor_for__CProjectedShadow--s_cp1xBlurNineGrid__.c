/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurNineGrid__ @ 0x1800F39D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cp1xBlurNineGrid__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cp1xBlurNineGrid )
    return (*(__int64 (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)CProjectedShadow::s_cp1xBlurNineGrid + 16LL))(CProjectedShadow::s_cp1xBlurNineGrid);
  return result;
}
