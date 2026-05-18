/*
 * XREFs of sub_180002A58 @ 0x180002A58
 * Callers:
 *     sub_180001000 @ 0x180001000 (sub_180001000.c)
 *     sub_180001174 @ 0x180001174 (sub_180001174.c)
 *     sub_180001318 @ 0x180001318 (sub_180001318.c)
 *     sub_180001410 @ 0x180001410 (sub_180001410.c)
 *     sub_18000154C @ 0x18000154C (sub_18000154C.c)
 *     sub_180001648 @ 0x180001648 (sub_180001648.c)
 *     sub_1800017D8 @ 0x1800017D8 (sub_1800017D8.c)
 *     sub_180001AAC @ 0x180001AAC (sub_180001AAC.c)
 *     sub_180001C54 @ 0x180001C54 (sub_180001C54.c)
 *     sub_180001EDC @ 0x180001EDC (sub_180001EDC.c)
 *     sub_180002030 @ 0x180002030 (sub_180002030.c)
 *     sub_18000239C @ 0x18000239C (sub_18000239C.c)
 *     sub_1800024F0 @ 0x1800024F0 (sub_1800024F0.c)
 *     sub_180002668 @ 0x180002668 (sub_180002668.c)
 *     sub_180002B08 @ 0x180002B08 (sub_180002B08.c)
 *     sub_180002C58 @ 0x180002C58 (sub_180002C58.c)
 *     sub_180002D8C @ 0x180002D8C (sub_180002D8C.c)
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180002A58(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONGLONG v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-20h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v6;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData[1].Ptr = (ULONGLONG)v7;
  UserData->Reserved = 2;
  UserData[1].Size = *v7;
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
