/*
 * XREFs of ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0282ECC
 * Callers:
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C004F778 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C01050C0 (-pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027F2C8 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SINGLEREADERLOCK::vLock(SINGLEREADERLOCK *this)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(void **)this;
  if ( v2 )
  {
    KeWaitForSingleObject(v2, UserRequest, 0, 0, 0LL);
    CurrentThread = KeGetCurrentThread();
    ++*((_DWORD *)this + 4);
    *((_QWORD *)this + 1) = CurrentThread;
  }
}
