/*
 * XREFs of ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180243D80
 * Callers:
 *     ??_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z @ 0x1800EE600 (--_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802433FC (--1CDDisplaySwapChain@@MEAA@XZ.c)
 */

CDDisplaySwapChain *__fastcall CDDisplaySwapChain::`scalar deleting destructor'(CDDisplaySwapChain *this, char a2)
{
  CDDisplaySwapChain::~CDDisplaySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
