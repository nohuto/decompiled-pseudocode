/*
 * XREFs of XilEndpoint_GetRemoteHandle @ 0x1C0036DB4
 * Callers:
 *     TR_CreateSecureObject @ 0x1C003E52C (TR_CreateSecureObject.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall XilEndpoint_GetRemoteHandle(__int64 a1, int a2, int a3, int a4)
{
  if ( *(_BYTE *)(a1 + 1336) )
    return *(_QWORD *)(a1 + 1312);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return 0LL;
}
