/*
 * XREFs of ResFwFindMessage @ 0x1409F17C0
 * Callers:
 *     BcpFindMessage @ 0x140A94BB4 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x1406FC510 (RtlFindMessage.c)
 */

BYTE *__fastcall ResFwFindMessage(ULONG MessageId)
{
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+48h] [rbp+10h] BYREF

  MessageEntry = 0LL;
  if ( qword_140C13388
    && *(_QWORD *)qword_140C13388
    && RtlFindMessage(*(PVOID *)qword_140C13388, 0xBu, 0, MessageId, &MessageEntry) >= 0
    && (MessageEntry->Flags & 1) != 0 )
  {
    return MessageEntry->Text;
  }
  else
  {
    return 0LL;
  }
}
