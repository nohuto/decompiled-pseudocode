/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01804E8
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01630E0 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01794B0 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0179BB0 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0179DB0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C0182E0C (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0183220 (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  struct RIMDEV *v7; // rbx
  __int64 result; // rax
  int v10; // edx
  int v11; // edx
  _DWORD v12[10]; // [rsp+30h] [rbp-28h] BYREF

  v12[0] = 0;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 34, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  result = RIMStartPointerDeviceFrame((__int64)a1, (__int64)v7, a5);
  if ( (_DWORD)result )
  {
    RIMStoreRawDataInPointerDeviceFrame((__int64)a1, (__int64)v7, a3, a4, v12);
    rimProcessPointerDeviceButtonContact((_DWORD)a1, (_DWORD)v7, a3, a4, v12[0]);
    rimProcessMissingPointerDeviceContacts(a1, v7, 0LL);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)v7);
    result = RIMCompletePointerDeviceFrame(a1, v7, 1u);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    LOBYTE(v10) = 4;
    result = WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 35, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    return WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 36, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  return result;
}
