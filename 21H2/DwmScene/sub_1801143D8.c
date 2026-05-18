/*
 * XREFs of sub_1801143D8 @ 0x1801143D8
 * Callers:
 *     sub_180080AA4 @ 0x180080AA4 (sub_180080AA4.c)
 *     sub_1801140E0 @ 0x1801140E0 (sub_1801140E0.c)
 *     sub_1801142C8 @ 0x1801142C8 (sub_1801142C8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801143D8(__int64 **a1, unsigned int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // rax
  char v15; // [rsp+60h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(__int64 *))(**a1 + 16))(*a1);
  if ( (_BYTE)result )
  {
    v11 = a1[2];
    v12 = *a1;
    v13 = *v12;
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(*v11 + 8))(v11, &v15);
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64, __int64, int))(v13 + 24))(
             v12,
             a6,
             *v14,
             a2,
             a5,
             a3,
             a4);
  }
  return result;
}
