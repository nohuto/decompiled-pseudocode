/*
 * XREFs of WPP_RECORDER_SF__guid_Dd @ 0x1C00B2314
 * Callers:
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B518 (ndisIfOpenInterfaceRegistryKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_Dd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v9 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids, 0xFu, a6, 16LL, va, 4LL, va1, 4LL, 0LL);
  LOWORD(v8) = 15;
  return WppAutoLogTrace(a1, 3LL, 22LL, &WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids, v8, a6);
}
