/*
 * XREFs of sub_18010EB9C @ 0x18010EB9C
 * Callers:
 *     sub_18010E9F8 @ 0x18010E9F8 (sub_18010E9F8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18010EB9C(__int64 **a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
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
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64, __int64, __int64, int))(v13 + 56))(
             v12,
             a5,
             *v14,
             a6,
             a4,
             a2,
             a3);
  }
  return result;
}
