/*
 * XREFs of _RtlGetExtendedContextLength@8 @ 0x4B35B830
 * Callers:
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 * Callees:
 *     _RtlGetExtendedContextLength2@16 @ 0x4B35B780 (_RtlGetExtendedContextLength2@16.c)
 *     _RtlpValidateContextFlags@8 @ 0x4B35C543 (_RtlpValidateContextFlags@8.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  int v3; // eax
  int v4; // ecx
  _BYTE v5[4]; // [esp+0h] [ebp-4h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, v5);
  if ( result >= 0 )
  {
    v3 = 0;
    v4 = 0;
    if ( (v5[0] & 2) != 0 )
    {
      v3 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
      v4 = MEMORY[0x7FFE070C] | MEMORY[0x7FFE03DC];
    }
    return RtlGetExtendedContextLength2(ContextFlags, ContextLength, __PAIR64__(v4, v3));
  }
  return result;
}
