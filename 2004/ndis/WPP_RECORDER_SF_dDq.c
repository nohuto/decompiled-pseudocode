/*
 * XREFs of WPP_RECORDER_SF_dDq @ 0x1C00181E4
 * Callers:
 *     NdisOidRequest @ 0x1C0018140 (NdisOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_dDq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids, 0xFu, va, 4LL, va1, 4LL, va2, 8LL, 0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(a1, 4LL, 11LL, &WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids, v7, (__int64 *)va);
}
