/*
 * XREFs of WPP_RECORDER_SF_dlL @ 0x1C00B1718
 * Callers:
 *     NdisIfFreeNetLuidIndex @ 0x1C01266A0 (NdisIfFreeNetLuidIndex.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_dlL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_b09f245bd6e23c8183163ab44c15c118_Traceguids, 0xFu, va, 4LL, va1, 4LL, va2, 4LL, 0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_b09f245bd6e23c8183163ab44c15c118_Traceguids, v7, (__int64 *)va);
}
