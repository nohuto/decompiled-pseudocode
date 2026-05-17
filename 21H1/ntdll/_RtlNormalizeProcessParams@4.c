/*
 * XREFs of _RtlNormalizeProcessParams@4 @ 0x4B33FCE0
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlCreateUserProcessEx@20 @ 0x4B33FC60 (_RtlCreateUserProcessEx@20.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlNormalizeProcessParams(_DWORD *a1)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  if ( !a1 )
    return 0;
  v2 = a1[2];
  if ( (v2 & 1) == 0 )
  {
    v3 = a1[10];
    if ( v3 )
      a1[10] = (char *)a1 + v3;
    v4 = a1[13];
    if ( v4 )
      a1[13] = (char *)a1 + v4;
    v5 = a1[15];
    if ( v5 )
      a1[15] = (char *)a1 + v5;
    v6 = a1[17];
    if ( v6 )
      a1[17] = (char *)a1 + v6;
    v7 = a1[29];
    if ( v7 )
      a1[29] = (char *)a1 + v7;
    v8 = a1[31];
    if ( v8 )
      a1[31] = (char *)a1 + v8;
    v9 = a1[33];
    if ( v9 )
      a1[33] = (char *)a1 + v9;
    v10 = a1[35];
    if ( v10 )
      a1[35] = (char *)a1 + v10;
    v11 = a1[170];
    if ( v11 )
      a1[170] = (char *)a1 + v11;
    a1[2] = v2 | 1;
  }
  return a1;
}
