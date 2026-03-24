/*
 * XREFs of WPP_RECORDER_SF_qqL @ 0x1C0002260
 * Callers:
 *     KeyboardClassReadCopyData @ 0x1C0005168 (KeyboardClassReadCopyData.c)
 *     KeyboardClassDeviceControl @ 0x1C000D110 (KeyboardClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqL(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, int a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  char *v12; // rcx
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v16; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v12 = (char *)WPP_GLOBAL_Control + 80 * v7;
    if ( (unsigned __int8)v12[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v12 + 3),
        43LL,
        &WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids,
        a4,
        (__int64 *)va,
        8LL,
        (__int64 *)va1,
        8LL,
        va2,
        4LL,
        0LL);
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(
           a1,
           v9,
           a3,
           &WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2);
}
