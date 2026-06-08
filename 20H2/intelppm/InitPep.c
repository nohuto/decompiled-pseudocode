/*
 * XREFs of InitPep @ 0x1C002523C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0022D64 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     RegisterPepDevice @ 0x1C00253A4 (RegisterPepDevice.c)
 */

__int64 __fastcall InitPep(__int64 a1)
{
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  char v7; // dl
  char v8; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = RegisterPepDevice(a1);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xAu,
        (__int64)&WPP_05532f4140ac3fcdf0360a89dbdc65db_Traceguids,
        v2);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 80) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C001C680)(*(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 1104));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001C3E8,
      0LL);
    if ( !PepLpiInitialized )
    {
      v4 = *(_QWORD *)(a1 + 272);
      if ( (v4 & 0x100000000000LL) != 0 && (v4 & 0xE0000000000LL) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 1104);
        v8 = 0;
        v6 = PoFxProcessorNotification(v5, 34LL, &v8);
        v7 = 0;
        if ( v6 >= 0 )
          v7 = v8;
        PepLpiDisabled = v7;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      *(_QWORD *)(a1 + 272) &= 0xFFFFE1FFFFFFFFFFuLL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001C3E8);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v2;
}
