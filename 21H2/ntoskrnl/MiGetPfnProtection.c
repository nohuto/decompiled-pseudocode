/*
 * XREFs of MiGetPfnProtection @ 0x1402E9768
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x1402E96B0 (MiRevokeExecutePte.c)
 *     MiQueryLeafPte @ 0x14045C260 (MiQueryLeafPte.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x140234F14 (MiLocateCloneAddress.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x14033A4C0 (MiGetWsleProtection.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r10
  unsigned int v6; // r8d
  _KPROCESS *Process; // rcx

  LOBYTE(v2) = MiGetWsleContents(a1, a2);
  result = MiGetWsleProtection(v3, v2);
  if ( !(_DWORD)result )
  {
    v6 = (*(_DWORD *)(v5 + 16) >> 5) & 0x1F;
    if ( _bittest64((const signed __int64 *)(v5 + 40), 0x28u) || *(__int64 *)(v5 + 8) <= 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[12] )
      {
        if ( MiLocateCloneAddress((__int64)Process, *(_QWORD *)(v5 + 8) | 0x8000000000000000uLL) )
          return (unsigned int)MmMakeProtectNotWriteCopy[v6];
      }
      return v6;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[v6];
    }
  }
  return result;
}
