/*
 * XREFs of _RtlLengthSidAsUnicodeString@8 @ 0x4B346760
 * Callers:
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 * Callees:
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 */

NTSTATUS __cdecl RtlLengthSidAsUnicodeString(PSID Sid, PULONG StringLength)
{
  int v3; // [esp-4h] [ebp-8h]

  if ( RtlValidSid(Sid) != 1 )
    return -1073741704;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
    v3 = 36;
  else
    v3 = 28;
  *StringLength = v3 + 22 * *((unsigned __int8 *)Sid + 1);
  return 0;
}
