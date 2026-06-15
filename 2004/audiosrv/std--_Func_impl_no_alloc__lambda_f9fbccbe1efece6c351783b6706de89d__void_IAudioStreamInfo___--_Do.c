/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f9fbccbe1efece6c351783b6706de89d__void_IAudioStreamInfo___::_Do_call @ 0x1800EECE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_f9fbccbe1efece6c351783b6706de89d__void_IAudioStreamInfo___::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  bool v2; // zf
  __int64 *v3; // rcx
  __int64 v4; // rdx

  v2 = *(_BYTE *)(a1 + 8) == 0;
  v3 = *a2;
  v4 = **a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64 *))(v4 + 176))(v3);
  else
    return (*(__int64 (__fastcall **)(__int64 *))(v4 + 184))(v3);
}
