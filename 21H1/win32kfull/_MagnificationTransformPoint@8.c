/*
 * XREFs of _MagnificationTransformPoint@8 @ 0x178EB2
 * Callers:
 *     _ApplyMagInputTransform@8 @ 0x13ECD5 (_ApplyMagInputTransform@8.c)
 *     _TransformForInputMagnification@12 @ 0x13EFD9 (_TransformForInputMagnification@12.c)
 *     _EditionMagnificationMousePosition@4 @ 0x178DE8 (_EditionMagnificationMousePosition@4.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnificationTransformPoint(_DWORD *a1, int *a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // edx
  int v7; // [esp+28h] [ebp-8h]
  int v8; // [esp+2Ch] [ebp-4h]

  if ( a1 )
  {
    v7 = a1[2];
    v8 = a1[3];
    v3 = a1[9];
    if ( v3 )
    {
      v4 = a1[10];
      if ( v4 )
      {
        v5 = *a1 + (((*a2 - a1[4]) << 8) + v3 / 2) / v3;
        v6 = a1[1] + (((a2[1] - a1[5]) << 8) + v4 / 2) / v4;
        if ( v5 >= v7 - 1 )
          v5 = v7 - 1;
        *a2 = v5;
        if ( v6 >= v8 - 1 )
          v6 = v8 - 1;
        a2[1] = v6;
      }
    }
  }
}
