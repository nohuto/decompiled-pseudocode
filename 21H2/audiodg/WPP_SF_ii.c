/*
 * XREFs of WPP_SF_ii @ 0x1400448AC
 * Callers:
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x140044120 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ii(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids, 19LL, (__int64 *)va);
}
