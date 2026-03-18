/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C0016CC8
 * Callers:
 *     PnpiGrowResourceList @ 0x1C009C8D8 (PnpiGrowResourceList.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dL(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, int a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      &WPP_fad942c932903a636e6a214bab40d1dd_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, &WPP_fad942c932903a636e6a214bab40d1dd_Traceguids, v12, (__int64 *)va, 4LL, va1);
}
