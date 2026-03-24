/*
 * XREFs of DpiGetDevicePropertyDataBoolean @ 0x1C012BA00
 * Callers:
 *     DpiIsDriverUpdateInProgress @ 0x1C012B960 (DpiIsDriverUpdateInProgress.c)
 *     DpiFdoInitializeFdo @ 0x1C017EFCC (DpiFdoInitializeFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDevicePropertyDataBoolean(struct _DEVICE_OBJECT *a1, const DEVPROPKEY *a2, char *a3)
{
  char v4; // di
  NTSTATUS DevicePropertyData; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // rax
  ULONG v11[6]; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF
  ULONG v13; // [rsp+78h] [rbp+20h] BYREF

  v11[0] = 0;
  v13 = 0;
  v12 = 0;
  if ( a1 && a2 && a3 )
  {
    v4 = 1;
    DevicePropertyData = IoGetDevicePropertyData(a1, a2, 0, 0, 1u, &v12, v11, &v13);
    v8 = DevicePropertyData;
    if ( DevicePropertyData == -1073741772 )
    {
      LODWORD(v8) = 0;
LABEL_6:
      v4 = 0;
LABEL_7:
      *a3 = v4;
      return (unsigned int)v8;
    }
    if ( DevicePropertyData >= 0 )
    {
      if ( v13 == 17 )
      {
        if ( v12 == -1 )
          goto LABEL_7;
        goto LABEL_6;
      }
      v8 = -1073741788LL;
    }
    v10 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdError(v10);
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
