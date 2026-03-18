/*
 * XREFs of CmpRegUtilAllocateUnicodeString @ 0x1C00BF8A8
 * Callers:
 *     CmRegUtilUcValueSetUcString @ 0x1C00BF6A0 (CmRegUtilUcValueSetUcString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRegUtilAllocateUnicodeString(_UNICODE_STRING *String, unsigned __int16 Length)
{
  wchar_t *PoolWithTag; // rax

  String->Length = 0;
  String->MaximumLength = Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x63557050u);
  String->Buffer = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC000009A : 0;
}
