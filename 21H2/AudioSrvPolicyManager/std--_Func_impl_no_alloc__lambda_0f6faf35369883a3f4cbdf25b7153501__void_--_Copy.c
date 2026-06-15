/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Copy @ 0x18000E130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *a2 = off_18003EC80;
  v4 = a1[1];
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a2[2] = a1[2];
  v5 = a1[3];
  a2[3] = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
