/*
 * XREFs of PopAvlFindOrMakeStatsForPowerRequest @ 0x14071D27C
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x14071D224 (PopStatsCreatePowerRequest.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14023F6F0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14023F7B0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14023FA10 (RtlInsertElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopFreeUnicodeString @ 0x1406E1388 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x1406E1710 (PopUnicodeStringDeepCopy.c)
 *     PopAvlGetPowerRequestKey @ 0x14071D374 (PopAvlGetPowerRequestKey.c)
 */

char *__fastcall PopAvlFindOrMakeStatsForPowerRequest(__int64 a1)
{
  char *v2; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[16]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD Buffer[28]; // [rsp+30h] [rbp-F8h] BYREF

  NewElement[0] = 0;
  memset(Buffer, 0, 0xD8uLL);
  v2 = *(char **)(a1 + 144);
  if ( !v2 && (int)PopAvlGetPowerRequestKey(a1, &Buffer[1]) >= 0 )
  {
    v2 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
    if ( !v2 )
    {
      inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer, 0xD8u, NewElement);
      v2 = inserted;
      if ( inserted )
      {
        if ( NewElement[0] )
        {
          memset(inserted, 0, 0xD8uLL);
          if ( PopUnicodeStringDeepCopy((PUNICODE_STRING)(v2 + 8), (PCUNICODE_STRING)&Buffer[1]) < 0 )
          {
            RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
            v2 = 0LL;
          }
        }
      }
    }
  }
  PopFreeUnicodeString((__int64)&Buffer[1]);
  return v2;
}
