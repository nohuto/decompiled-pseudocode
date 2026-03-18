/*
 * XREFs of ResFwFindMessage @ 0x1409F17C0
 * Callers:
 *     BcpFindMessage @ 0x140A9433C (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140712910 (RtlFindMessage.c)
 */

unsigned __int16 *__fastcall ResFwFindMessage(unsigned int a1)
{
  unsigned __int16 *v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( qword_140C133C8
    && *(_QWORD *)qword_140C133C8
    && (int)RtlFindMessage(*(_QWORD *)qword_140C133C8, 0xBu, 0, a1, &v2) >= 0
    && (v2[1] & 1) != 0 )
  {
    return v2 + 2;
  }
  else
  {
    return 0LL;
  }
}
