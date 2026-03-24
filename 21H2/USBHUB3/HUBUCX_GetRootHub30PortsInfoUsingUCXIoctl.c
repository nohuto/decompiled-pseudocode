/*
 * XREFs of HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C0025484
 * Callers:
 *     HUBHSM_GettingRootHub30PortsInfo @ 0x1C00094C0 (HUBHSM_GettingRootHub30PortsInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl(__int64 a1)
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
  unsigned int v12; // r10d
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // r9
  __int64 v16; // [rsp+28h] [rbp-51h]
  __int128 v17; // [rsp+60h] [rbp-19h] BYREF
  __int128 v18; // [rsp+70h] [rbp-9h]
  __int128 v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+17h]
  unsigned __int64 v21; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+F8h] [rbp+7Fh] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  if ( !*(_WORD *)(a1 + 114) )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
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
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, unsigned __int64 *))(WdfFunctions_01015 + 1976))(
             WdfDriverGlobals,
             &v17,
             v4,
             &v21);
  v8 = result;
  if ( (int)result >= 0 )
  {
    v10 = 224LL * *(unsigned __int16 *)(a1 + 114);
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 16);
    v17 = 0LL;
    LODWORD(v17) = 56;
    *((_QWORD *)&v18 + 1) = 0x100000001LL;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
               WdfDriverGlobals,
               &v17,
               (unsigned int)ExDefaultNonPagedPoolType,
               1882409045LL,
               v10,
               &v24,
               a1 + 136);
    v8 = result;
    if ( (int)result >= 0 )
    {
      v20 = 0LL;
      *(_QWORD *)&v18 = 0LL;
      *((_QWORD *)&v18 + 1) = 0x100000001LL;
      v19 = v21;
      v17 = 0LL;
      LODWORD(v17) = 56;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
                 WdfDriverGlobals,
                 &v17,
                 (unsigned int)ExDefaultNonPagedPoolType,
                 1882409045LL,
                 16LL,
                 &v23,
                 &v22);
      v8 = result;
      if ( (int)result >= 0 )
      {
        v11 = *(_QWORD **)(a1 + 136);
        v12 = 0;
        *(_DWORD *)v22 = 16;
        *(_WORD *)(v22 + 4) = *(_WORD *)(a1 + 114);
        *(_WORD *)(v22 + 6) = 24;
        *(_QWORD *)(v22 + 8) = v11;
        v13 = *(unsigned __int16 *)(v22 + 4);
        v14 = &v11[v13];
        v15 = &v14[3 * v13];
        if ( (_WORD)v13 )
        {
          do
          {
            *v11 = v14;
            ++v12;
            v14[2] = v15;
            ++v11;
            *((_WORD *)v14 + 1) = 0;
            v15 += 24;
            *((_DWORD *)v14 + 3) = 48;
            v14 += 3;
          }
          while ( v12 < *(unsigned __int16 *)(v22 + 4) );
        }
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
                   WdfDriverGlobals,
                   v6,
                   v21,
                   4788243LL,
                   v23,
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
            v21,
            HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete,
            a1);
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                     WdfDriverGlobals,
                     v21,
                     v6,
                     0LL);
          if ( (_BYTE)result )
            goto LABEL_21;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64))(WdfFunctions_01015 + 2032))(
                     WdfDriverGlobals,
                     v21);
          v8 = result;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_21;
          v9 = 54;
          goto LABEL_20;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = 53;
          goto LABEL_20;
        }
      }
      else
      {
        v23 = 0LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = 52;
          goto LABEL_20;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 51;
      goto LABEL_20;
    }
  }
  else
  {
    v21 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 50;
LABEL_20:
      LODWORD(v16) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 2520),
                 2u,
                 3u,
                 v9,
                 (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
                 v16);
    }
  }
LABEL_21:
  if ( v8 >= 0 )
    return result;
  if ( v21 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v24 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v3 = a1 + 1264;
  v2 = 2038;
  return HUBSM_AddEvent(v3, v2);
}
