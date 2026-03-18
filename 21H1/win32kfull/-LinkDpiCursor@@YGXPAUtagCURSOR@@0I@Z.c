/*
 * XREFs of ?LinkDpiCursor@@YGXPAUtagCURSOR@@0I@Z @ 0x14310B
 * Callers:
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 *     _NtUserLinkDpiCursor@12 @ 0x165CC9 (_NtUserLinkDpiCursor@12.c)
 * Callees:
 *     <none>
 */

void __userpurge LinkDpiCursor(int a1@<edx>, int a2@<ecx>, struct tagCURSOR *a3, struct tagCURSOR *a4, unsigned int a5)
{
  bool v5; // zf
  int i; // ecx
  int v7; // eax

  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 20) = a1;
  v5 = (*(_BYTE *)(a1 + 44) & 8) == 0;
  *(_DWORD *)(a1 + 40) = a3;
  if ( !v5 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 48); *(_DWORD *)(v7 + 40) = a3 )
      v7 = *(_DWORD *)(*(_DWORD *)(a1 + 56) + 4 * i++);
  }
}
