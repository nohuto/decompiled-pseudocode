/*
 * XREFs of ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1800E03F0
 * Callers:
 *     ??_ECLegacyRemotingSwapChain@@OBA@EAAPEAXI@Z @ 0x1800F25C0 (--_ECLegacyRemotingSwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800E042C (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
 */

CLegacyRemotingSwapChain *__fastcall CLegacyRemotingSwapChain::`scalar deleting destructor'(
        CLegacyRemotingSwapChain *this,
        char a2)
{
  CLegacyRemotingSwapChain::~CLegacyRemotingSwapChain(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
