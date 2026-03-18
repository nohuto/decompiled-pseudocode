/*
 * XREFs of Controller_RetrieveUrsData @ 0x1C0074CB0
 * Callers:
 *     Controller_Create @ 0x1C006D970 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     WPP_RECORDER_SF_P @ 0x1C0034F34 (WPP_RECORDER_SF_P.c)
 *     Controller_PopulatePciDeviceInformation @ 0x1C0071128 (Controller_PopulatePciDeviceInformation.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C0074770 (Controller_PopulateAcpiDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveUrsData(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *PoolWithTag; // rax
  int v11; // edx
  int v12; // r8d
  unsigned int *v13; // rbx
  int v14; // r9d
  int v15; // edi
  __int64 v16; // r13
  int v17; // edx
  size_t v18; // r12
  unsigned int *v19; // rax
  unsigned __int16 v20; // r9
  int v21; // edx
  unsigned __int16 v22; // r8
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  unsigned int *v25; // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]

  HIDWORD(v24) = 0;
  HIDWORD(v26) = 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                                  0x150uLL,
                                  0x49434858u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741670;
    v14 = 138;
LABEL_4:
    WPP_RECORDER_SF_P(a2, v11, v12, v14);
    return (unsigned int)-1073741670;
  }
  memset(PoolWithTag, 0, 0x150uLL);
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
  v24 = 1LL;
  v26 = 336LL;
  v25 = v13;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1504))(
          WdfDriverGlobals,
          v16,
          0LL,
          2752516LL,
          0LL,
          &v24,
          0LL,
          0LL);
  if ( v15 == -2147483643 )
  {
    v18 = *v13;
    ExFreePoolWithTag(v13, 0x49434858u);
    v19 = (unsigned int *)ExAllocatePoolWithTag(
                            (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                            (unsigned int)v18,
                            0x49434858u);
    v13 = v19;
    if ( !v19 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741670;
      v14 = 139;
      goto LABEL_4;
    }
    memset(v19, 0, v18);
    v26 = (unsigned int)v18;
    v24 = 1LL;
    v25 = v13;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1504))(
            WdfDriverGlobals,
            v16,
            0LL,
            2752516LL,
            0LL,
            &v24,
            0LL,
            0LL);
  }
  if ( v15 >= 0 )
  {
    if ( v13[1] == 1 )
    {
      *a3 = 2;
      Controller_PopulateAcpiDeviceInformation((unsigned __int16 *)v13 + 4, (char *)a4);
      *(_OWORD *)a5 = 0LL;
      *(_OWORD *)(a5 + 16) = 0LL;
      *(_OWORD *)(a5 + 32) = 0LL;
      *(_QWORD *)(a5 + 48) = 0LL;
    }
    else
    {
      v20 = *((_WORD *)v13 + 7);
      v21 = v13[2];
      v22 = *((_WORD *)v13 + 6);
      *a3 = 1;
      Controller_PopulatePciDeviceInformation(a2, v21, v22, v20, (_QWORD *)v13 + 2, (__int16 *)v13 + 40, a5, a6);
      *(_QWORD *)a4 = 0LL;
      *(_DWORD *)(a4 + 8) = 0;
      *(_WORD *)(a4 + 12) = 0;
      *(_BYTE *)(a4 + 14) = 0;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_d(a2, v17, 4, 140, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, v15);
  }
  ExFreePoolWithTag(v13, 0x49434858u);
  return (unsigned int)v15;
}
