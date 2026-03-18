/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0272E6C
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0277950 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A5C40 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  HDC **v2; // rcx
  HDC *v3; // r8
  int v4; // edx

  v2 = (HDC **)((char *)this + 120);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *((_BYTE *)v2 + 17) )
    {
      v4 = *((_DWORD *)this + 28);
      if ( (v4 & 0x1000) != 0 && (*((_DWORD *)v3 + 9) & 0x4000) != 0 && v3[59] )
      {
        if ( *((_DWORD *)v3 + 122) )
          GreUpdateSpriteDevLockEnd(v2, v4 & 0x400000);
      }
    }
  }
}
