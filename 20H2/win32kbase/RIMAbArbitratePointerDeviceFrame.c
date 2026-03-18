/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C015A830
 * Callers:
 *     RIMEndAllActiveContacts @ 0x1C015D440 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C015FD74 (RIMSuppressAllActiveContacts.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01783B8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C0178B10 (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0159C10 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0159DEC (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C015A1A4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015A4C4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(
        struct RawInputManagerObject *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  _QWORD **v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // esi
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbx
  __int64 *v15; // rax
  int v16; // edx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      28,
      (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
  }
  v6 = (_QWORD **)((char *)a1 + 448);
  v7 = *(_QWORD *)(v4 + 480);
  v8 = 1;
  if ( !gDeviceArbitrationType )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v8;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 29, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
    goto LABEL_13;
  }
  rimAbRemoveGlobalPenDeadzoneIfExpired((__int64)a1, a2, a3, a4);
  rimAbUpdateDeadzonesAndResurrectContacts((__int64)a1, v4, v10, v11);
  v14 = *v6;
  while ( v14 != v6 )
  {
    v15 = v14 - 1;
    v14 = (_QWORD *)*v14;
    if ( *v15 != v7 )
      v8 &= rimAbSuppressLowerRankActivityForFrame(a1, *v15, v7);
  }
  rimAbSuppressLowerRankActivityInFrame((__int64)a1, v7, v12, v13);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v16, 1, 30, (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids, v8);
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v9,
        1,
        31,
        (__int64)&WPP_1df71edf843731ddcb2b607f62e3e01f_Traceguids);
    }
  }
  return v8;
}
