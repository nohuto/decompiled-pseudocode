/*
 * XREFs of _MNDrawEdge@16 @ 0x1A9824
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 * Callees:
 *     ?DrawOutline@@YGXPAUHDC__@@HHHHHPAUHBRUSH__@@@Z @ 0x1A8E86 (-DrawOutline@@YGXPAUHDC__@@HHHHHPAUHBRUSH__@@@Z.c)
 */

void __fastcall MNDrawEdge(int a1, HDC a2, _DWORD *a3, int a4)
{
  int v6; // ebx
  int v7; // eax
  int v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+0h] [ebp-10h]
  HBRUSH v10; // [esp+4h] [ebp-Ch]
  HBRUSH v11; // [esp+4h] [ebp-Ch]
  int v13; // [esp+18h] [ebp+8h]

  v6 = a3[2] - *a3;
  v13 = a3[3] - a3[1];
  DrawOutline(0, a2, 0, v6, v13, 1, *(_DWORD *)(_gpsi + 4356), v8, v10);
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 12);
  if ( !v7 )
    v7 = *(_DWORD *)(_gpsi + 4308);
  DrawOutline(1, a2, (HDC)1, v6 - 2, v13 - 2, 2, v7, v9, v11);
  if ( a4 == 0x2000 )
  {
    *a3 += 3;
    a3[2] -= 3;
    a3[1] += 3;
    a3[3] -= 3;
  }
}
