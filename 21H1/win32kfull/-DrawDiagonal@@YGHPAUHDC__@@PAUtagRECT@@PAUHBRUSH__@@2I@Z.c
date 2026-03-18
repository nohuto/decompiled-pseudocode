/*
 * XREFs of ?DrawDiagonal@@YGHPAUHDC__@@PAUtagRECT@@PAUHBRUSH__@@2I@Z @ 0x1B749A
 * Callers:
 *     _DrawEdge@16 @ 0x90568 (_DrawEdge@16.c)
 * Callees:
 *     ?DrawDiagonalLine@@YGKPAUHDC__@@PAUtagRECT@@HHI@Z @ 0x1B7526 (-DrawDiagonalLine@@YGKPAUHDC__@@PAUtagRECT@@HHI@Z.c)
 */

BOOL __userpurge DrawDiagonal@<eax>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagRECT *a3,
        struct tagRECT *a4,
        HBRUSH a5,
        HBRUSH a6,
        unsigned int a7)
{
  int v10; // eax
  int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v15; // [esp+0h] [ebp-14h]
  unsigned int v16; // [esp+4h] [ebp-10h]
  HBRUSH v18; // [esp+24h] [ebp+10h]

  if ( ((unsigned __int8)a5 & 8) == 0 )
    a4 = a3;
  v10 = (unsigned __int8)a5 & 0x1F;
  if ( v10 == 19 || v10 == 28 )
    v11 = -1;
  else
    v11 = 1;
  v18 = (HBRUSH)GreSelectBrush(a2, a4);
  v12 = DrawDiagonalLine(
          (HDC)v11,
          (struct tagRECT *)((unsigned int)a5 & 0xFFFFF7FF),
          (unsigned int)a5 & 0xFFFFF7FF,
          v15,
          v16);
  if ( ((unsigned __int8)a5 & 2) != 0 )
    *a1 += (unsigned __int16)v12;
  else
    a1[2] -= (unsigned __int16)v12;
  v13 = HIWORD(v12);
  if ( ((unsigned __int8)a5 & 4) != 0 )
    a1[1] += v13;
  else
    a1[3] -= v13;
  return GreSelectBrush(a2, v18) != 0;
}
