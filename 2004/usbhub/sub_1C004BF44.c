/*
 * XREFs of sub_1C004BF44 @ 0x1C004BF44
 * Callers:
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_1C004BF44(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4))(_QWORD, __int64, __int64, __int64)
{
  _DWORD *v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v8 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 4, 1968391236, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v10 + 4536);
  if ( result )
  {
    LOBYTE(v9) = a4;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v10 + 4232), a2, a3, v9);
  }
  return result;
}
