/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurNineGrid__ @ 0x1800F9820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cp2xBlurNineGrid__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cp2xBlurNineGrid )
    return (*(__int64 (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)CProjectedShadow::s_cp2xBlurNineGrid + 16LL))(CProjectedShadow::s_cp2xBlurNineGrid);
  return result;
}
