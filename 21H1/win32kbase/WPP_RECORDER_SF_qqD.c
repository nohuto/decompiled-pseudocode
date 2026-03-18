/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C005A2F4
 * Callers:
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 *     rimFakePnpRemoveComplete @ 0x1C00569D0 (rimFakePnpRemoveComplete.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C005A1C4 (rimOnPnpRemoveComplete.c)
 *     NtUserInjectDeviceInput @ 0x1C013AF60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C013B390 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectPointerInput @ 0x1C013C3E0 (NtUserInjectPointerInput.c)
 *     UserAddBaseWindowHandle @ 0x1C01439D0 (UserAddBaseWindowHandle.c)
 *     rimOnPnpQueryRemove @ 0x1C0175D74 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C0175E94 (rimOnPnpRemoveCancelled.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0187E38 (RIMApplyPTPConfigRemedy.c)
 *     ?ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z @ 0x1C01BC8A8 (-ivRegisterChildLifetimeNotifications@CBaseInput@@IEAAJK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  va_list va2; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, (__int64 *)va, 8LL, (__int64 *)va1, 8LL, va2, 4LL, 0LL);
}
