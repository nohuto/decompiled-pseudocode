/*
 * XREFs of sub_1C002E354 @ 0x1C002E354
 * Callers:
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 *     sub_1C000B870 @ 0x1C000B870 (sub_1C000B870.c)
 *     sub_1C000BEB0 @ 0x1C000BEB0 (sub_1C000BEB0.c)
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C0010E28 @ 0x1C0010E28 (sub_1C0010E28.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C001C03C @ 0x1C001C03C (sub_1C001C03C.c)
 *     sub_1C002F0A8 @ 0x1C002F0A8 (sub_1C002F0A8.c)
 *     sub_1C0040ACC @ 0x1C0040ACC (sub_1C0040ACC.c)
 *     sub_1C0048600 @ 0x1C0048600 (sub_1C0048600.c)
 *     sub_1C0048720 @ 0x1C0048720 (sub_1C0048720.c)
 *     sub_1C0048870 @ 0x1C0048870 (sub_1C0048870.c)
 *     sub_1C004A020 @ 0x1C004A020 (sub_1C004A020.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C002E354(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&DeviceObject->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))qword_1C006B728)(
      *((_QWORD *)&DeviceObject->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, (__int64 *)va);
}
