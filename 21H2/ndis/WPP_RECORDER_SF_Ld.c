/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C00AB694
 * Callers:
 *     ndisAoAcTraceRundown @ 0x1C00AAC9C (ndisAoAcTraceRundown.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Ld(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) )
    ndisWppFastTraceMessage(&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids, 0xCu, va, 4LL, va1, 4LL, 0LL);
  LOWORD(v7) = 12;
  return WppAutoLogTrace(a1, 1LL, 2LL, &WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids, v7, (__int64 *)va);
}
