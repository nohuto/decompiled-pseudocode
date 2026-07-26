/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C002DCDC
 * Callers:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0105E2C (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_dL(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  v7 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
    ndisWppFastTraceMessage(&WPP_b09f245bd6e23c8183163ab44c15c118_Traceguids, a4, va, 4LL, va1, 4LL, 0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, v7, 22LL, &WPP_b09f245bd6e23c8183163ab44c15c118_Traceguids, v9, (__int64 *)va);
}
