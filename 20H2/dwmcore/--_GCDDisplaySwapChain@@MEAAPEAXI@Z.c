/*
 * XREFs of ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x1802403C0
 * Callers:
 *     ??_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z @ 0x1800F11E0 (--_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18023FA3C (--1CDDisplaySwapChain@@MEAA@XZ.c)
 */

CDDisplaySwapChain *__fastcall CDDisplaySwapChain::`scalar deleting destructor'(CDDisplaySwapChain *this, char a2)
{
  CDDisplaySwapChain::~CDDisplaySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
