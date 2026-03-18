/*
 * XREFs of ?pfnGetRLESrcCopy@@YGP6GHPAUBLTINFO@@@ZKK@Z @ 0xC3FA4
 * Callers:
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 * Callees:
 *     <none>
 */

int (__stdcall *__fastcall pfnGetRLESrcCopy(int a1, int a2))(struct BLTINFO *)
{
  int v2; // edx
  int v3; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // ecx

  v2 = a2 - 1;
  if ( !v2 )
  {
    if ( a1 == 7 )
      return bSrcCopySRLE4D1;
    if ( a1 == 8 )
      return bSrcCopySRLE8D1;
    goto LABEL_3;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
LABEL_3:
    if ( a1 == 7 )
      return bSrcCopySRLE4D4;
    if ( a1 == 8 )
      return bSrcCopySRLE8D4;
    goto LABEL_6;
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
LABEL_6:
    if ( a1 == 7 )
      return bSrcCopySRLE4D8;
    if ( a1 == 8 )
      return bSrcCopySRLE8D8;
    goto LABEL_21;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_21:
    if ( a1 == 7 )
      return bSrcCopySRLE4D16;
    if ( a1 == 8 )
      return bSrcCopySRLE8D16;
    goto LABEL_24;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_24:
    if ( a1 == 7 )
      return bSrcCopySRLE4D24;
    if ( a1 == 8 )
      return bSrcCopySRLE8D24;
    goto LABEL_13;
  }
  if ( v7 != 1 )
    return 0;
LABEL_13:
  v8 = a1 - 7;
  if ( v8 )
  {
    if ( v8 == 1 )
      return bSrcCopySRLE8D32;
    return 0;
  }
  return bSrcCopySRLE4D32;
}
