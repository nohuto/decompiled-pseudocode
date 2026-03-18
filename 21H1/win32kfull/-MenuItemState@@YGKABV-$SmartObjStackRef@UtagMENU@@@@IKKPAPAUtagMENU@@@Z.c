/*
 * XREFs of ?MenuItemState@@YGKABV?$SmartObjStackRef@UtagMENU@@@@IKKPAPAUtagMENU@@@Z @ 0xBA210
 * Callers:
 *     __CheckMenuItem@12 @ 0xB9DA2 (__CheckMenuItem@12.c)
 *     _xxxEnableMenuItem@12 @ 0xBA004 (_xxxEnableMenuItem@12.c)
 * Callees:
 *     _MNLookUpItem@16 @ 0x32010 (_MNLookUpItem@16.c)
 */

int __fastcall MenuItemState(int a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // edx
  int result; // eax

  v6 = *(_DWORD *)(a1 + 8);
  if ( !v6 )
    v6 = **(_DWORD **)a1;
  v7 = MNLookUpItem(v6, a2, a3 & 0x400, a5);
  if ( !v7 )
    return -1;
  v8 = *v7;
  v9 = *(_DWORD *)(*v7 + 4);
  result = a4 & v9;
  *(_DWORD *)(v8 + 4) = v9 ^ a4 & (a3 ^ a4 & v9);
  return result;
}
