/*
 * XREFs of SmpRecordNewPageFile @ 0x1400085D8
 * Callers:
 *     SmpCreatePagingFile @ 0x140008554 (SmpCreatePagingFile.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x1400092F0 (SmpDeallocSavedRegistryEntry.c)
 */

void __fastcall SmpRecordNewPageFile(PCUNICODE_STRING String2)
{
  UNICODE_STRING *v1; // rbx
  LONG v3; // eax
  PVOID *v4; // rdi
  PVOID *Buffer; // rax

  v1 = (UNICODE_STRING *)SmpExistingPageFilesList;
  if ( SmpExistingPageFilesList != &SmpExistingPageFilesList )
  {
    while ( 1 )
    {
      v3 = RtlCompareUnicodeString(v1 + 1, String2, 1u);
      v4 = *(PVOID **)&v1->Length;
      if ( !v3 )
      {
        if ( v4[1] != v1 || (Buffer = (PVOID *)v1->Buffer, *Buffer != v1) )
          __fastfail(3u);
        *Buffer = v4;
        v4[1] = Buffer;
        SmpDeallocSavedRegistryEntry(v1);
      }
      if ( v4 == &SmpExistingPageFilesList )
        break;
      v1 = (UNICODE_STRING *)v4;
    }
  }
}
