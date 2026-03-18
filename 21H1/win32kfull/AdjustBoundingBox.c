/*
 * XREFs of AdjustBoundingBox @ 0x1F79AF
 * Callers:
 *     ?vEudcOpaqueArea@ESTROBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x1F8EFF (-vEudcOpaqueArea@ESTROBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall AdjustBoundingBox(int a1, int a2, int *a3, int *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  int v8; // ecx
  int v9; // edx
  int result; // eax
  bool v11; // zf

  v6 = *(_DWORD **)a1;
  v7 = *(_DWORD **)a2;
  v8 = *(_DWORD *)(*(_DWORD *)a1 + 324) - *(_DWORD *)(*(_DWORD *)a2 + 324);
  v9 = *(_DWORD *)(*(_DWORD *)a2 + 320) - v6[80];
  result = v9 + v8;
  if ( v9 + v8 )
  {
    if ( v8 < 0 )
      v8 = 0;
    v11 = v9 == 0;
    if ( v9 < 0 )
    {
      v9 = 0;
      v11 = 1;
    }
    if ( !v11 || v8 )
    {
      if ( v8 > *a4 )
      {
        *a4 = v8;
        *a6 = v7[85] - v6[85];
        a6[1] = v7[86] - v6[86];
      }
      result = (int)a3;
      if ( v9 > *a3 )
      {
        *a3 = v9;
        *a5 = v7[83] - v6[83];
        result = v7[84] - v6[84];
        a5[1] = result;
      }
    }
  }
  return result;
}
