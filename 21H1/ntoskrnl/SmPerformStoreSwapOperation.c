/*
 * XREFs of SmPerformStoreSwapOperation @ 0x1402D10A4
 * Callers:
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402CDD1C (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402D0C30 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MmOutSwapVirtualAddresses @ 0x1402D10EC (MmOutSwapVirtualAddresses.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     MmInSwapVirtualAddresses @ 0x140720690 (MmInSwapVirtualAddresses.c)
 */

__int64 __fastcall SmPerformStoreSwapOperation(int a1, void *a2)
{
  bool v2; // zf
  struct _KPROCESS *Process; // rcx

  if ( a1 == 3 )
  {
    SC_ENV::Free(a2);
    return 0LL;
  }
  else
  {
    v2 = a1 == 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v2 )
      return MmInSwapVirtualAddresses(Process, a2);
    else
      return MmOutSwapVirtualAddresses(Process);
  }
}
