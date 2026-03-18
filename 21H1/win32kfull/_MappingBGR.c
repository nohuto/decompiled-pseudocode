/*
 * XREFs of _MappingBGR @ 0xFAE72
 * Callers:
 *     _GetFixupScan @ 0x1C5128 (_GetFixupScan.c)
 * Callees:
 *     <none>
 */

char __fastcall MappingBGR(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4)
{
  int v7; // ebp
  unsigned __int8 *v8; // ebx
  unsigned int v9; // edx
  _BYTE *v10; // edi
  char result; // al

LABEL_1:
  v7 = *a4;
  v8 = a4 + 1;
  while ( 1 )
  {
    v9 = (unsigned __int16)BGR555Idx[a1[1]] - v7;
    LOBYTE(v9) = 0;
    v9 >>= 3;
    BYTE1(v9) |= 4 * ((unsigned __int16)(BGR555Idx[*a1] - v7) >> 8);
    LOBYTE(v9) = ((unsigned __int16)(BGR555Idx[a1[2]] - v7) >> 8) | v9;
    v9 *= 3;
    *(_WORD *)a1 = *(_WORD *)(a3 + v9);
    v10 = a1 + 2;
    result = *(_BYTE *)(a3 + v9 + 2);
    *v10 = result;
    a1 = v10 + 1;
    if ( !--a2 )
      return result;
    v7 = *v8++;
    if ( !v7 )
    {
      a4 = v8 - 66;
      goto LABEL_1;
    }
  }
}
