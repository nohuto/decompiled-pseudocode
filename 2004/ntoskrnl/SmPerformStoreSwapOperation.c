/*
 * XREFs of SmPerformStoreSwapOperation @ 0x140310C2C
 * Callers:
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14030FF60 (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140310C74 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140706430 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     MmInSwapVirtualAddresses @ 0x140722550 (MmInSwapVirtualAddresses.c)
 */

__int64 __fastcall SmPerformStoreSwapOperation(int a1, __int64 a2)
{
  bool v2; // zf
  struct _KPROCESS *Process; // rcx

  if ( a1 == 3 )
  {
    SC_ENV::Free((PVOID)a2);
    return 0LL;
  }
  else
  {
    v2 = a1 == 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v2 )
      return MmInSwapVirtualAddresses(Process, (PVOID)a2);
    else
      return MmOutSwapVirtualAddresses(
               Process,
               *(unsigned __int64 **)(a2 + 8),
               *(unsigned int *)(a2 + 16),
               (_QWORD *)a2);
  }
}
