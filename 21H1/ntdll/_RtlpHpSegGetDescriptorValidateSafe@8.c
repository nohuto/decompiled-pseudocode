/*
 * XREFs of _RtlpHpSegGetDescriptorValidateSafe@8 @ 0x4B37BB1F
 * Callers:
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpHeapExceptionFilter@8 @ 0x4B375DFF (_RtlpHeapExceptionFilter@8.c)
 */

unsigned int __fastcall RtlpHpSegGetDescriptorValidateSafe(int a1, int a2)
{
  int v3; // esi
  int v4; // edx

  v3 = 0;
  v4 = a2 & *(_DWORD *)a1;
  if ( (a1 ^ v4 ^ RtlpHpHeapGlobals ^ *(_DWORD *)((a2 & *(_DWORD *)a1) + 8)) == 0xA2E64EAD )
    return v4 + 16 * ((unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 4));
  return v3;
}
