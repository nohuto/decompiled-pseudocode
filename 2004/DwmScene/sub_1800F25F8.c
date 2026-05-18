/*
 * XREFs of sub_1800F25F8 @ 0x1800F25F8
 * Callers:
 *     sub_1800A441C @ 0x1800A441C (sub_1800A441C.c)
 * Callees:
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     sub_18009B9E0 @ 0x18009B9E0 (sub_18009B9E0.c)
 *     sub_1800CCC60 @ 0x1800CCC60 (sub_1800CCC60.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F25F8(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  unsigned int v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1[6];
  if ( v4 )
    sub_18009B9E0(v4, a2);
  v5 = a1[8];
  if ( v5 )
    sub_18009B9E0(v5, a2);
  v6 = a1[10];
  if ( v6 )
    sub_18009B9E0(v6, a2);
  v7 = a1[12];
  if ( v7 )
    sub_18009B9E0(v7, a2);
  v8 = a1[22];
  if ( v8 )
    sub_1800CCC60(v8, a2);
  v12 = a2;
  result = sub_180063C48(a1 + 60, &v12);
  v10 = a1 + 48;
  v11 = a1 + 60;
  while ( v10 != v11 )
  {
    if ( *v10 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(*v10, a2);
    v10 += 2;
  }
  return result;
}
