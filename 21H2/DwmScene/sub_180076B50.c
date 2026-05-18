/*
 * XREFs of sub_180076B50 @ 0x180076B50
 * Callers:
 *     sub_18007E850 @ 0x18007E850 (sub_18007E850.c)
 * Callees:
 *     sub_180075CC0 @ 0x180075CC0 (sub_180075CC0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_current_owns @ 0x18012536E (_Mtx_current_owns.c)
 *     _Cnd_timedwait @ 0x180125380 (_Cnd_timedwait.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x180125392 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

__int64 __fastcall sub_180076B50(_Cnd_t a1, _Mtx_t *a2, __int64 *a3)
{
  __int64 result; // rax
  bool v6; // di
  int v7; // eax
  xtime v8; // [rsp+20h] [rbp-38h] BYREF

  if ( *a3 <= 0 )
    return 1LL;
  v6 = sub_180075CC0((__int64)&v8, a3);
  if ( !Mtx_current_owns(*a2) )
  {
    std::_Throw_Cpp_error(4);
    JUMPOUT(0x180076BEDLL);
  }
  v7 = Cnd_timedwait(a1, *a2, &v8);
  if ( v7 )
  {
    if ( v7 != 2 )
    {
      std::_Throw_C_error(v7);
      __debugbreak();
    }
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v6 )
    return 0LL;
  return result;
}
