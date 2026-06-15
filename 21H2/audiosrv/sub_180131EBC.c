/*
 * XREFs of sub_180131EBC @ 0x180131EBC
 * Callers:
 *     sub_180131F20 @ 0x180131F20 (sub_180131F20.c)
 *     sub_180132378 @ 0x180132378 (sub_180132378.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180131EBC(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_18019C408;
  v6 = 0;
  if ( qword_18019C408 )
  {
    UserData->Ptr = qword_18019C408;
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
  return EventWriteTransfer(qword_18019C400, a2, 0LL, 0LL, UserDataCount, UserData);
}
