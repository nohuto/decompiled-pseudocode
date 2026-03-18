/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QAEXXZ @ 0xADB6A
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z @ 0x1D48D3 (-vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z.c)
 * Callees:
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z @ 0x5FE10 (-GreUpdateSpriteDevLockEnd@@YGHAAVXDCOBJ@@H@Z.c)
 */

void __thiscall DEVLOCKBLTOBJ::vFlushSpriteUpdates(DEVLOCKBLTOBJ *this)
{
  int v1; // edx
  struct tagPOINT ***v2; // ecx
  int v3; // edx
  struct tagPOINT **v4; // eax

  if ( DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 48)) )
  {
    v3 = *(_DWORD *)(v1 + 40);
    if ( (v3 & 0x1000) != 0 )
    {
      v4 = *v2;
      if ( ((unsigned int)(*v2)[6] & 0x4000) != 0 )
      {
        if ( v4[122] )
        {
          if ( v4[124] )
            GreUpdateSpriteDevLockEnd(v2, (struct tagMINIWINDOWINFO *)(v3 & 0x400000));
        }
      }
    }
  }
}
