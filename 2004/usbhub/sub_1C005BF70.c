/*
 * XREFs of sub_1C005BF70 @ 0x1C005BF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 sub_1C005BF70()
{
  NTSTATUS v0; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG RegHandle; // [rsp+50h] [rbp+18h] BYREF

  RegHandle = 0LL;
  DestinationString = 0LL;
  v0 = EtwRegister(&ProviderId, EnableCallback, 0LL, &RegHandle);
  if ( v0 >= 0 )
  {
    ::RegHandle = RegHandle;
    EtwSetInformation(RegHandle, EventProviderSetTraits, &word_1C0062140, 0x16u);
  }
  RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
  qword_1C006B3A0 = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  return (unsigned int)v0;
}
