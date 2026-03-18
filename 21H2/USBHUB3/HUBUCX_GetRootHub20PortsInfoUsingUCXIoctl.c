/*
 * XREFs of HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0025404
 * Callers:
 *     HUBHSM_GettingRootHub20PortsInfo @ 0x1C0009790 (HUBHSM_GettingRootHub20PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // r8
  unsigned int v11; // r9d
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 result; // rax
  int v15; // edi
  __int64 v16; // [rsp+28h] [rbp-51h]
  __int128 v17; // [rsp+60h] [rbp-19h] BYREF
  __int128 v18; // [rsp+70h] [rbp-9h]
  __int128 v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+17h]
  unsigned __int64 v21; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+7Fh] BYREF

  DWORD1(v17) = 0;
  v23 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  if ( !*(_WORD *)(a1 + 112) )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    v2 = 2042;
    v3 = a1 + 1264;
    return HUBSM_AddEvent(v3, v2);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4;
  *(_QWORD *)&v18 = 0LL;
  v20 = 0LL;
  v19 = v5;
  v17 = 0LL;
  *((_QWORD *)&v18 + 1) = 0x100000001LL;
  LODWORD(v17) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015
                                                                                               + 1976))(
         WdfDriverGlobals,
         &v17,
         v4,
         &v21);
  if ( v7 < 0 )
  {
    v21 = 0LL;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_22:
      if ( v21 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v24 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
      v3 = a1 + 1264;
      v2 = 2038;
      return HUBSM_AddEvent(v3, v2);
    }
    v8 = 44;
LABEL_6:
    LODWORD(v16) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v8,
      (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
      v16);
    goto LABEL_22;
  }
  v9 = 28LL * *(unsigned __int16 *)(a1 + 112);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_QWORD *)&v19 = *(_QWORD *)(a1 + 16);
  v17 = 0LL;
  LODWORD(v17) = 56;
  *((_QWORD *)&v18 + 1) = 0x100000001LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v17,
         (unsigned int)ExDefaultNonPagedPoolType,
         1882409045LL,
         v9,
         &v24,
         a1 + 128);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v8 = 45;
    goto LABEL_6;
  }
  v20 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  *((_QWORD *)&v18 + 1) = 0x100000001LL;
  v19 = v21;
  v17 = 0LL;
  LODWORD(v17) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v17,
         (unsigned int)ExDefaultNonPagedPoolType,
         1882409045LL,
         16LL,
         &v23,
         &v22);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v8 = 46;
    goto LABEL_6;
  }
  v10 = *(_QWORD **)(a1 + 128);
  v11 = 0;
  *(_DWORD *)v22 = 16;
  *(_WORD *)(v22 + 4) = *(_WORD *)(a1 + 112);
  *(_WORD *)(v22 + 6) = 20;
  *(_QWORD *)(v22 + 8) = v10;
  v12 = *(unsigned __int16 *)(v22 + 4);
  v13 = &v10[v12];
  if ( (_WORD)v12 )
  {
    do
    {
      *v10 = v13;
      ++v11;
      *((_WORD *)v13 + 1) = 0;
      ++v10;
      v13 = (_QWORD *)((char *)v13 + 20);
    }
    while ( v11 < *(unsigned __int16 *)(v22 + 4) );
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
         WdfDriverGlobals,
         v6,
         v21,
         4788239LL,
         v23,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v8 = 47;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v21,
    HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v21,
             v6,
             0LL);
  if ( !(_BYTE)result )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
               WdfDriverGlobals,
               v21);
    v15 = result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 0x30u,
                 (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
                 v16);
    }
    if ( v15 < 0 )
      goto LABEL_22;
  }
  return result;
}
