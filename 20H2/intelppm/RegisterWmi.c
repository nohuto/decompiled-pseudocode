/*
 * XREFs of RegisterWmi @ 0x1C0021E3C
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C0021D00 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  int v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  __int128 *v7; // rax
  __int128 v8; // xmm0
  int v9; // esi
  unsigned int v10; // ebx
  __int64 *i; // rdi
  __int128 v12; // xmm0
  __int64 v13; // r14
  unsigned __int16 v15; // r9
  __int64 v16; // [rsp+28h] [rbp-A1h]
  _QWORD v17[2]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v18[8]; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v19[40]; // [rsp+80h] [rbp-49h] BYREF
  void *v20; // [rsp+A8h] [rbp-21h]
  _QWORD v21[5]; // [rsp+B0h] [rbp-19h] BYREF
  __int128 v22; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+E8h] [rbp+1Fh]
  wchar_t v24; // [rsp+F0h] [rbp+27h]

  *(_DWORD *)&v19[20] = 0;
  *(_QWORD *)&v19[28] = 0LL;
  *(_DWORD *)&v19[36] = 0;
  v24 = aProcessorwmi[12];
  v17[1] = &v22;
  v20 = &ProcessorPerfStateEvent_GUID;
  v21[0] = a1 + 162;
  v21[1] = &ProcessorCStateEvent_GUID;
  v21[2] = a1 + 166;
  v21[3] = &ProcessorThrottleStateEvent_GUID;
  v21[4] = a1 + 170;
  v22 = *(_OWORD *)L"PROCESSORWMI";
  v17[0] = 1703960LL;
  v23 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[168] = 0;
  v3 = v2;
  a1[164] = 4;
  a1[172] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v17);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xAu,
      (__int64)&WPP_50dc077cd9ae33833cdb55bc8a84a1fd_Traceguids,
      v4);
  v5 = 0;
  v6 = &unk_1C0012300;
  do
  {
    v7 = (__int128 *)*((_QWORD *)v6 - 2);
    *(_DWORD *)&v19[20] = 0;
    *(_QWORD *)&v19[28] = 0LL;
    *(_DWORD *)&v19[36] = 0;
    *(_DWORD *)v19 = 40;
    v8 = *v7;
    *(_DWORD *)&v19[24] = *v6;
    *(_OWORD *)&v19[4] = v8;
    memset(v18, 0, sizeof(v18));
    v18[2] = v19;
    v18[4] = *((_QWORD *)v6 - 1);
    LODWORD(v18[0]) = 64;
    BYTE1(v18[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v18,
           0LL,
           0LL);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v9;
      v15 = 11;
      goto LABEL_15;
    }
    ++v5;
    v6 += 6;
  }
  while ( v5 < 4 );
  v10 = 0;
  for ( i = v21; ; i += 2 )
  {
    memset(v19, 0, sizeof(v19));
    *(_DWORD *)v19 = 40;
    v12 = *(_OWORD *)*(i - 1);
    *(_DWORD *)&v19[20] = 2;
    *(_OWORD *)&v19[4] = v12;
    memset(v18, 0, sizeof(v18));
    v13 = *i;
    v18[2] = v19;
    LODWORD(v18[0]) = 64;
    BYTE1(v18[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v18,
           0LL,
           v13);
    if ( v9 < 0 )
      break;
    ++v10;
    *(_BYTE *)(v13 + 12) = 1;
    if ( v10 >= 3 )
      return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 12;
LABEL_15:
    LODWORD(v16) = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      v15,
      (__int64)&WPP_50dc077cd9ae33833cdb55bc8a84a1fd_Traceguids,
      v16);
  }
  return (unsigned int)v9;
}
