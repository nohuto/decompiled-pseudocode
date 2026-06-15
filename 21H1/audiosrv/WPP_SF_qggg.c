/*
 * XREFs of WPP_SF_qggg @ 0x1800C3298
 * Callers:
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C21F0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qggg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, 25LL, (__int64 *)va);
}
