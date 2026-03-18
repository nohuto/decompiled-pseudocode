/*
 * XREFs of WPP_RECORDER_SF_qqq @ 0x1C00B0764
 * Callers:
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C00531FC (rimHandlePnpWaitersOnOwnedDevices.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00B0300 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C013D920 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqq(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        ...)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v14 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v13, &a6, 8LL, (__int64 *)va, 8LL, va1, 8LL, 0LL);
}
