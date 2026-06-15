/*
 * XREFs of sub_18000FAA8 @ 0x18000FAA8
 * Callers:
 *     sub_180010F18 @ 0x180010F18 (sub_180010F18.c)
 *     sub_18002BAC8 @ 0x18002BAC8 (sub_18002BAC8.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_18000FAA8(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_18004F048;
  v6 = 0;
  if ( qword_18004F048 )
  {
    UserData->Ptr = qword_18004F048;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(RegHandle, a2, 0LL, 0LL, UserDataCount, UserData);
}
