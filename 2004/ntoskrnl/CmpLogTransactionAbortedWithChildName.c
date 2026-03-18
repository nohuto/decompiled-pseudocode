/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x14070FBA0
 * Callers:
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14065320C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpLogTransactionAborted @ 0x14087182C (CmpLogTransactionAborted.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCat @ 0x140203400 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x140203570 (RtlUnicodeStringCopy.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402036B8 (CmpFreeTransientPoolWithTag.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCatString @ 0x1403C123C (RtlUnicodeStringCatString.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140765C58 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpLogTransactionAbortedByName @ 0x14087184C (CmpLogTransactionAbortedByName.c)
 */

void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  wchar_t *Buffer; // rbx
  int v9; // eax
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  UNICODE_STRING *v12; // rdi
  unsigned __int64 v13; // r8
  PCUNICODE_STRING p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+68h] [rbp+38h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || (unsigned int)dword_140C02130 <= 4 || !tlgKeywordOn((__int64)&dword_140C02130, 1LL) )
  {
    Buffer = DestinationString.Buffer;
    goto LABEL_3;
  }
  v9 = CmpConstructNameFromKcbNameBlocks(a1, &SourceString);
  v12 = (UNICODE_STRING *)SourceString;
  if ( v9 < 0 )
    goto LABEL_14;
  if ( !a2 )
  {
    p_DestinationString = SourceString;
LABEL_13:
    CmpLogTransactionAbortedByName(p_DestinationString, a3, v10, a5);
    goto LABEL_14;
  }
  v13 = SourceString->Length + 2LL + a2->Length;
  if ( v13 <= 0xFFFF )
  {
    DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
    DestinationString.Buffer = (wchar_t *)CmpAllocateTransientPoolWithTag(
                                            PagedPool,
                                            (unsigned __int16)v13,
                                            0x624E4D43u,
                                            v11);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      goto LABEL_15;
    RtlUnicodeStringCopy(&DestinationString, v12);
    RtlUnicodeStringCatString(&DestinationString, L"\\");
    RtlUnicodeStringCat(&DestinationString, a2);
    p_DestinationString = &DestinationString;
    goto LABEL_13;
  }
LABEL_14:
  Buffer = DestinationString.Buffer;
LABEL_15:
  if ( v12 )
    CmpFreeTransientPoolWithTag(v12, 0x624E4D43u);
LABEL_3:
  if ( Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)Buffer);
}
