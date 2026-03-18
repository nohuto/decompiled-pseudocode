/*
 * XREFs of _IsDpiBoundaryBetweenWindows@8 @ 0x2B03C
 * Callers:
 *     _BuildWindowListWithDpiBoundaryInfo@16 @ 0x2AC94 (_BuildWindowListWithDpiBoundaryInfo@16.c)
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsDpiBoundaryBetweenWindows(int a1, int a2)
{
  int v2; // esi
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // edx
  int v8; // eax

  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(v2 + 164) != *(_DWORD *)(v3 + 164) )
    return (*(_DWORD *)(v2 + 184) & 0xF) != 2 || (*(_DWORD *)(v3 + 184) & 0xF) != 2;
  v4 = *(_DWORD *)(v2 + 184);
  v5 = *(_DWORD *)(v3 + 184);
  if ( (((v5 >> 8) ^ (v4 >> 8)) & 0x1FF) != 0 )
    return 1;
  v6 = 0;
  v7 = (v4 & 0xF) == 2 && (v4 & 0x20000000) != 0;
  v8 = (v5 & 0xF) == 2 && (v5 & 0x20000000) != 0;
  if ( v7 != v8 )
    return 1;
  return v6;
}
