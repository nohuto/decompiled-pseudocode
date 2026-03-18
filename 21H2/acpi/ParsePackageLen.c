/*
 * XREFs of ParsePackageLen @ 0x1C006C04C
 * Callers:
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParsePackageLen(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // r8d
  unsigned __int8 *v4; // r11
  unsigned int v5; // r9d
  unsigned __int8 v6; // bl
  int v7; // eax
  unsigned __int8 v8; // cl

  if ( a2 )
    *a2 = *a1;
  v3 = *(unsigned __int8 *)*a1;
  v4 = (unsigned __int8 *)(*a1 + 1LL);
  *a1 = v4;
  v5 = v3 >> 6;
  if ( (unsigned __int8)(v3 >> 6) )
  {
    v3 &= 0xFu;
    v6 = 0;
    do
    {
      v7 = *v4++;
      v8 = v6++;
      *a1 = v4;
      v3 |= v7 << (8 * v8 + 4);
    }
    while ( v6 < (unsigned __int8)v5 );
  }
  if ( a2 )
    *a2 += v3;
  return v3;
}
