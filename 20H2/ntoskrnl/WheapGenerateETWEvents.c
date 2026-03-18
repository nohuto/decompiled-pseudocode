/*
 * XREFs of WheapGenerateETWEvents @ 0x1405BB9C0
 * Callers:
 *     WheaReportHwError @ 0x1405B96D0 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1405BA180 (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x1407CF1E0 (WheapEtwEnableCallback.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     WheaLogInternalEvent @ 0x1403BA350 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WheapGenerateETWEvents(__int64 a1)
{
  ULONGLONG v1; // rsi
  unsigned int v2; // edi
  __int128 Src; // [rsp+30h] [rbp-50h] BYREF
  __int128 v6; // [rsp+40h] [rbp-40h]
  __int64 v7; // [rsp+50h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp-18h]
  unsigned int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]

  v1 = a1 + 20;
  v2 = *(_DWORD *)(a1 + 20);
  v7 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  if ( v2 > 0xFBFB )
  {
    v2 = 64507;
    v7 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)&Src = 0x1674C6857LL;
    *((_QWORD *)&Src + 1) = 40LL;
    *(_QWORD *)&v6 = 0x8000001D4C4E524BuLL;
    *((_QWORD *)&v6 + 1) = 0x800000002LL;
    WheaLogInternalEvent(&Src);
  }
  UserData.Reserved = 0;
  v11 = 0;
  UserData.Ptr = v1;
  UserData.Size = 4;
  v9 = a1;
  v10 = v2;
  return EtwWrite((REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceObject, &EVENT_WHEA_ERROR, 0LL, 2u, &UserData);
}
