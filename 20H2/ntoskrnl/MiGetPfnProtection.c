/*
 * XREFs of MiGetPfnProtection @ 0x1402D3C28
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x140374860 (MiRevokeExecutePte.c)
 *     MiQueryLeafPte @ 0x140545520 (MiQueryLeafPte.c)
 * Callees:
 *     MiGetWsleProtection @ 0x14028F860 (MiGetWsleProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 WsleContents; // al
  unsigned __int64 v5; // r9
  __int64 result; // rax
  unsigned __int64 v7; // r8
  _KPROCESS *Process; // rcx

  WsleContents = MiGetWsleContents(a1, a2);
  result = MiGetWsleProtection(v5, WsleContents);
  if ( !(_DWORD)result )
  {
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(a3 + 16) >> 5) & 0x1F;
    if ( (*(_QWORD *)(a3 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(a3 + 8) <= 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, *(_QWORD *)(a3 + 8) | 0x8000000000000000uLL) )
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
