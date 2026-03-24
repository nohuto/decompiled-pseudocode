/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0001720
 * Callers:
 *     KeyboardClassPowerComplete @ 0x1C0001410 (KeyboardClassPowerComplete.c)
 *     KeyboardClassSetLedsComplete @ 0x1C0001660 (KeyboardClassSetLedsComplete.c)
 *     KeyboardClassPower @ 0x1C0001800 (KeyboardClassPower.c)
 *     KeyboardClassCreate @ 0x1C0001CC0 (KeyboardClassCreate.c)
 *     KeyboardClassHandleRead @ 0x1C00026D0 (KeyboardClassHandleRead.c)
 *     KeyboardClassCancelPendingIrpLeds @ 0x1C0004BA8 (KeyboardClassCancelPendingIrpLeds.c)
 *     KeyboardClassReadCopyData @ 0x1C0005168 (KeyboardClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002ED0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qq(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  char *v12; // rcx
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v12 = (char *)WPP_GLOBAL_Control + 80 * v7;
    if ( (unsigned __int8)v12[41] >= a2 )
      ((void (__fastcall *)(_QWORD, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v12 + 3),
        43LL,
        &WPP_ad73c0fec8af37c73e7c85b872b2d615_Traceguids,
        a4,
        (__int64 *)va,
        8LL,
        va1,
        8LL,
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
           va1,
           8LL,
           0LL);
}
