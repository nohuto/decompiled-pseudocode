/*
 * XREFs of ?GreGetBitmapSizeInternal@@YGKPBUtagBITMAPINFO@@KI@Z @ 0x49006
 * Callers:
 *     _NtGdiGetDIBitsInternal@36 @ 0x48D46 (_NtGdiGetDIBitsInternal@36.c)
 *     ?bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z @ 0x76FC6 (-bCaptureBitmapInfo@@YGHPAUtagBITMAPINFO@@KIPAPAU1@@Z.c)
 *     ?xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z @ 0x182318 (-xxxDIBtoBMP@@YGPAUHBITMAP__@@PAUtagBITMAPINFOHEADER@@PAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __userpurge GreGetBitmapSizeInternal@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int result; // eax
  __int16 v14; // [esp+Ch] [ebp-8h]

  if ( !a2 )
    return 0;
  v5 = 0;
  if ( a3 == 12 )
  {
    v9 = *(unsigned __int16 *)(a2 + 10);
    v8 = 0;
    a3 = 12;
    v10 = 3;
    goto LABEL_7;
  }
  if ( a3 < 0x28 )
    return 0;
  v6 = *(unsigned __int16 *)(a2 + 14);
  v7 = *(_DWORD *)(a2 + 16);
  v14 = *(_WORD *)(a2 + 14);
  v8 = *(_DWORD *)(a2 + 32);
  v9 = v6;
  if ( v7 == 3 )
  {
    a1 = a1 != 1 ? a1 : 0;
    if ( v14 != 32 && v14 != 16 )
      return 0;
    v12 = a3;
    v8 = a3 > 0x28 ? 0 : 3;
    v5 = v8;
    v11 = 2;
    goto LABEL_24;
  }
  if ( v7 )
  {
    if ( v7 == 10 )
    {
      switch ( v6 )
      {
        case 1:
          v11 = 2;
          v5 = 2;
          goto LABEL_32;
        case 4:
          v5 = 16;
          break;
        case 8:
          v5 = 256;
          break;
        case 32:
          v5 = 0;
          break;
        default:
          return 0;
      }
      v11 = 2;
      goto LABEL_32;
    }
    v11 = 2;
    if ( v7 == 2 )
      goto LABEL_30;
    if ( v7 != 1 )
    {
      if ( v7 == 12 )
      {
LABEL_30:
        if ( v9 == 4 )
        {
          v5 = 16;
LABEL_32:
          v12 = a3;
LABEL_24:
          v10 = 4;
          goto LABEL_13;
        }
        return 0;
      }
      if ( v7 != 11 )
      {
        if ( v7 != 4 && v7 != 5 )
          return 0;
        v5 = 0;
        goto LABEL_32;
      }
    }
    if ( v9 == 8 )
    {
      v5 = 256;
      goto LABEL_32;
    }
    return 0;
  }
  v10 = 4;
LABEL_7:
  if ( v9 == 1 )
  {
    v11 = 2;
    v5 = 2;
  }
  else
  {
    if ( v9 == 4 )
    {
      v5 = 16;
    }
    else if ( v9 == 8 )
    {
      v5 = 256;
    }
    else
    {
      a1 = a1 != 1 ? a1 : 0;
      if ( v9 != 32 && v9 != 24 && v9 != 16 )
        return 0;
    }
    v11 = 2;
  }
  v12 = a3;
LABEL_13:
  if ( !v8 || v8 > v5 )
    v8 = v5;
  if ( a1 != 1 )
    v11 = a1 != 2 ? v10 : 0;
  result = (v11 * v8 + v12 + 3) & 0xFFFFFFFC;
  if ( result < v12 )
    return 0;
  return result;
}
