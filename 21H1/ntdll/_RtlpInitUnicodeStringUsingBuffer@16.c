/*
 * XREFs of _RtlpInitUnicodeStringUsingBuffer@16 @ 0x4B2D5B73
 * Callers:
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpGetCustomCultureDataFromFile@20 @ 0x4B363239 (_RtlpGetCustomCultureDataFromFile@20.c)
 * Callees:
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __userpurge RtlpInitUnicodeStringUsingBuffer@<eax>(
        const WCHAR *a1@<edx>,
        char a2@<cl>,
        int a3@<esi>,
        unsigned int a4,
        PUNICODE_STRING DestinationString)
{
  size_t v6; // [esp-8h] [ebp-10h]

  if ( a2 )
  {
    if ( RtlCreateUnicodeString(DestinationString, a1) )
      return 0;
    return -1073741801;
  }
  else
  {
    if ( a4 < 0x55 && DestinationString->MaximumLength > 2 * a4 )
    {
      HIDWORD(v6) = a3;
      LODWORD(v6) = (unsigned __int16)(2 * a4);
      memcpy(DestinationString->Buffer, a1, v6);
      DestinationString->Buffer[a4] = 0;
      DestinationString->Length = 2 * a4;
      return 0;
    }
    return -1073741789;
  }
}
