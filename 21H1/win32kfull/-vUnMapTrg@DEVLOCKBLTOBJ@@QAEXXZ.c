/*
 * XREFs of ?vUnMapTrg@DEVLOCKBLTOBJ@@QAEXXZ @ 0x1D1246
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z @ 0x5A622 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     ?bValid@DLODCOBJ@@QAE_NXZ @ 0x5A95C (-bValid@DLODCOBJ@@QAE_NXZ.c)
 */

void __thiscall DEVLOCKBLTOBJ::vUnMapTrg(DEVLOCKBLTOBJ *this)
{
  DEVLOCKBLTOBJ *v1; // edx

  if ( (*((_DWORD *)this + 10) & 0x1000) != 0 && DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 48)) )
    DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(v1);
}
