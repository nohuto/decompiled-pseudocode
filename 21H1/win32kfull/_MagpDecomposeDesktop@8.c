/*
 * XREFs of _MagpDecomposeDesktop@8 @ 0xCF50C
 * Callers:
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 * Callees:
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 *     _DwmAsyncMagnDestroy@12 @ 0x1D1BC5 (_DwmAsyncMagnDestroy@12.c)
 *     _DwmAsyncMagnSetDesktopColorTransform@12 @ 0x1D1C57 (_DwmAsyncMagnSetDesktopColorTransform@12.c)
 *     _DwmAsyncMagnSetDesktopTransform@20 @ 0x1D1E08 (_DwmAsyncMagnSetDesktopTransform@20.c)
 */

_DWORD *__fastcall MagpDecomposeDesktop(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  _DWORD *result; // eax
  void *v5; // eax
  void *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // esi
  int *v9; // eax
  void *v10; // eax
  int v11; // [esp-4h] [ebp-3Ch]
  _DWORD v12[9]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD *v13; // [esp+30h] [ebp-8h]
  int v14; // [esp+34h] [ebp-4h]

  v12[8] = 3;
  v2 = a1;
  memset(v12, 0, 32);
  v13 = a1;
  _SetMagnificationInputTransform(v12);
  if ( *(_DWORD *)(a2 + 136) )
  {
    v5 = (void *)ReferenceDwmApiPort();
    DwmAsyncMagnSetDesktopColorTransform(v5, (int)&gMagEffectIdentity);
  }
  if ( *(_DWORD *)(a2 + 132) )
  {
    v6 = (void *)ReferenceDwmApiPort();
    DwmAsyncMagnSetDesktopTransform(v6, (int)&gOneDouble, 0, 0);
  }
LABEL_5:
  result = v13;
  while ( 1 )
  {
    v2 = (_DWORD *)*v2;
    if ( v2 == v13 )
      return result;
    v7 = v2 + 5;
    v8 = (_DWORD *)v2[5];
    if ( v8 != v2 + 5 )
    {
      do
      {
        v8[2] |= 0x20u;
        v9 = (int *)v8[3];
        if ( v9 != (int *)-1 )
        {
          if ( v9 )
            v14 = *v9;
          else
            v14 = 0;
          v11 = ***(_DWORD ***)(a2 + 4);
          v10 = (void *)ReferenceDwmApiPort();
          DwmAsyncMagnDestroy(v10, v11);
          v7 = v2 + 5;
        }
        v8 = (_DWORD *)*v8;
      }
      while ( v8 != v7 );
      goto LABEL_5;
    }
  }
}
