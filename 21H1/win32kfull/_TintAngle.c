/*
 * XREFs of _TintAngle @ 0x1BE98A
 * Callers:
 *     _pDCIAdjClr @ 0x1BEB31 (_pDCIAdjClr.c)
 * Callees:
 *     <none>
 */

int *__cdecl TintAngle(int *a1, int *a2)
{
  int v2; // ecx
  int v3; // ebx
  int *result; // eax
  int v5; // eax
  int v6; // eax
  int v7; // et2
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  int v11; // ecx
  int v12; // [esp+0h] [ebp-8h]

  if ( v2 > 100 || v2 < -100 )
    v2 = 100;
  v3 = 0;
  if ( v2 > 0 || (v3 = 1, (v2 = -v2) != 0) )
  {
    v5 = 6 * v2;
    v12 = 6 * v2;
    if ( 6 * v2 >= 900 )
      v5 = 6 * (300 - v2);
    v7 = v5 % 10;
    v6 = v5 / 10;
    v8 = v6;
    v9 = v7;
    v10 = SinNumber[v6];
    if ( v7 )
      v10 += (v9 * (dword_25B954[v6] - v10) + 5) / 10;
    if ( !v3 )
      v10 = -v10;
    *a1 = v10;
    if ( v9 )
    {
      v8 = v6 + 1;
      v9 = 10 - v9;
    }
    v11 = SinNumber[90 - v8];
    if ( v9 )
      v11 += (v9 * (dword_25B954[90 - v8] - v11) + 5) / 10;
    if ( v12 >= 900 )
      v11 = -v11;
    result = a2;
    *a2 = v11;
  }
  else
  {
    *a2 = 0;
    result = a1;
    *a1 = 0;
  }
  return result;
}
