/*
 * XREFs of sub_18002BB60 @ 0x18002BB60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002BB60(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  result = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 4256))(
             *(_QWORD *)(a1 + 4256),
             &unk_180141C98,
             &v5);
  v4 = v5;
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 96LL))(v5, a2);
    v4 = v5;
  }
  if ( v4 )
  {
    v5 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
