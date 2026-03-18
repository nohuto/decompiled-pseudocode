/*
 * XREFs of NetpGetPrivilege @ 0x1C0057A60
 * Callers:
 *     sub_1C0056C20 @ 0x1C0056C20 (sub_1C0056C20.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 *     sub_1C0053C50 @ 0x1C0053C50 (sub_1C0053C50.c)
 */

void __fastcall NetpGetPrivilege(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // r14
  unsigned __int64 v3; // rdi
  __m128 *PoolWithTag; // rax
  __m128 *Data; // rbx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-39h]
  SIZE_T v7; // [rsp+40h] [rbp-19h] BYREF
  int v8; // [rsp+48h] [rbp-11h] BYREF
  PMESSAGE_RESOURCE_ENTRY v9; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v10[3]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  __int16 v12; // [rsp+90h] [rbp+37h]

  v9 = 0LL;
  v7 = 0LL;
  v10[0] = xmmword_1C0065200;
  v12 = 0;
  v10[1] = xmmword_1C0065210;
  v10[2] = xmmword_1C0065220;
  v11 = 0x7300790073002ELL;
  v2 = sub_1C0011220((__int64)DeviceObject);
  if ( v2[705] )
  {
    v8 = sub_1C0011220((__int64)DeviceObject)[705];
    sub_1C00469A4(DeviceObject, L"EnumerationFailureCode", 4u, &v8, 4u);
    if ( RtlFindMessage(stru_1C006B480.Queue.ListEntry.Blink[1].Blink, 0xBu, 0, v2[705], &v9) >= 0
      && (int)sub_1C0053C50(v9->Text, v9->Length - 4LL, &v7) >= 0 )
    {
      v3 = v7 + 86;
      v7 += 86LL;
      PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v7, 0x42554855u);
      Data = PoolWithTag;
      if ( PoolWithTag )
      {
        sub_1C001D340(PoolWithTag, 0, v3);
        LODWORD(MessageResourceEntry) = v2[705];
        if ( (int)sub_1C00447AC((wchar_t *)Data, v3, L"%s,#%d;%hs", v10, MessageResourceEntry, v9->Text) >= 0
          && (int)sub_1C0053C50(Data, v3, &v7) >= 0 )
        {
          IoSetDevicePropertyData(DeviceObject, &stru_1C0062790, 0, 0, 0x19u, v7 + 2, Data);
        }
        ExFreePoolWithTag(Data, 0);
      }
    }
  }
}
