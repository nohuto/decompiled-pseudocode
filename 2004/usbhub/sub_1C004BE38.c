/*
 * XREFs of sub_1C004BE38 @ 0x1C004BE38
 * Callers:
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_1C004BE38(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4))(_QWORD, __int64, __int64, __int64)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v8 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 4, 1968390994, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v11 + 4544);
  if ( result )
  {
    LOBYTE(v10) = a4;
    LOBYTE(v9) = a3;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v11 + 4232), a2, v9, v10);
  }
  return result;
}
