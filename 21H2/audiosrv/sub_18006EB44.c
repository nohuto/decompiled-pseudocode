/*
 * XREFs of sub_18006EB44 @ 0x18006EB44
 * Callers:
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 * Callees:
 *     sub_18003418C @ 0x18003418C (sub_18003418C.c)
 *     sub_18006CFE4 @ 0x18006CFE4 (sub_18006CFE4.c)
 */

_UNKNOWN **sub_18006EB44(volatile signed __int32 *a1, unsigned __int8 a2, __int64 a3, ...)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  int v7; // [rsp+50h] [rbp+8h] BYREF
  __int16 v8; // [rsp+54h] [rbp+Ch]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  LODWORD(v3) = *a1;
  v5 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v3 = *(_QWORD *)sub_18003418C(a1, (signed __int32 *)va);
    v9 = v3;
  }
  LODWORD(v9) = 0;
  v7 = 0;
  BYTE4(v9) = 3;
  v8 = WORD2(v9);
  return sub_18006CFE4(
           (__int64)(a1 + 2),
           0xFD9AE8u,
           ((unsigned int)v3 >> 10) & 1,
           ((unsigned int)v3 >> 11) & 1,
           (__int64)&v7,
           v5,
           3u);
}
