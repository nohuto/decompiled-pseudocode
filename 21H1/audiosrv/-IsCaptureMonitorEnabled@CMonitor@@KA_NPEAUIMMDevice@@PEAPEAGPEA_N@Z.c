/*
 * XREFs of ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180062A58
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061D9C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FB238 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FB6B8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800FBC64 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FCC44 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800FE830 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CMonitor::IsCaptureMonitorEnabled(struct IMMDevice *a1, unsigned __int16 **a2, bool *a3)
{
  __int64 v6; // rcx
  char v7; // bl
  unsigned __int16 *v9; // rax
  void *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  PROPVARIANT v14[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  LPVOID pv; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0LL;
  v11 = 0LL;
  v7 = 0;
  *(_OWORD *)pvar = 0LL;
  v13 = 0LL;
  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a2 && a1 )
  {
    if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v11) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &PKEY_MonitorEnabled, v14) >= 0
      && LOWORD(v14[0]) == 11
      && LOWORD(v14[1]) == 0xFFFF
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &PKEY_MonitorOutput, pvar) >= 0 )
    {
      if ( LOWORD(pvar[0]) == 31 )
      {
        *a2 = (unsigned __int16 *)pvar[1];
        LOWORD(pvar[0]) = 0;
        v7 = 1;
      }
      else if ( !LOWORD(pvar[0]) )
      {
        ppv = 0LL;
        v17 = 0LL;
        pv = 0LL;
        if ( CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               &ppv) < 0
          || (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v17) < 0
          || (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 40LL))(v17, &pv) < 0 )
        {
          v10 = pv;
        }
        else
        {
          v9 = (unsigned __int16 *)pv;
          pv = 0LL;
          *a2 = v9;
          v7 = 1;
          if ( a3 )
            *a3 = 1;
          v10 = 0LL;
        }
        CoTaskMemFree(v10);
        pv = 0LL;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      }
    }
    PropVariantClear(pvar);
    PropVariantClear(v14);
    v6 = v11;
  }
  else
  {
    v7 = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
