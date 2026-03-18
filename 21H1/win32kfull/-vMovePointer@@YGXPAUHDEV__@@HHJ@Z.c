/*
 * XREFs of ?vMovePointer@@YGXPAUHDEV__@@HHJ@Z @ 0x7BC92
 * Callers:
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 *     ?GreHidePointerInternal@@YGXPAUHDEV__@@@Z @ 0xAEFD4 (-GreHidePointerInternal@@YGXPAUHDEV__@@@Z.c)
 * Callees:
 *     _EngpMovePointer@20 @ 0x1CDDEA (_EngpMovePointer@20.c)
 */

void __userpurge vMovePointer(int a1@<edx>, int a2@<ecx>, HDEV a3, int a4, int a5, int a6)
{
  int v9; // ecx
  int v10; // eax
  HDEV v11; // eax
  void (__stdcall *v12)(HDEV, int, HDEV, int); // ecx
  int v13; // ecx
  void (__stdcall *v14)(HDEV, int, char *, _DWORD); // edx
  void (__stdcall *v15)(HDEV, int, HDEV, _DWORD); // ecx
  HDEV v16; // [esp+18h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 44) == a1 && *(HDEV *)(a2 + 48) == a3 && (*(_DWORD *)(a2 + 24) & 0x100000) == 0 )
    return;
  v9 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 44) = a1;
  *(_DWORD *)(a2 + 48) = a3;
  if ( (v9 & 0x400) != 0 )
    return;
  v10 = *(_DWORD *)(a2 + 1820);
  if ( !v10 )
    return;
  v11 = (HDEV)(v10 + 16);
  v16 = v11;
  if ( (v9 & 2) != 0 )
  {
    v12 = *(void (__stdcall **)(HDEV, int, HDEV, int))(a2 + 2268);
    if ( v12 )
    {
      v12(v11, a1, a3, a4);
    }
    else
    {
      v15 = *(void (__stdcall **)(HDEV, int, HDEV, _DWORD))(a2 + 2020);
      if ( !v15 )
        goto LABEL_11;
      v15(v11, a1, a3, 0);
    }
    v11 = v16;
  }
LABEL_11:
  if ( (*(_BYTE *)(a2 + 24) & 4) != 0 )
    EngpMovePointer(v11, a1, a3, a4 & 0xFFFFFFF4, a4 & 0xFFFFFFF4);
  if ( (*(_DWORD *)(a2 + 1120) & 0x10000) != 0 && a3 != (HDEV)-1 && a1 < *((_DWORD *)v16 + 4) )
  {
    v13 = *((_DWORD *)v16 + 5);
    if ( (int)a3 < v13 )
    {
      v14 = *(void (__stdcall **)(HDEV, int, char *, _DWORD))(a2 + 2020);
      if ( v14 )
        v14(v16, a1, (char *)a3 - v13, 0);
    }
  }
}
