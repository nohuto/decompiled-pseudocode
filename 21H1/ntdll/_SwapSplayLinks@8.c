/*
 * XREFs of _SwapSplayLinks@8 @ 0x4B2E7836
 * Callers:
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _RtlDeleteNoSplay@8 @ 0x4B2E77B0 (_RtlDeleteNoSplay@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SwapSplayLinks(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *result; // eax
  _DWORD *v15; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // ebx
  int v21; // ecx
  _DWORD *v22; // eax
  int v23; // ecx

  v2 = a1;
  v3 = a2;
  v4 = (_DWORD *)*a1;
  if ( (_DWORD *)*a1 == a1 || (v5 = (_DWORD *)*a2, v6 = v4, (_DWORD *)*a2 == v2) )
  {
    v19 = v2;
    v5 = v4;
    v2 = a2;
    a2 = v19;
    v6 = (_DWORD *)*v3;
  }
  if ( v6 == a2 )
  {
    if ( v5 == a2 )
    {
      v7 = v2;
    }
    else
    {
      v5[(v5[1] != (_DWORD)a2) + 1] = v2;
      v7 = (_DWORD *)*a2;
    }
    *v2 = v7;
    v8 = v2[1];
    v2[1] = a2[1];
    v9 = a2[2];
    a2[1] = v8;
    v10 = v2[2];
    v2[2] = v9;
    a2[2] = v10;
    v11 = (_DWORD *)v2[1];
    if ( v11 == v2 )
    {
      v2[1] = a2;
      v11 = a2;
    }
    else
    {
      v2[2] = a2;
    }
  }
  else
  {
    v15 = v6 + 1;
    if ( v5 == a2 )
    {
      if ( (_DWORD *)*v15 != v2 )
        v15 = v6 + 2;
      *v15 = a2;
      *a2 = *v2;
      *v2 = v2;
    }
    else
    {
      if ( (_DWORD *)*v15 != v2 )
        v15 = v6 + 2;
      v20 = v5 + 1;
      if ( (_DWORD *)v5[1] == a2 )
      {
        v21 = v5[1];
      }
      else
      {
        v20 = v5 + 2;
        v21 = v5[2];
      }
      v22 = (_DWORD *)*v15;
      *v15 = v21;
      *v20 = v22;
      v23 = *v2;
      *v2 = *a2;
      *a2 = v23;
    }
    v16 = v2[1];
    v2[1] = a2[1];
    v17 = a2[2];
    a2[1] = v16;
    v18 = v2[2];
    v2[2] = v17;
    a2[2] = v18;
    v11 = (_DWORD *)v2[1];
  }
  if ( v11 )
    *v11 = v2;
  v12 = (_DWORD *)v2[2];
  if ( v12 )
    *v12 = v2;
  v13 = (_DWORD *)a2[1];
  if ( v13 )
    *v13 = a2;
  result = (_DWORD *)a2[2];
  if ( result )
    *result = a2;
  return result;
}
