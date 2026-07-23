/*
 * XREFs of PopAvlFindOrMakeStatsForPowerRequest @ 0x1406705BC
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x140670564 (PopStatsCreatePowerRequest.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopAvlGetPowerRequestKey @ 0x1406706C4 (PopAvlGetPowerRequestKey.c)
 *     PopFreeUnicodeString @ 0x1406713A4 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x140671F50 (PopUnicodeStringDeepCopy.c)
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
          if ( (int)PopUnicodeStringDeepCopy(
                      (PUNICODE_STRING)(v2 + 8),
                      (PCUNICODE_STRING)&Buffer[1],
                      PagedPool,
                      0x54515750u) < 0 )
          {
            RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
            v2 = 0LL;
          }
        }
      }
    }
  }
  PopFreeUnicodeString(&Buffer[1]);
  return v2;
}
