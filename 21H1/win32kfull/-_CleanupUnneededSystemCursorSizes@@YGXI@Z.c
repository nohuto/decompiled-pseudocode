/*
 * XREFs of ?_CleanupUnneededSystemCursorSizes@@YGXI@Z @ 0x14318C
 * Callers:
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 * Callees:
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

void __thiscall _CleanupUnneededSystemCursorSizes(void *this)
{
  unsigned int i; // edi
  _DWORD *v3; // eax
  _DWORD *j; // esi
  int ProcessWin32Process; // eax

  for ( i = 0; i < 0x27C8; i += 536 )
  {
    v3 = *(_DWORD **)(i + _gasyscur[0] + 4);
    if ( v3 )
    {
      for ( j = (_DWORD *)v3[6]; j && (void *)j[10] != this; j = (_DWORD *)j[5] )
        ;
      if ( j )
      {
        if ( j != v3 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(_gpepCSRSS);
          FixupGlobalCursor(j, ProcessWin32Process);
          _DestroyCursor(j, 0);
        }
      }
    }
  }
}
