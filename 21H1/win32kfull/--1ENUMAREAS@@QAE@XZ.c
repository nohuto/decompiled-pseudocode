/*
 * XREFs of ??1ENUMAREAS@@QAE@XZ @ 0xE5C28
 * Callers:
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     ?bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DE451 (-bSpTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E015A (-vSpBigUnderlayCopy@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1E28CD (-vSpUpdateLockedScreenAreas@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     _vSpUnTearDownSprites@12 @ 0x1E3F3E (_vSpUnTearDownSprites@12.c)
 * Callees:
 *     ?vUnlock@SINGLEREADERLOCK@@QAEXXZ @ 0x1E34D8 (-vUnlock@SINGLEREADERLOCK@@QAEXXZ.c)
 */

void __thiscall ENUMAREAS::~ENUMAREAS(ENUMAREAS *this)
{
  _DWORD *v2; // edi
  _DWORD *i; // esi

  v2 = (_DWORD *)*((_DWORD *)this + 17);
  for ( i = (_DWORD *)v2[176]; i; i = (_DWORD *)i[5] )
  {
    if ( i[11] < *((_DWORD *)this + 7)
      && i[12] < *((_DWORD *)this + 8)
      && i[13] > *((_DWORD *)this + 5)
      && i[14] > *((_DWORD *)this + 6) )
    {
      SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(i + 45));
    }
    v2 = (_DWORD *)*((_DWORD *)this + 17);
    if ( i == (_DWORD *)v2[177] )
      break;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem", v2[22]);
  GreReleaseSemaphoreInternal(v2[22]);
}
