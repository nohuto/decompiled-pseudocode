/*
 * XREFs of ?FillTriangle@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@I@Z @ 0x1B77F8
 * Callers:
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 * Callees:
 *     ?DrawDiagonalLine@@YGKPAUHDC__@@PAUtagRECT@@HHI@Z @ 0x1B7526 (-DrawDiagonalLine@@YGKPAUHDC__@@PAUtagRECT@@HHI@Z.c)
 */

BOOL __userpurge FillTriangle@<eax>(
        ERECTL *a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        struct tagRECT *a4,
        HBRUSH a5,
        unsigned int a6)
{
  int v6; // eax
  int v7; // ebx
  int v8; // esi
  struct tagRECT *v9; // ecx
  int v11; // [esp+0h] [ebp-10h]
  unsigned int v12; // [esp+4h] [ebp-Ch]

  v6 = (unsigned __int8)a4 & 0x1F;
  if ( v6 == 19 || v6 == 28 )
    v7 = -1;
  else
    v7 = 1;
  v8 = GreSelectBrush(a2, a3);
  DrawDiagonalLine(a1, a2, (HDC)v7, v9, (__int16)a4, v11, v12);
  return GreSelectBrush(a2, v8) != 0;
}
