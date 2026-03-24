/*
 * XREFs of XilUsbDevice_Create @ 0x1C001646C
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C006F110 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     XilCoreUsbDevice_Create @ 0x1C001651C (XilCoreUsbDevice_Create.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0035E5C (WPP_RECORDER_SF_sds.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00454A8 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x1C00456D4 (XilUsbDevice_FreeResources.c)
 */

__int64 __fastcall XilUsbDevice_Create(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rsi
  _BYTE *v6; // r8
  int SecureObject; // edi
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  int v12; // ecx

  v2 = (_BYTE *)(a1 + 608);
  v3 = a2;
  *(_QWORD *)(a1 + 664) = a1;
  v5 = *(_QWORD *)(a1 + 8);
  LOBYTE(a2) = *(_BYTE *)(v5 + 553);
  *(_BYTE *)(a1 + 657) = a2;
  if ( (_BYTE)a2 )
  {
    SecureObject = XilUsbDevice_CreateSecureObject(a1 + 608, v3);
    if ( SecureObject < 0 )
      goto LABEL_18;
    v11 = *(_DWORD *)(v5 + 556);
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v2[50] = v2[48] == 0;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, v9, v10);
          if ( !KdRefreshDebuggerNotPresent() )
            __debugbreak();
        }
      }
      else
      {
        v2[50] = 0;
      }
    }
    else
    {
      v2[50] = 1;
    }
    LOBYTE(a2) = v2[49];
    v6 = v2 + 8;
  }
  else
  {
    v6 = (_BYTE *)(a1 + 608);
    *(_BYTE *)(a1 + 658) = 1;
  }
  SecureObject = XilCoreUsbDevice_Create(a1, a2, v6);
  if ( SecureObject < 0 )
LABEL_18:
    XilUsbDevice_FreeResources(v2);
  return (unsigned int)SecureObject;
}
