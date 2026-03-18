/*
 * XREFs of PopAvlFindOrMakeStatsForPowerRequest @ 0x14064DA1C
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x14064D9C4 (PopStatsCreatePowerRequest.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140201DA0 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x140202510 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopAvlGetPowerRequestKey @ 0x14064DB14 (PopAvlGetPowerRequestKey.c)
 *     PopFreeUnicodeString @ 0x14064EE54 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x14064F06C (PopUnicodeStringDeepCopy.c)
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
          if ( (int)PopUnicodeStringDeepCopy((PUNICODE_STRING)(v2 + 8), (PCUNICODE_STRING)&Buffer[1]) < 0 )
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
