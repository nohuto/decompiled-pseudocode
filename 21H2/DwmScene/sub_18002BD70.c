/*
 * XREFs of sub_18002BD70 @ 0x18002BD70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BE50 (_guard_check_icall_nop.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18006DAE0 @ 0x18006DAE0 (sub_18006DAE0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002BD70(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 272);
  if ( v2 )
    sub_18006DAE0(v2, 0LL);
  v9 = 0LL;
  v3 = sub_180029F64(a1, &v8);
  v4 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  (**(void (__fastcall ***)(_QWORD, void *, __int64 *))*v3)(*v3, &unk_180141C98, &v9);
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 136LL))(v9);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 48LL))(*(_QWORD *)(a1 + 272));
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
