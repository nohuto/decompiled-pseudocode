/*
 * XREFs of XilEndpoint_Create @ 0x1C0008BE8
 * Callers:
 *     Endpoint_Create @ 0x1C006A2E0 (Endpoint_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0036A80 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_FreeResources @ 0x1C0036D3C (XilEndpoint_FreeResources.c)
 */

__int64 __fastcall XilEndpoint_Create(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  int v6; // eax
  int SecureObject; // edi
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  v4 = a1 + 1312;
  *(_QWORD *)(a1 + 1344) = a1;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 540LL);
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 1) <= 1 )
    {
      *(_BYTE *)(a1 + 1336) = 1;
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    LOBYTE(v6) = *(_BYTE *)(v4 + 24);
  }
  else
  {
    *(_BYTE *)(a1 + 1336) = 0;
  }
  if ( !(_BYTE)v6 )
  {
    *(_QWORD *)v4 = a1;
    *(_BYTE *)(v4 + 8) = 0;
    SecureObject = 0;
    goto LABEL_5;
  }
LABEL_10:
  SecureObject = XilEndpoint_CreateSecureObject(v4);
  if ( SecureObject >= 0 )
  {
    *(_BYTE *)(v4 + 16) = *(_BYTE *)(v4 + 24);
    *(_QWORD *)(v4 + 8) = a1;
    return 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
LABEL_5:
  if ( SecureObject < 0 )
    XilEndpoint_FreeResources(v4);
  return (unsigned int)SecureObject;
}
