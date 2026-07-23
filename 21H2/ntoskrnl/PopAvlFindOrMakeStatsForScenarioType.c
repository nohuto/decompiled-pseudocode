/*
 * XREFs of PopAvlFindOrMakeStatsForScenarioType @ 0x1407726E0
 * Callers:
 *     PopStatsScenarioStateChange @ 0x140772670 (PopStatsScenarioStateChange.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1402528A0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopFreeUnicodeString @ 0x1406713A4 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x140671F50 (PopUnicodeStringDeepCopy.c)
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
