/*
 * XREFs of sub_1800DABB4 @ 0x1800DABB4
 * Callers:
 *     sub_1800DA818 @ 0x1800DA818 (sub_1800DA818.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800DABB4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *result; // rax
  __int64 v9; // rcx
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v10);
  v5 = *v4 - 0x4FD1B4939E90EA20LL;
  if ( *v4 == 0x4FD1B4939E90EA20LL )
    v5 = v4[1] + 0x30A9569EEC81575FLL;
  if ( !v5 )
    **(_BYTE **)a1 = 1;
  v6 = *a2;
  v7 = *(_QWORD **)(a1 + 8);
  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 40LL))(v6, v10);
  v9 = *result - *v7;
  if ( *result == *v7 )
    v9 = result[1] - v7[1];
  if ( !v9 )
  {
    result = *(_QWORD **)(a1 + 16);
    *(_BYTE *)result = 1;
  }
  return result;
}
