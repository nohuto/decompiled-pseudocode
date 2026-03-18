/*
 * XREFs of sub_1C005CC24 @ 0x1C005CC24
 * Callers:
 *     sub_1C0041468 @ 0x1C0041468 (sub_1C0041468.c)
 * Callees:
 *     <none>
 */

bool sub_1C005CC24()
{
  bool result; // al
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"ExAllocateTimer");
  qword_1C006B380 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = 0;
  if ( qword_1C006B380 )
  {
    RtlInitUnicodeString(&DestinationString, L"ExDeleteTimer");
    qword_1C006B388 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    if ( qword_1C006B388 )
    {
      RtlInitUnicodeString(&DestinationString, L"ExSetTimer");
      qword_1C006B390 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
      if ( qword_1C006B390 )
      {
        RtlInitUnicodeString(&DestinationString, L"ExCancelTimer");
        qword_1C006B398 = (__int64)MmGetSystemRoutineAddress(&DestinationString);
        if ( qword_1C006B398 )
          return 1;
      }
    }
  }
  return result;
}
