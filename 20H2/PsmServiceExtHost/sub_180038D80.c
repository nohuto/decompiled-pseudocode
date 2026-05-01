/*
 * XREFs of sub_180038D80 @ 0x180038D80
 * Callers:
 *     sub_180038CA8 @ 0x180038CA8 (sub_180038CA8.c)
 * Callees:
 *     sub_180038FF0 @ 0x180038FF0 (sub_180038FF0.c)
 *     sub_18003A0E8 @ 0x18003A0E8 (sub_18003A0E8.c)
 *     sub_18003AC0C @ 0x18003AC0C (sub_18003AC0C.c)
 */

signed __int32 *__fastcall sub_180038D80(volatile signed __int32 *a1, signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  int v5; // esi
  signed __int32 v6; // eax
  int v7; // r8d
  signed __int32 v8; // r9d
  signed __int32 v9; // edx
  int v10; // r8d
  int v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]
  int i; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 3) != 3 )
  {
    v5 = dword_1800B4144;
    if ( !dword_1800B4144 )
      v5 = sub_180038FF0(&byte_1800B4128);
    sub_18003AC0C(a1, &v15, &i);
    v6 = *a2;
    v7 = v5 != 0 ? i : 0;
    for ( i = v7; ; v7 = i )
    {
      *a2 = v6;
      v8 = v6;
      v9 = v6;
      if ( v7 && (v6 & 1) == 0 )
      {
        v9 = v6 ^ ((unsigned __int16)v15 ^ (unsigned __int16)v6) & 0x278 | 1;
        *a2 = v9;
      }
      v10 = v6 & 2;
      if ( (v6 & 2) == 0 )
      {
        v9 = ((unsigned __int16)v15 ^ (unsigned __int16)v9) & 0x100 ^ v9 | 2;
        *a2 = v9;
      }
      v6 = _InterlockedCompareExchange(a1, v9, v6);
      if ( v8 == v6 )
        break;
    }
    if ( !v10 && byte_1800B4128 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      if ( !v5
        || v5 != dword_1800B4144
        || (v12 = 0, v13 = a1, !(unsigned __int8)sub_18003A0E8(&xmmword_1800B4178, &v12, 16LL)) )
      {
        _InterlockedAnd(a1, 0xFFFFFDF8);
      }
      ReleaseSRWLockExclusive(&SRWLock);
    }
    if ( (*(_BYTE *)a2 & 1) == 0 )
      *a2 ^= ((unsigned __int16)v15 ^ (unsigned __int16)*a2) & 0x278;
  }
  return a2;
}
