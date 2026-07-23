/*
 * XREFs of MiResetVirtualMemory @ 0x140243BEC
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAllowProtectionChange @ 0x14027E54C (MiAllowProtectionChange.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiResetVirtualMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // eax
  int v7; // ebx
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 48);
  v7 = a4;
  if ( (v6 & 0x100000) != 0 )
  {
    if ( (v6 & 8) != 0 && ((v6 >> 7) & 4) == 0 && (int)MiCheckSecuredVad(a4, a2, (int)a3 - (int)a2 + 1, 4, a6) < 0 )
      return 3221225550LL;
  }
  else
  {
    if ( *(_QWORD *)(**(_QWORD **)(a4 + 72) + 64LL) )
      return 3221226051LL;
    if ( ((v6 >> 7) & 4) == 0 )
      return 3221225550LL;
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) == 0
    || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0
    || (result = MiAllowProtectionChange(KeGetCurrentThread()->ApcState.Process, a1, v7, 4, a2, a3), (int)result >= 0) )
  {
    result = MiWalkVaRange(a2, a3, v7, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
