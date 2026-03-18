/*
 * XREFs of ?CreateScaledWindowShadowFromDIB@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@J@Z @ 0x19C88E
 * Callers:
 *     ?GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z @ 0x19CF18 (-GenerateWindowShadow@@YGPAUHBITMAP__@@PAUtagWND@@PAUHDC__@@@Z.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 */

int __userpurge CreateScaledWindowShadowFromDIB@<eax>(HDC a1@<edx>, int a2@<ecx>, struct tagWND *a3, HDC a4, int a5)
{
  HDC DCEx; // ecx
  int *v7; // esi
  int CompatibleBitmapInternal; // ebx
  HDC CompatibleDC; // eax
  HDC v10; // esi
  int v11; // edi
  int v12; // esi
  int v14; // [esp+Ch] [ebp-28h]
  int v15; // [esp+10h] [ebp-24h]
  int v16; // [esp+1Ch] [ebp-18h]
  int v17; // [esp+20h] [ebp-14h]
  HDC v18; // [esp+24h] [ebp-10h]
  HDC v19; // [esp+24h] [ebp-10h]

  DCEx = (HDC)_GetDCEx(a2, 0, 3);
  v18 = DCEx;
  if ( !DCEx )
    return 0;
  v7 = (int *)(*(_DWORD *)(a2 + 20) + 52);
  v14 = *v7++;
  v15 = *v7++;
  v17 = v7[1] - v15 + 5;
  v16 = *v7 - v14 + 5;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(DCEx, v16, v17, 0, 0, 0);
  _ReleaseDC(v18);
  if ( !CompatibleBitmapInternal )
    return 0;
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
  v10 = CompatibleDC;
  v19 = CompatibleDC;
  if ( !CompatibleDC
    || (v11 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal),
        v12 = GreStretchBltInternal(v10, 0, 0, v16, v17, a1, 0, 0, (_DWORD)a3 * v16, (_DWORD)a3 * v17, 13369376, 0, 0),
        GreSelectBitmap(v19, v11),
        GreDeleteDC(v19),
        !v12) )
  {
    GreDeleteObject(CompatibleBitmapInternal);
    return 0;
  }
  return CompatibleBitmapInternal;
}
