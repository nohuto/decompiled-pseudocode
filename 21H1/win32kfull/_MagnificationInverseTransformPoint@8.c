/*
 * XREFs of _MagnificationInverseTransformPoint@8 @ 0x178E3C
 * Callers:
 *     _AddMagnificationOutputTransform@4 @ 0xEF322 (_AddMagnificationOutputTransform@4.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnificationInverseTransformPoint(int *a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  int v6; // edx
  int v7; // [esp+4h] [ebp-20h]
  int v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+18h] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  if ( a1 )
  {
    v3 = a1[9];
    v7 = *a1;
    v8 = a1[1];
    v9 = a1[4];
    v10 = a1[5];
    v11 = a1[6];
    v12 = a1[7];
    if ( v3 )
    {
      v4 = a1[10];
      if ( v4 )
      {
        v5 = v9 + v3 * (*a2 - v7) / 256;
        v6 = v10 + v4 * (a2[1] - v8) / 256;
        if ( v5 >= v11 - 1 )
          v5 = v11 - 1;
        *a2 = v5;
        if ( v6 >= v12 - 1 )
          v6 = v12 - 1;
        a2[1] = v6;
      }
    }
  }
}
