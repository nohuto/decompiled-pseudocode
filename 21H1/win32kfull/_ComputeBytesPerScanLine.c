/*
 * XREFs of _ComputeBytesPerScanLine @ 0x1BB37B
 * Callers:
 *     _GetCachedSMP @ 0x1BA272 (_GetCachedSMP.c)
 *     _HT_CreateHalftoneBrush@20 @ 0x1BA502 (_HT_CreateHalftoneBrush@20.c)
 *     _HT_CreateStandardMonoPattern@8 @ 0x1BA618 (_HT_CreateStandardMonoPattern@8.c)
 *     _CreateStandardMonoPattern @ 0x1BBAAF (_CreateStandardMonoPattern.c)
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ComputeBytesPerScanLine(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  int v9; // edx

  v3 = a3;
  if ( !a3 )
    return 0;
  if ( a1 > 6 )
  {
    if ( a1 < 0xF5 )
      return 0;
    if ( a1 <= 0xFB )
      goto LABEL_19;
    if ( a1 <= 0xFD )
      goto LABEL_18;
    if ( a1 == 254 )
      goto LABEL_19;
    if ( a1 != 255 )
      return 0;
LABEL_17:
    v3 = (a3 + 1) >> 1;
    goto LABEL_19;
  }
  if ( a1 == 6 )
  {
    v3 = 4 * a3;
    goto LABEL_19;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    v3 = (a3 + 7) >> 3;
    goto LABEL_19;
  }
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_17;
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        v3 = 3 * a3;
        goto LABEL_19;
      }
      return 0;
    }
LABEL_18:
    v3 = 2 * a3;
  }
LABEL_19:
  if ( a2 > 1 && (v9 = v3 % a2) != 0 )
    return a2 + v3 - v9;
  else
    return v3;
}
