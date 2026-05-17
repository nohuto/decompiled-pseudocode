/*
 * XREFs of _RtlDeNormalizeProcessParams@4 @ 0x4B3359D0
 * Callers:
 *     _RtlCreateProcessParametersInternal@48 @ 0x4B2A8307 (_RtlCreateProcessParametersInternal@48.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlDeNormalizeProcessParams(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  result = a1;
  if ( a1 )
  {
    v2 = a1[2];
    if ( (v2 & 1) != 0 )
    {
      v3 = a1[10];
      if ( v3 )
        a1[10] = v3 - (_DWORD)a1;
      v4 = a1[13];
      if ( v4 )
        a1[13] = v4 - (_DWORD)a1;
      v5 = a1[15];
      if ( v5 )
        a1[15] = v5 - (_DWORD)a1;
      v6 = a1[17];
      if ( v6 )
        a1[17] = v6 - (_DWORD)a1;
      v7 = a1[29];
      if ( v7 )
        a1[29] = v7 - (_DWORD)a1;
      v8 = a1[31];
      if ( v8 )
        a1[31] = v8 - (_DWORD)a1;
      v9 = a1[33];
      if ( v9 )
        a1[33] = v9 - (_DWORD)a1;
      v10 = a1[35];
      if ( v10 )
        a1[35] = v10 - (_DWORD)a1;
      v11 = a1[170];
      if ( v11 )
        a1[170] = v11 - (_DWORD)a1;
      a1[2] = v2 & 0xFFFFFFFE;
    }
  }
  return result;
}
