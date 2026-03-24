/*
 * XREFs of _dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurNineGrid__ @ 0x1800F9880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__CProjectedShadow::s_cpHalfBlurNineGrid__()
{
  __int64 result; // rax

  if ( CProjectedShadow::s_cpHalfBlurNineGrid )
    return (*(__int64 (__fastcall **)(struct CNineGridBrush *))(*(_QWORD *)CProjectedShadow::s_cpHalfBlurNineGrid + 16LL))(CProjectedShadow::s_cpHalfBlurNineGrid);
  return result;
}
