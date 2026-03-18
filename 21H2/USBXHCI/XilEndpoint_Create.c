/*
 * XREFs of XilEndpoint_Create @ 0x1C0001DEC
 * Callers:
 *     Endpoint_Create @ 0x1C006B6C8 (Endpoint_Create.c)
 * Callees:
 *     XilEndpoint_FreeResources @ 0x1C000192C (XilEndpoint_FreeResources.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C00374A0 (XilEndpoint_CreateSecureObject.c)
 */

__int64 __fastcall XilEndpoint_Create(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  int v6; // eax
  int SecureObject; // esi
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  v4 = a1 + 1312;
  *(_QWORD *)(a1 + 1344) = a1;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 556LL);
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 1336) = 0;
LABEL_3:
    *(_QWORD *)v4 = a1;
    *(_BYTE *)(v4 + 8) = 0;
    return 0;
  }
  if ( (unsigned int)(v6 - 1) > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    if ( !*(_BYTE *)(v4 + 24) )
      goto LABEL_3;
  }
  else
  {
    *(_BYTE *)(a1 + 1336) = 1;
  }
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
  XilEndpoint_FreeResources(v4);
  return (unsigned int)SecureObject;
}
