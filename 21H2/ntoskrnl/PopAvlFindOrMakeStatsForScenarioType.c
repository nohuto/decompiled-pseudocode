/*
 * XREFs of PopAvlFindOrMakeStatsForScenarioType @ 0x140772520
 * Callers:
 *     PopStatsScenarioStateChange @ 0x1407724B0 (PopStatsScenarioStateChange.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140264810 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402648C0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140264B20 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopFreeUnicodeString @ 0x1406C17D8 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x1406C1BA0 (PopUnicodeStringDeepCopy.c)
 */

char *__fastcall PopAvlFindOrMakeStatsForScenarioType(int a1)
{
  const WCHAR *v2; // rdx
  char *v3; // rbx
  char *inserted; // rax
  BOOLEAN NewElement[8]; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD Buffer[28]; // [rsp+40h] [rbp-C0h] BYREF

  NewElement[0] = 0;
  memset(Buffer, 0, 0xD8uLL);
  DestinationString = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
      goto LABEL_4;
    v2 = MOBILE_HOTSPOT_STATS_ID;
  }
  else
  {
    v2 = AUDIO_STATS_ID;
  }
  RtlInitUnicodeString(&DestinationString, v2);
  PopUnicodeStringDeepCopy((PUNICODE_STRING)&Buffer[1], &DestinationString, PagedPool, 0x54515750u);
LABEL_4:
  v3 = (char *)RtlLookupElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
  if ( !v3 )
  {
    inserted = (char *)RtlInsertElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer, 0xD8u, NewElement);
    v3 = inserted;
    if ( inserted )
    {
      if ( NewElement[0] )
      {
        memset(inserted, 0, 0xD8uLL);
        if ( PopUnicodeStringDeepCopy((PUNICODE_STRING)(v3 + 8), (PCUNICODE_STRING)&Buffer[1], PagedPool, 0x54515750u) < 0 )
          RtlDeleteElementGenericTableAvl(&PowerRequestStatsDatabase, Buffer);
      }
    }
  }
  PopFreeUnicodeString((__int64)&Buffer[1]);
  return v3;
}
