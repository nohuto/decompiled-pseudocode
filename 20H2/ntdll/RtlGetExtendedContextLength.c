/*
 * XREFs of RtlGetExtendedContextLength @ 0x180051C00
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18011677C (PsspCaptureThreadInformation.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x180051DB0 (RtlGetExtendedContextLength2.c)
 *     RtlpValidateContextFlags @ 0x18005212C (RtlpValidateContextFlags.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  ULONG v3; // r10d
  ULONG *v4; // r11
  ULONG64 v5; // r8
  char v6; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpValidateContextFlags(ContextFlags, &v6);
  v5 = 0LL;
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v5 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength2(v3, v4, v5);
  }
  return result;
}
