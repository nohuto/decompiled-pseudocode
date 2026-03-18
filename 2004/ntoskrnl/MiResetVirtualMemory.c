/*
 * XREFs of MiResetVirtualMemory @ 0x140353AC4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiAllowProtectionChange @ 0x1402FB894 (MiAllowProtectionChange.c)
 *     MiCheckSecuredVad @ 0x14062F008 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiResetVirtualMemory(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        int a5,
        char a6)
{
  unsigned int v6; // eax
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 48);
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
    || (result = MiAllowProtectionChange((__int64)KeGetCurrentThread()->ApcState.Process, a1, a4, 4, a2, a3),
        (int)result >= 0) )
  {
    result = MiWalkVaRange(a2, a3, a4, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
