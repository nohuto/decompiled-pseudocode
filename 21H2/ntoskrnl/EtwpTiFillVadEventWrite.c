/*
 * XREFs of EtwpTiFillVadEventWrite @ 0x14024B1B4
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140244288 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x14061A0D0 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpTiFillVad @ 0x14024B2E8 (EtwpTiFillVad.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 */

NTSTATUS __fastcall EtwpTiFillVadEventWrite(
        PEVENT_DATA_DESCRIPTOR UserData,
        ULONG UserDataCount,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        PCEVENT_DESCRIPTOR EventDescriptor)
{
  unsigned int v7; // r11d
  int v12; // r9d
  struct _EVENT_DATA_DESCRIPTOR *v14; // rax

  v7 = 0;
  if ( a6 )
  {
    v12 = a5;
    do
    {
      if ( a3 && _bittest(&v12, v7) )
      {
        UserDataCount += EtwpTiFillVad(&UserData[UserDataCount], a4 + ((unsigned __int64)v7 << 6));
      }
      else
      {
        v14 = &UserData[UserDataCount];
        v14->Reserved = 0;
        v14->Ptr = (ULONGLONG)&qword_14000AC58;
        v14->Size = 4;
        v14[1].Reserved = 0;
        v14[1].Ptr = (ULONGLONG)&qword_14000AC58;
        v14[1].Size = 8;
        v14[2].Reserved = 0;
        v14[2].Ptr = (ULONGLONG)&qword_14000AC58;
        v14[2].Size = 4;
        v14[3].Reserved = 0;
        v14[3].Ptr = (ULONGLONG)&qword_14000AC58;
        v14[3].Size = 4;
        v14[4].Reserved = 0;
        v14[4].Ptr = (ULONGLONG)&qword_14000AC58;
        v14[4].Size = 8;
        v14[5].Reserved = 0;
        v14[5].Ptr = (ULONGLONG)&qword_14000AC58;
        v14[5].Size = 8;
        v14[6].Reserved = 0;
        UserDataCount += 7;
        v14[6].Ptr = (ULONGLONG)&qword_14000AC58;
        v14[6].Size = 2;
      }
      ++v7;
    }
    while ( v7 < a6 );
  }
  return EtwWriteEx(EtwThreatIntProvRegHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
