/*
 * XREFs of sub_180003578 @ 0x180003578
 * Callers:
 *     sub_180003960 @ 0x180003960 (sub_180003960.c)
 * Callees:
 *     sub_180037518 @ 0x180037518 (sub_180037518.c)
 */

__int64 __fastcall sub_180003578(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v2 = a1 + 80;
  v3 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v3 )
    v3 ^= v2;
  v4 = *(_BYTE *)(v2 + 8) & 1;
  while ( v3 )
  {
    v5 = sub_180037518(&v8, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        return (v3 - 64) & -(__int64)(v3 != 0);
      v6 = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v6 = *(_QWORD *)v3;
    }
    if ( v4 && v6 )
      v3 ^= v6;
    else
      v3 = v6;
  }
  return (v3 - 64) & -(__int64)(v3 != 0);
}
