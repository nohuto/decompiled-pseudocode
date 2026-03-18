/*
 * XREFs of RIMGetPnpActionBitsFromGuid @ 0x1C0174774
 * Callers:
 *     RIMDeviceNotify @ 0x1C01745E0 (RIMDeviceNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_LLLD @ 0x1C01754B4 (WPP_RECORDER_SF_LLLD.c)
 */

_DWORD *__fastcall RIMGetPnpActionBitsFromGuid(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v7; // rax
  _DWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v7 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 )
    v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v7 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_DWORD *)WPP_RECORDER_SF_qq(
                           (__int64)gRimLog,
                           4u,
                           1u,
                           0xAu,
                           (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                           a1,
                           a2);
    *a4 = 1;
    return result;
  }
  v9 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 )
    v9 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)gRimLog,
        4u,
        1u,
        0xBu,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        a2);
    result = a5;
LABEL_19:
    *result = 1;
    return result;
  }
  v10 = *(_QWORD *)a3 - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( *(_QWORD *)a3 == *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
    v10 = *(_QWORD *)(a3 + 8) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        (__int64)gRimLog,
        4u,
        1u,
        0xCu,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        a1,
        a2);
    result = a6;
    goto LABEL_19;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_DWORD *)WPP_RECORDER_SF_LLLD(*(unsigned __int16 *)(a3 + 6), *(unsigned __int16 *)(a3 + 4), a3, (_DWORD)a4);
  return result;
}
