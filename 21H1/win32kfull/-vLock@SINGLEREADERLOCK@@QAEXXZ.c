/*
 * XREFs of ?vLock@SINGLEREADERLOCK@@QAEXXZ @ 0x1DFBCD
 * Callers:
 *     ??0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z @ 0xE5CD8 (--0ENUMAREAS@@QAE@PAU_SPRITESTATE@@PAU_RECTL@@K1@Z.c)
 *     ?pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z @ 0xEA5B4 (-pSpFindInZ@@YIPAVSPRITE@@PAV1@PAU_RECTL@@@Z.c)
 *     ?GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z @ 0x1DAB6D (-GdiMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SINGLEREADERLOCK::vLock(PVOID *this)
{
  PKTHREAD CurrentThread; // eax

  if ( *this )
  {
    KeWaitForSingleObject(*this, UserRequest, 0, 0, 0);
    CurrentThread = KeGetCurrentThread();
    this[2] = (char *)this[2] + 1;
    this[1] = CurrentThread;
  }
}
