/*
 * XREFs of _CleanupIAMAccess@4 @ 0xAC54A
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _FreeDesktop@4 @ 0x821E8 (_FreeDesktop@4.c)
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     _xxxSetShellWindow@8 @ 0xE0F54 (_xxxSetShellWindow@8.c)
 * Callees:
 *     ?CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z @ 0xAC5A0 (-CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z.c)
 */

void __stdcall CleanupIAMAccess(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // esi
  int i; // esi
  int j; // edi
  struct _LIST_ENTRY *v4; // eax
  struct _LIST_ENTRY *Blink; // ecx
  struct tagDESKTOP *v6; // [esp+0h] [ebp-Ch]

  Flink = gIAMThreadList.Flink;
  while ( Flink != &gIAMThreadList )
  {
    v4 = Flink;
    Flink = Flink->Flink;
    if ( !a1 || v4[1].Blink == a1 )
    {
      if ( Flink->Blink != v4 || (Blink = v4->Blink, Blink->Flink != v4) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      Win32FreePool(v4);
    }
  }
  if ( a1 )
  {
    CleanupShellWindowManagement(v6);
  }
  else
  {
    for ( i = _grpWinStaList; i; i = *(_DWORD *)(i + 4) )
    {
      for ( j = *(_DWORD *)(i + 8); j; j = *(_DWORD *)(j + 16) )
        CleanupShellWindowManagement(v6);
    }
  }
}
