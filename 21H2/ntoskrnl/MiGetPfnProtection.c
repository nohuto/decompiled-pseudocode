/*
 * XREFs of MiGetPfnProtection @ 0x14025EC28
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x140374540 (MiRevokeExecutePte.c)
 *     MiQueryLeafPte @ 0x140547260 (MiQueryLeafPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiGetWsleProtection @ 0x1402E5C50 (MiGetWsleProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 result; // rax
  unsigned __int64 v7; // r8
  _KPROCESS *Process; // rcx

  LOBYTE(v4) = MiGetWsleContents(a1, a2);
  result = MiGetWsleProtection(v5, v4);
  if ( !(_DWORD)result )
  {
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a3 + 16) >> 5) & 0x1F;
    if ( (*(_QWORD *)(a3 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a3 + 8) <= 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL, v7) )
          LODWORD(v7) = MmMakeProtectNotWriteCopy[(unsigned int)v7];
      }
      return (unsigned int)v7;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)v7];
    }
  }
  return result;
}
