/*
 * XREFs of _RtlpHpLfhBucketAllocateSlot@12 @ 0x4B376049
 * Callers:
 *     _RtlpHpLfhBucketUpdateAffinityMapping@8 @ 0x4B37622D (_RtlpHpLfhBucketUpdateAffinityMapping@8.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpHpLfhOwnerInitialize@16 @ 0x4B376895 (_RtlpHpLfhOwnerInitialize@16.c)
 */

void *__fastcall RtlpHpLfhBucketAllocateSlot(unsigned int a1, int a2, int a3)
{
  void *v3; // esi

  v3 = (void *)((int (__thiscall *)(unsigned int, _DWORD, unsigned int))(a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 20)))(
                 a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 20),
                 *(_DWORD *)a1,
                 ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 1) << 6);
  if ( v3 )
  {
    memset(v3, 0, 0x20u);
    RtlpHpLfhOwnerInitialize(a3, 0);
  }
  return v3;
}
