/*
 * XREFs of ?Release@CInteraction@@UEAAKXZ @ 0x180032310
 * Callers:
 *     ?Release@CInteraction@@W7EAAKXZ @ 0x1800EDD90 (-Release@CInteraction@@W7EAAKXZ.c)
 * Callees:
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800DB494 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 */

unsigned int __fastcall CInteraction::Release(CInteraction *this)
{
  struct CInteraction::HANDLE_ENTRY *Entry; // rax

  if ( *((_DWORD *)this + 4) == 1 )
  {
    AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
    Entry = CInteraction::GetEntry(*((_DWORD *)this + 424));
    if ( Entry )
      *((_QWORD *)Entry + 1) = 0LL;
    ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  }
  return CRenderTargetBitmap::Release((CInteraction *)((char *)this + 8));
}
