/*
 * XREFs of ??_GCLegacyRemotingSwapChain@@MEAAPEAXI@Z @ 0x1800E0180
 * Callers:
 *     ??_ECLegacyRemotingSwapChain@@OBA@EAAPEAXI@Z @ 0x1800F2970 (--_ECLegacyRemotingSwapChain@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CLegacyRemotingSwapChain@@MEAA@XZ @ 0x1800E01BC (--1CLegacyRemotingSwapChain@@MEAA@XZ.c)
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
