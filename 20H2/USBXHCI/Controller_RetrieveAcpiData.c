/*
 * XREFs of Controller_RetrieveAcpiData @ 0x1C0075F20
 * Callers:
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C0075C40 (Controller_PopulateAcpiDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveAcpiData(__int64 a1, int a2, char *a3)
{
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // edi
  void *v8; // rdx
  size_t v9; // rdi
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v11; // rbx
  void *v12; // rdx
  int v13; // eax
  void *v14; // rdx
  __int64 v16; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int16 *v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+60h] [rbp-9h]
  _OWORD v19[2]; // [rsp+68h] [rbp-1h] BYREF

  HIDWORD(v16) = 0;
  HIDWORD(v18) = 0;
  memset(v19, 0, sizeof(v19));
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
  v16 = 1LL;
  v17 = (unsigned __int16 *)v19;
  v18 = 32LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
         WdfDriverGlobals,
         v5,
         0LL,
         3325992LL,
         0LL,
         &v16,
         0LL,
         0LL);
  v7 = v6;
  if ( v6 == -2147483643 )
  {
    v9 = WORD2(v19[0]);
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(
                                        SHIDWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink),
                                        WORD2(v19[0]),
                                        0x49434858u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      v16 = 1LL;
      v17 = v11;
      v18 = (unsigned int)v9;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
              WdfDriverGlobals,
              v5,
              0LL,
              3325992LL,
              0LL,
              &v16,
              0LL,
              0LL);
      v7 = v13;
      if ( v13 >= 0 )
      {
        Controller_PopulateAcpiDeviceInformation(v11, a3);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = &WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids;
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(a2, (_DWORD)v14, 4, 143, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v13);
      }
      if ( v11 != (unsigned __int16 *)v19 )
        ExFreePoolWithTag(v11, 0x49434858u);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = &WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids;
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(a2, (_DWORD)v12, 4, 142, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v9);
      }
      return (unsigned int)-1073741670;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = &WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids;
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_d(a2, (_DWORD)v8, 4, 141, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v6);
  }
  return v7;
}
