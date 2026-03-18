/*
 * XREFs of ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x180241350
 * Callers:
 *     ??_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z @ 0x1800F1590 (--_ECDDisplaySwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802409CC (--1CDDisplaySwapChain@@MEAA@XZ.c)
 */

CDDisplaySwapChain *__fastcall CDDisplaySwapChain::`scalar deleting destructor'(CDDisplaySwapChain *this, char a2)
{
  CDDisplaySwapChain::~CDDisplaySwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
