/*
 * XREFs of SecureDmaEnabler_Create @ 0x1C0078364
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C00784E4 (SecureDmaEnabler_CreateSecureObject.c)
 */

__int64 __fastcall SecureDmaEnabler_Create(__int64 a1, _QWORD *a2)
{
  int v4; // edx
  int SecureObject; // ebx
  _QWORD *v6; // rdi
  int v7; // edx
  int v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+34h] [rbp-3Ch]
  int v11; // [rsp+44h] [rbp-2Ch]
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+4Ch] [rbp-24h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+58h] [rbp-18h]
  void *v16; // [rsp+60h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+20h] BYREF

  v17 = 0LL;
  v11 = 0;
  v15 = 0LL;
  v12 = 1;
  v13 = 1;
  v16 = off_1C0061360;
  v14 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  v9 = 56;
  SecureObject = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01023 + 1656))(
                   WdfDriverGlobals,
                   &v9,
                   &v17);
  if ( SecureObject < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 72),
        v4,
        18,
        10,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        SecureObject);
    }
    goto LABEL_8;
  }
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v17,
                   off_1C0061360);
  *v6 = v17;
  v6[1] = a1;
  SecureObject = SecureDmaEnabler_CreateSecureObject(v6);
  if ( SecureObject >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a1 + 72),
        v7,
        18,
        11,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v17);
    }
    *a2 = v6;
LABEL_8:
    if ( SecureObject >= 0 )
      return (unsigned int)SecureObject;
  }
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  return (unsigned int)SecureObject;
}
