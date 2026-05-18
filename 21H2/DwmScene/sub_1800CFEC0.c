/*
 * XREFs of sub_1800CFEC0 @ 0x1800CFEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF1A4 @ 0x1800CF1A4 (sub_1800CF1A4.c)
 *     sub_1800CFB14 @ 0x1800CFB14 (sub_1800CFB14.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_QWORD *sub_1800CFEC0(__int64 a1, _QWORD *a2, int a3, int a4, ...)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  int v11; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+40h] BYREF
  va_list va; // [rsp+B0h] [rbp+40h]
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF
  va_list va1; // [rsp+B8h] [rbp+48h]
  va_list va2; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v12 = a2;
  v5 = *(_QWORD *)(a1 + 112);
  v14 = a3;
  v13 = a4;
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 32);
  else
    v6 = -1;
  v11 = v6;
  v7 = sub_1800CFB14(&v12, &v14, &v13, (int *)va, (int *)va2, (int *)va1, &v11);
  v8 = *v7;
  *v7 = 0LL;
  v9 = v12;
  *a2 = v8;
  if ( v9 )
  {
    sub_1800CF1A4(v9);
    j__o_free(v9);
  }
  return a2;
}
