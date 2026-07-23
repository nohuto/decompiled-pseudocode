/*
 * XREFs of HalpHsaAllocateReservedDomainList @ 0x1404E1750
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x1404E1D20 (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall HalpHsaAllocateReservedDomainList(__int64 a1, int a2, unsigned int a3)
{
  void **v5; // rsi
  unsigned int v6; // ebx
  int Memory; // ebp
  __int64 v8; // rdx
  int v9; // ecx

  v5 = (void **)(a1 + 216);
  v6 = 0;
  Memory = ExtEnvAllocateMemory(a1, 16 * a3 + 8, (__int64 *)(a1 + 216));
  if ( Memory >= 0 )
  {
    memset(*v5, 0, 16LL * a3 + 8);
    *(_DWORD *)*v5 = a3;
    if ( a3 )
    {
      v8 = 0LL;
      do
      {
        v9 = v6 + a2;
        ++v6;
        v8 += 16LL;
        *(_DWORD *)((char *)*v5 + v8 - 8) = v9;
      }
      while ( v6 < a3 );
    }
  }
  return (unsigned int)Memory;
}
