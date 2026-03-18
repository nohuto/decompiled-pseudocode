/*
 * XREFs of HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C0024FB4
 * Callers:
 *     HUBHSM_GettingRootHub20PortsInfo @ 0x1C0009490 (HUBHSM_GettingRootHub20PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 result; // rax
  int v8; // edi
  unsigned __int16 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // [rsp+28h] [rbp-51h]
  __int128 v16; // [rsp+60h] [rbp-19h] BYREF
  __int128 v17; // [rsp+70h] [rbp-9h]
  __int128 v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+17h]
  unsigned __int64 v20; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
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
  *(_QWORD *)&v17 = 0LL;
  v19 = 0LL;
  v18 = v5;
  v16 = 0LL;
  *((_QWORD *)&v17 + 1) = 0x100000001LL;
  LODWORD(v16) = 56;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015 + 1976))(
             WdfDriverGlobals,
             &v16,
             v4,
             &v20);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v10 = 28LL * *(unsigned __int16 *)(a1 + 112);
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    *(_QWORD *)&v18 = *(_QWORD *)(a1 + 16);
    v16 = 0LL;
    LODWORD(v16) = 56;
    *((_QWORD *)&v17 + 1) = 0x100000001LL;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
               WdfDriverGlobals,
               &v16,
               (unsigned int)ExDefaultNonPagedPoolType,
               1882409045LL,
               v10,
               &v23,
               a1 + 128);
    v8 = result;
    if ( (int)result >= 0 )
    {
      v19 = 0LL;
      *(_QWORD *)&v17 = 0LL;
      *((_QWORD *)&v17 + 1) = 0x100000001LL;
      v18 = v20;
      v16 = 0LL;
      LODWORD(v16) = 56;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
                 WdfDriverGlobals,
                 &v16,
                 (unsigned int)ExDefaultNonPagedPoolType,
                 1882409045LL,
                 16LL,
                 &v22,
                 &v21);
      v8 = result;
      if ( (int)result >= 0 )
      {
        v11 = *(_QWORD **)(a1 + 128);
        v12 = 0;
        *(_DWORD *)v21 = 16;
        *(_WORD *)(v21 + 4) = *(_WORD *)(a1 + 112);
        *(_WORD *)(v21 + 6) = 20;
        *(_QWORD *)(v21 + 8) = v11;
        v13 = *(unsigned __int16 *)(v21 + 4);
        v14 = &v11[v13];
        if ( (_WORD)v13 )
        {
          do
          {
            *v11 = v14;
            ++v12;
            *((_WORD *)v14 + 1) = 0;
            ++v11;
            v14 = (_QWORD *)((char *)v14 + 20);
          }
          while ( v12 < *(unsigned __int16 *)(v21 + 4) );
        }
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
                   WdfDriverGlobals,
                   v6,
                   v20,
                   4788239LL,
                   v22,
                   0LL,
                   0LL,
                   0LL,
                   0LL,
                   0LL);
        v8 = result;
        if ( (int)result >= 0 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
            WdfDriverGlobals,
            v20,
            HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete,
            a1);
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                     WdfDriverGlobals,
                     v20,
                     v6,
                     0LL);
          if ( (_BYTE)result )
            goto LABEL_21;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
                     WdfDriverGlobals,
                     v20);
          v8 = result;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_21;
          v9 = 48;
          goto LABEL_20;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = 47;
          goto LABEL_20;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 46;
        goto LABEL_20;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 45;
      goto LABEL_20;
    }
  }
  else
  {
    v20 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 44;
LABEL_20:
      LODWORD(v15) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 v9,
                 (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
                 v15);
    }
  }
LABEL_21:
  if ( v8 >= 0 )
    return result;
  if ( v20 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v23 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  v3 = a1 + 1264;
  v2 = 2038;
  return HUBSM_AddEvent(v3, v2);
}
