/*
 * XREFs of WPP_RECORDER_SF_qZL @ 0x1C002E4D0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002E0D0 (NdisRegisterProtocolDriver.c)
 *     NdisIMCancelInitializeDeviceInstance @ 0x1C0066640 (NdisIMCancelInitializeDeviceInstance.c)
 *     NdisQueryAdapterInstanceName @ 0x1C0098400 (NdisQueryAdapterInstanceName.c)
 *     NdisRegisterProtocol @ 0x1C00988B0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZL(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7,
        ...)
{
  unsigned __int64 v9; // rdi
  int v11; // eax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  const wchar_t *v15; // rax
  int v16; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= 4u )
  {
    if ( a7 )
      v13 = *a7;
    else
      v13 = 8LL;
    if ( a7 && *a7 )
      v14 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v14 = L"NULL";
    v15 = a7;
    if ( !a7 )
      v15 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, v15, 2LL, v14, v13, va, 4LL, 0LL);
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v16, &a6);
}
