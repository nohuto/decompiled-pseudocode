/*
 * XREFs of ?vUnMap@DEVLOCKBLTOBJ@@QAEXXZ @ 0xAD81A
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z @ 0x1D48D3 (-vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z.c)
 * Callees:
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A96A (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ @ 0x975C2 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QAEHXZ.c)
 */

void __thiscall DEVLOCKBLTOBJ::vUnMap(DEVLOCKBLTOBJ *this)
{
  signed __int32 v2; // [esp+4h] [ebp-4h] BYREF

  if ( (*((_DWORD *)this + 10) & 0x8000) != 0 )
  {
    if ( DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 48)) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    v2 = 0;
    _InterlockedOr(&v2, 0);
    if ( DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 64)) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
  }
  else
  {
    if ( DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 64)) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    v2 = 0;
    _InterlockedOr(&v2, 0);
    if ( DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 48)) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
  }
}
