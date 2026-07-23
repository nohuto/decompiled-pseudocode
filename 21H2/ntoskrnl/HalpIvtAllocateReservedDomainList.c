/*
 * XREFs of HalpIvtAllocateReservedDomainList @ 0x1404E7E88
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExtEnvAllocateMemory @ 0x1404D5330 (ExtEnvAllocateMemory.c)
 */

__int64 __fastcall HalpIvtAllocateReservedDomainList(__int64 a1, int a2, unsigned int a3)
{
  void **v5; // rsi
  unsigned int v6; // ebx
  int Memory; // ebp
  __int64 v8; // rdx
  int v9; // ecx

  v5 = (void **)(a1 + 296);
  v6 = 0;
  Memory = ExtEnvAllocateMemory(a1, 16 * a3 + 8, (__int64 *)(a1 + 296));
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
