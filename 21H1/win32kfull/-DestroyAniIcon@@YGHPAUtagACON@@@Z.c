/*
 * XREFs of ?DestroyAniIcon@@YGHPAUtagACON@@@Z @ 0xE6B34
 * Callers:
 *     ?CleanupCursorObject@@YGXPAUtagCURSOR@@@Z @ 0x787CC (-CleanupCursorObject@@YGXPAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

int __thiscall DestroyAniIcon(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax

  v2 = this[14];
  if ( v2 )
  {
    v3 = 0;
    if ( (int)this[12] > 0 )
    {
      do
      {
        v4 = (_DWORD *)HMAssignmentUnlock(this[14] + 4 * v3);
        if ( v4 )
          _DestroyCursor(v4, 0);
        ++v3;
      }
      while ( v3 < this[12] );
      v2 = this[14];
    }
    Win32FreePool(v2);
  }
  return 1;
}
