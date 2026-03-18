/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x1801CDD78
 * Callers:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1801CDDD8 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker::IsOutOfBounds(float *a1, int a2)
{
  char result; // al
  int v3; // edx
  float v4; // xmm1_4
  bool v5; // cc
  float v6; // xmm1_4
  float v7; // xmm0_4

  result = 0;
  if ( !a2 )
  {
    v6 = a1[18];
    if ( v6 > a1[24] )
      return 1;
    v7 = a1[21];
    goto LABEL_10;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v6 = a1[19];
    if ( v6 > a1[25] )
      return 1;
    v7 = a1[22];
LABEL_10:
    v5 = v7 <= v6;
LABEL_11:
    if ( v5 )
      return result;
    return 1;
  }
  if ( v3 != 1 )
    return result;
  v4 = a1[32];
  if ( a1[33] <= v4 )
  {
    v5 = v4 <= a1[34];
    goto LABEL_11;
  }
  return 1;
}
