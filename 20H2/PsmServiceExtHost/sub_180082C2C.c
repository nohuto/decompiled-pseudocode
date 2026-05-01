/*
 * XREFs of sub_180082C2C @ 0x180082C2C
 * Callers:
 *     sub_180082CD4 @ 0x180082CD4 (sub_180082CD4.c)
 *     sub_180083178 @ 0x180083178 (sub_180083178.c)
 * Callees:
 *     sub_180082A4C @ 0x180082A4C (sub_180082A4C.c)
 */

__int64 __fastcall sub_180082C2C(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned __int64 v6; // rbx
  int v7; // esi
  int v8; // eax
  unsigned __int64 v9; // rax

  v3 = a1 + 16;
  v4 = 0;
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= v3;
    else
      v6 = 0LL;
  }
  v7 = *(_BYTE *)(v3 + 8) & 1;
  if ( !v6 )
    return (unsigned int)-1073741275;
  do
  {
    sub_180082A4C();
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v6;
    }
    if ( v7 && v9 )
      v6 ^= v9;
    else
      v6 = v9;
  }
  while ( v6 );
  if ( v6 )
    *a3 = v6;
  else
    return (unsigned int)-1073741275;
  return v4;
}
