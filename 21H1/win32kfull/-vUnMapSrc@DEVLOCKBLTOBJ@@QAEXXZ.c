/*
 * XREFs of ?vUnMapSrc@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1227
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 */

void __thiscall DEVLOCKBLTOBJ::vUnMapSrc(DEVLOCKBLTOBJ *this)
{
  DEVLOCKBLTOBJ *v1; // edx

  if ( (*((_DWORD *)this + 10) & 0x1000) != 0 && DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 64)) )
    DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(v1);
}
