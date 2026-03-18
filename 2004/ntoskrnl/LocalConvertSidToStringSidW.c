/*
 * XREFs of LocalConvertSidToStringSidW @ 0x140641EE8
 * Callers:
 *     SeConvertSidToStringSid @ 0x140592B40 (SeConvertSidToStringSid.c)
 *     LocalConvertAclToString @ 0x140641F7C (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x140922AE8 (LocalGetStringForSid.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1402722F8 (RtlStringCbCopyNW.c)
 *     SddlpAlloc @ 0x140642A7C (SddlpAlloc.c)
 *     RtlConvertSidToUnicodeString @ 0x140642AD0 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 */

NTSTATUS __fastcall LocalConvertSidToStringSidW(PSID Sid, wchar_t **a2)
{
  NTSTATUS result; // eax
  __int64 Length; // rdi
  wchar_t *v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  if ( !Sid || !a2 )
    return -1073741811;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    Length = UnicodeString.Length;
    v5 = (wchar_t *)SddlpAlloc(UnicodeString.Length + 2LL);
    *a2 = v5;
    if ( v5 )
    {
      result = RtlStringCbCopyNW(v5, Length + 2, UnicodeString.Buffer, (unsigned int)Length);
      if ( result >= 0 )
      {
        RtlFreeAnsiString(&UnicodeString);
        return 0;
      }
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      return -1073741801;
    }
  }
  return result;
}
