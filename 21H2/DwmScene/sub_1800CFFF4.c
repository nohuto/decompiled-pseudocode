/*
 * XREFs of sub_1800CFFF4 @ 0x1800CFFF4
 * Callers:
 *     sub_1800CFF70 @ 0x1800CFF70 (sub_1800CFF70.c)
 * Callees:
 *     sub_1800CF1A4 @ 0x1800CF1A4 (sub_1800CF1A4.c)
 *     sub_1800CFB14 @ 0x1800CFB14 (sub_1800CFB14.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_1800CFFF4(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 *result; // rax
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rcx
  _QWORD *v12; // rbx
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch] BYREF
  int v15; // [rsp+48h] [rbp-28h] BYREF
  int v16; // [rsp+4Ch] [rbp-24h] BYREF
  int v17; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+60h] [rbp-10h] BYREF

  v2 = *(_DWORD **)(a1 + 96);
  v19 = a2;
  if ( v2 )
    v4 = v2[6];
  else
    v4 = 0;
  v13 = v4;
  if ( v2 )
    v5 = v2[5];
  else
    v5 = 0;
  v14 = v5;
  if ( v2 )
    v6 = v2[4];
  else
    v6 = 0;
  v15 = v6;
  if ( v2 )
    v7 = v2[3];
  else
    v7 = 0;
  v16 = v7;
  if ( v2 )
    v8 = v2[2];
  else
    v8 = 0;
  v17 = v8;
  result = sub_1800CFB14(&v18, &v17, &v16, &v15, &v14, &v13, &v19);
  v10 = *result;
  *result = 0LL;
  v11 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 96);
  *(_QWORD *)(a1 + 96) = v10;
  if ( v11 )
    result = (__int64 *)(**v11)(v11, 1LL);
  v12 = v18;
  if ( v18 )
  {
    sub_1800CF1A4(v18);
    return (__int64 *)j__o_free(v12);
  }
  return result;
}
