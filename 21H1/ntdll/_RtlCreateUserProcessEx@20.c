/*
 * XREFs of _RtlCreateUserProcessEx@20 @ 0x4B33FC60
 * Callers:
 *     _RtlCreateUserProcess@40 @ 0x4B33FC00 (_RtlCreateUserProcess@40.c)
 * Callees:
 *     _RtlNormalizeProcessParams@4 @ 0x4B33FCE0 (_RtlNormalizeProcessParams@4.c)
 *     _RtlpCreateUserProcess@24 @ 0x4B342119 (_RtlpCreateUserProcess@24.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PRTL_USER_PROCESS_PARAMETERS v5; // eax
  ULONG v6; // ecx

  if ( !NtImagePathName )
    return -1073741811;
  if ( !ProcessParameters )
    return -1073741811;
  v5 = RtlNormalizeProcessParams(ProcessParameters);
  if ( !v5 )
    return -1073741811;
  v6 = 0;
  if ( InheritHandles )
    v6 = 4;
  else
    v5->CurrentDirectory.Handle = 0;
  if ( (v5->Flags & 0x40000) != 0 )
    v6 |= 0x80u;
  if ( (v5->Flags & 0x400000) != 0 )
    v6 |= 0x40u;
  if ( (v5->Flags & 0x800000) != 0 )
    v6 |= 0x40000u;
  return RtlpCreateUserProcess(v6, 1u, (int)ProcessExtendedParameters, ProcessInformation);
}
