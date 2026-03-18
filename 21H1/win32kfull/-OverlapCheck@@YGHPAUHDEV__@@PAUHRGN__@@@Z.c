/*
 * XREFs of ?OverlapCheck@@YGHPAUHDEV__@@PAUHRGN__@@@Z @ 0x1D370A
 * Callers:
 *     _DxgkEngDetectGDIPath@16 @ 0x1D42D7 (_DxgkEngDetectGDIPath@16.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QAE?AUtagSIZE@@XZ @ 0x1D37FE (-sizl@PDEVOBJ@@QAE-AUtagSIZE@@XZ.c)
 */

BOOL __fastcall OverlapCheck(int a1, void *a2)
{
  BOOL v2; // ebx
  LONG cx; // eax
  int v5; // esi
  int v6; // edi
  _DWORD *v7; // ecx
  INT v8; // eax
  HANDLE v9; // esi
  HANDLE hrgnSrc2; // [esp+18h] [ebp-10h]
  HANDLE hrgn; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h] BYREF

  v2 = 0;
  hrgnSrc2 = a2;
  v13 = a1;
  v14 = a1;
  hrgn = EngCreateRectRgn(0, 0, 0, 0);
  if ( hrgn )
  {
    cx = PDEVOBJ::sizl((PDEVOBJ *)&v14).cx;
    v5 = *(_DWORD *)(a1 + 1840);
    v6 = *(_DWORD *)(cx + 4);
    v7 = (_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v14).cx;
    v8 = v5 + v6;
    v9 = hrgn;
    if ( EngSetRectRgn(hrgn, *(_DWORD *)(v13 + 1836), *(_DWORD *)(v13 + 1840), *(_DWORD *)(v13 + 1836) + *v7, v8) )
      v2 = (unsigned int)EngCombineRgn(v9, v9, hrgnSrc2, 1) >= 2;
    EngDeleteRgn(v9);
  }
  return v2;
}
