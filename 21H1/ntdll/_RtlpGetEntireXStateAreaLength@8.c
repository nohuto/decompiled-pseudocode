/*
 * XREFs of _RtlpGetEntireXStateAreaLength@8 @ 0x4B35C44C
 * Callers:
 *     _RtlGetExtendedContextLength2@16 @ 0x4B35B780 (_RtlGetExtendedContextLength2@16.c)
 *     _RtlInitializeExtendedContext2@20 @ 0x4B35B8A0 (_RtlInitializeExtendedContext2@20.c)
 * Callees:
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

unsigned int __stdcall RtlpGetEntireXStateAreaLength(__int64 a1)
{
  char v1; // cl
  unsigned int v2; // esi
  unsigned int i; // edi
  int v5; // [esp+4h] [ebp-4h]

  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    return MEMORY[0x7FFE03E8];
  v1 = 2;
  v2 = 576;
  v5 = 2;
  for ( i = 2147354124; i < 0x7FFE0704; i += 4 )
  {
    if ( (a1 & (1LL << v1)) != 0 )
    {
      if ( (MEMORY[0x7FFE05F8] & (1LL << v1)) != 0 )
        v2 = (v2 + 63) & 0xFFFFFFC0;
      v2 += *(_DWORD *)i;
    }
    v1 = ++v5;
  }
  return v2;
}
