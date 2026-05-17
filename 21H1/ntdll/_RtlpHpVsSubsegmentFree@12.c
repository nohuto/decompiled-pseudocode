/*
 * XREFs of _RtlpHpVsSubsegmentFree@12 @ 0x4B37FE9A
 * Callers:
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 *     _RtlpHpVsContextFreeInternal@20 @ 0x4B37F546 (_RtlpHpVsContextFreeInternal@20.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __fastcall RtlpHpVsSubsegmentFree(int a1, int a2, int a3)
{
  return ((int (__thiscall *)(int, int, int, int, int))(a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 136)))(
           a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 136),
           a1 ^ *(_DWORD *)(a1 + 128),
           a2,
           8 * *(unsigned __int16 *)(a2 + 20) + 24,
           a3);
}
