/*
 * XREFs of x64tow @ 0x4B2F6C3E
 * Callers:
 *     __i64tow @ 0x4B2F6CE0 (__i64tow.c)
 *     __ui64tow @ 0x4B2F6D60 (__ui64tow.c)
 * Callees:
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 */

__int16 __fastcall x64tow(__int16 *a1, unsigned int a2, __int64 a3, int a4)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  __int16 *v6; // esi
  __int16 *v7; // edi
  unsigned __int64 v8; // rcx
  __int16 *v9; // esi
  __int16 result; // ax
  __int16 v11; // cx
  unsigned __int64 v12; // [esp-14h] [ebp-30h]
  __int16 *v13; // [esp+Ch] [ebp-10h]
  __int16 *v15; // [esp+18h] [ebp-4h]
  _WORD *v16; // [esp+18h] [ebp-4h]

  v4 = a3;
  HIDWORD(v5) = HIDWORD(a3);
  v15 = a1;
  if ( a4 )
  {
    *a1++ = 45;
    v4 = -(int)a3;
    v15 = a1;
    HIDWORD(v5) = (unsigned __int64)-a3 >> 32;
  }
  v6 = v15;
  v13 = a1;
  do
  {
    v7 = v6;
    v12 = __PAIR64__(HIDWORD(v5), v4);
    v8 = __PAIR64__(HIDWORD(v5), v4) % a2;
    v5 = v12 / a2;
    v4 = v5;
    v16 = v6 + 1;
    *v6++ = v8 + ((unsigned int)v8 > 9 ? 87 : 48);
  }
  while ( v5 );
  v9 = v13;
  *v16 = 0;
  do
  {
    result = *v9;
    v11 = *v7;
    *v7-- = *v9;
    *v9++ = v11;
  }
  while ( v9 < v7 );
  return result;
}
