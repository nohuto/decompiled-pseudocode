/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C005C0B4
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C005B3F0 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005B830 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1410 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqD(__int64 a1, _DWORD a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v14; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= 2u )
    ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      &WPP_4ea83bc4352b3df9b35783bbf858603c_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 2LL, a3, &WPP_4ea83bc4352b3df9b35783bbf858603c_Traceguids, v11, (__int64 *)va);
}
