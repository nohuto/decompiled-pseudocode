/*
 * XREFs of EvtDriverDeviceAdd @ 0x1C001FAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     ProcLibDeviceCreate @ 0x1C0027A10 (ProcLibDeviceCreate.c)
 */

__int64 __fastcall EvtDriverDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int v4; // ebx
  __int64 v5; // r9
  unsigned __int16 v6; // r9
  void *v7; // rdi
  unsigned int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  int v12; // [rsp+44h] [rbp-BCh]
  int *v13; // [rsp+48h] [rbp-B8h]
  GUID *v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+74h] [rbp-8Ch]
  void *v20; // [rsp+78h] [rbp-88h]
  void (*v21)(); // [rsp+80h] [rbp-80h]
  void (*v22)(); // [rsp+88h] [rbp-78h]
  __int128 v23; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v24)(); // [rsp+A0h] [rbp-60h]
  __int128 v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C0h] [rbp-40h]
  __int128 v28; // [rsp+C8h] [rbp-38h]
  void *v29; // [rsp+D8h] [rbp-28h]
  _QWORD v30[22]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+1A8h] [rbp+A8h] BYREF
  char v32; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v33; // [rsp+1B8h] [rbp+B8h] BYREF

  v31 = a2;
  v19 = 0;
  v33 = 0LL;
  v12 = 0;
  v15 = 0LL;
  v17 = 0LL;
  v23 = 0LL;
  memset(v30, 0, 0x90uLL);
  v30[5] = EvtDevicePrepareHardware;
  LODWORD(v30[0]) = 144;
  v30[6] = EvtDeviceReleaseHardware;
  v30[14] = EvtDeviceQueryStop;
  v30[1] = EvtDeviceD0Entry;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a2, v30);
  v32 = 2;
  LOBYTE(v3) = 22;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
         WdfDriverGlobals,
         v31,
         EvtDeviceSetPower,
         v3,
         &v32,
         1);
  if ( v4 >= 0 )
  {
    v32 = 20;
    LOBYTE(v5) = 27;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, char *, int))(WdfFunctions_01015 + 584))(
           WdfDriverGlobals,
           v31,
           EvtDeviceWdmIrpPreprocessPnp,
           v5,
           &v32,
           1);
    if ( v4 >= 0 )
    {
      v29 = off_1C0013018;
      v26 = 0LL;
      v27 = 0x100000001LL;
      v25 = 0LL;
      LODWORD(v25) = 56;
      v28 = 0LL;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, __int128 *, __int64 *))(WdfFunctions_01015 + 600))(
             WdfDriverGlobals,
             &v31,
             &v25,
             &v33);
      if ( v4 >= 0 )
      {
        v7 = (void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       v33,
                       off_1C0013018);
        v4 = ProcLibDeviceCreate(v7);
        if ( v4 >= 0 )
        {
          v19 = 0;
          v12 = 0;
          v15 = 0LL;
          v17 = 0LL;
          v16 = 0LL;
          v21 = AcpiCStateIdleCancel;
          v22 = AcpiCStateIdleCancel;
          v24 = ProcLibThermalNotification;
          v13 = &v18;
          v14 = &GUID_THERMAL_COOLING_INTERFACE;
          v23 = 0LL;
          v18 = 65592;
          v20 = v7;
          v11 = 48;
          v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 1824))(
                 WdfDriverGlobals,
                 v33,
                 &v11);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
                   WdfDriverGlobals,
                   v33,
                   &GUID_DEVINTERFACE_THERMAL_COOLING,
                   0LL);
            if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v6 = 17;
              goto LABEL_19;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v6 = 16;
            goto LABEL_19;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 15;
          v8 = 3;
LABEL_20:
          LODWORD(v10) = v4;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            v8,
            v6,
            (__int64)&WPP_ea6247e0c89d3525a20904d64520788c_Traceguids,
            v10);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 14;
        goto LABEL_19;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
      goto LABEL_19;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 12;
LABEL_19:
    v8 = 4;
    goto LABEL_20;
  }
  return (unsigned int)v4;
}
