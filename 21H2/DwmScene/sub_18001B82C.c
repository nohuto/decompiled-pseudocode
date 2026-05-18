/*
 * XREFs of sub_18001B82C @ 0x18001B82C
 * Callers:
 *     sub_18001DD98 @ 0x18001DD98 (sub_18001DD98.c)
 *     sub_180020ED0 @ 0x180020ED0 (sub_180020ED0.c)
 * Callees:
 *     sub_18001B1F0 @ 0x18001B1F0 (sub_18001B1F0.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001FD3C @ 0x18001FD3C (sub_18001FD3C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

signed __int32 *__fastcall sub_18001B82C(volatile signed __int32 *a1, signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  unsigned int v5; // edi
  signed __int32 v6; // eax
  bool v7; // zf
  signed __int32 v8; // r8d
  signed __int32 v9; // ecx
  int v10; // edx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v5 = dword_18020F03C;
    if ( !dword_18020F03C )
      v5 = sub_18001B1F0((__int64)&byte_18020F020);
    sub_18001B920(a1, &v12, &v13);
    v6 = *a2;
    do
    {
      v7 = v13 == 0;
      v8 = v6;
      *a2 = v6;
      v9 = v6;
      if ( !v7 && (v6 & 2) == 0 )
      {
        v9 = v6 ^ ((unsigned __int16)v12 ^ (unsigned __int16)v6) & 0x9C1 | 2;
        *a2 = v9;
      }
      v10 = v6 & 4;
      if ( (v6 & 4) == 0 )
      {
        v9 = ((unsigned __int16)v12 ^ (unsigned __int16)v9) & 0x400 ^ v9 | 4;
        *a2 = v9;
      }
      v6 = _InterlockedCompareExchange(a1, v9, v6);
    }
    while ( v8 != v6 );
    if ( !v10 )
      sub_18001FD3C(&byte_18020F020, a1, 3LL, v5);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v12 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
