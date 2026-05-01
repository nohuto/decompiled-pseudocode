/*
 * XREFs of sub_180028DE8 @ 0x180028DE8
 * Callers:
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_18002C534 @ 0x18002C534 (sub_18002C534.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180028DE8(HSTRING *a1, HSTRING *a2, unsigned __int8 a3)
{
  int bIgnoreCase; // esi
  const WCHAR *StringRawBuffer; // rdi
  const WCHAR *v6; // rax
  UINT32 length; // [rsp+40h] [rbp+8h] BYREF
  UINT32 v9; // [rsp+50h] [rbp+18h] BYREF

  bIgnoreCase = a3;
  StringRawBuffer = WindowsGetStringRawBuffer(*a1, &length);
  v6 = WindowsGetStringRawBuffer(*a2, &v9);
  return CompareStringOrdinal(StringRawBuffer, length, v6, v9, bIgnoreCase) == 2;
}
