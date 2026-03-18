/*
 * XREFs of ??_GCDummyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1802894A0
 * Callers:
 *     ??_ECDummyRemotingSwapChain@@OBA@EAAPEAXI@Z @ 0x180108B10 (--_ECDummyRemotingSwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CDummyRemotingSwapChain@@MEAA@XZ @ 0x180289334 (--1CDummyRemotingSwapChain@@MEAA@XZ.c)
 */

CDummyRemotingSwapChain *__fastcall CDummyRemotingSwapChain::`scalar deleting destructor'(
        CDummyRemotingSwapChain *this,
        char a2)
{
  CDummyRemotingSwapChain::~CDummyRemotingSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
