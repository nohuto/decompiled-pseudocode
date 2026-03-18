/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C003ACD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     TR_Create @ 0x1C006BCD8 (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r13d
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 i; // r12
  __int64 v14; // rcx
  __int64 v16; // [rsp+28h] [rbp-61h]
  int v17; // [rsp+28h] [rbp-61h]
  __int64 v18; // [rsp+30h] [rbp-59h]
  int v19; // [rsp+30h] [rbp-59h]
  __int64 v20; // [rsp+38h] [rbp-51h]
  int v21; // [rsp+38h] [rbp-51h]
  int v22; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+50h] [rbp-39h] BYREF
  __int128 v24; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+68h] [rbp-21h]
  int v26; // [rsp+6Ch] [rbp-1Dh]
  _QWORD v27[3]; // [rsp+70h] [rbp-19h] BYREF
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]
  __int64 v30; // [rsp+90h] [rbp+7h]
  __int64 v31; // [rsp+98h] [rbp+Fh]
  void *v32; // [rsp+A0h] [rbp+17h]
  __int64 v33; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v34; // [rsp+108h] [rbp+7Fh]

  v33 = a3;
  v25 = 0;
  HIDWORD(v27[0]) = 0;
  v3 = 0;
  v5 = a2;
  v24 = 0LL;
  v23 = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00611A8);
  v7 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = v5;
    v19 = *(_DWORD *)(v6 + 144);
    v17 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v6 + 80),
      4u,
      0xDu,
      0x62u,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      v17,
      v19,
      v21);
  }
  if ( !*(_BYTE *)(v7 + 37) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v7 + 80),
        2,
        13,
        99,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
        *(_DWORD *)(v7 + 144));
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v5 || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 112LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v5;
      LODWORD(v18) = *(_DWORD *)(v7 + 144);
      LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v7 + 80),
        2u,
        0xDu,
        0x64u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v16,
        v18,
        v20);
    }
    return (unsigned int)-1073741811;
  }
  v32 = off_1C0061338;
  v27[0] = 56LL;
  v28 = 1;
  v27[1] = Endpoint_EvtStaticStreamsCleanupCallback;
  v8 = 1;
  v29 = 1;
  v27[2] = 0LL;
  v30 = 0LL;
  v31 = 104 * v5 + 48;
  if ( *(_BYTE *)(v7 + 1336) )
    v8 = 2;
  v28 = v8;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0062840)(
         UcxDriverGlobals,
         a1,
         &v33,
         v27,
         &v23);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v23,
            off_1C0061338);
    v12 = v11;
    *(_QWORD *)v11 = v7;
    *(_DWORD *)(v11 + 8) = v5;
    if ( (unsigned int)v5 >= 4 )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        if ( (unsigned int)v5 >= 0x10 )
        {
          if ( (unsigned int)v5 >= 0x20 )
          {
            if ( (unsigned int)v5 >= 0x40 )
              *(_DWORD *)(v11 + 12) = 7 - ((unsigned int)v5 < 0x80);
            else
              *(_DWORD *)(v11 + 12) = 5;
          }
          else
          {
            *(_DWORD *)(v11 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v11 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v11 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v11 + 12) = 1;
    }
    for ( i = v11 + 48; ; i += 104LL )
    {
      v34 = v3 + 1;
      v10 = TR_Create(*(_QWORD *)v7, v7, v23, v3 + 1, 104LL * v3 + v12 + 48);
      if ( v10 < 0 )
        break;
      v3 = v34;
      v14 = *(_QWORD *)(*(_QWORD *)i + 72LL);
      v26 = 0;
      *((_QWORD *)&v24 + 1) = v14;
      *(_QWORD *)&v24 = 24LL;
      v25 = v34;
      ((void (__fastcall *)(__int64, __int64, __int128 *))qword_1C0062838)(UcxDriverGlobals, v23, &v24);
      if ( v3 >= (unsigned int)v5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v20) = v5;
          LODWORD(v18) = *(_DWORD *)(v7 + 144);
          LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(v7 + 80),
            4u,
            0xDu,
            0x67u,
            (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
            v16,
            v18,
            v20);
        }
        return 0;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = v10;
      LODWORD(v20) = v3;
      LODWORD(v18) = *(_DWORD *)(v7 + 144);
      LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v7 + 80),
        2u,
        0xDu,
        0x66u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v16,
        v18,
        v20,
        v22);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v20) = v9;
    LODWORD(v18) = *(_DWORD *)(v7 + 144);
    LODWORD(v16) = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v7 + 80),
      2u,
      0xDu,
      0x65u,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      v16,
      v18,
      v20);
  }
  return (unsigned int)v10;
}
