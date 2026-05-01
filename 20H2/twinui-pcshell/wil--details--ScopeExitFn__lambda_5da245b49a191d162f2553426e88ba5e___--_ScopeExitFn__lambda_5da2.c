/*
 * XREFs of wil::details::ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___::_ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___ @ 0x1803D0A94
 * Callers:
 *     _wil::ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____::_1_::dtor$2 @ 0x180102C4D (_wil--ResultFromException__lambda_46851bff5b4673daf3d019eee80c73b2____--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___::_ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 128LL) + 32LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 128LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
