/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsAdd @ 0x1C0039F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C000D7B0 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0012BE0 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     TR_Create @ 0x1C006AA48 (TR_Create.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // r13d
  __int64 i; // r12
  int v16; // edx
  int v17; // edx
  __int64 v19; // [rsp+50h] [rbp-39h] BYREF
  __int128 v20; // [rsp+58h] [rbp-31h] BYREF
  __int64 v21; // [rsp+68h] [rbp-21h]
  _QWORD v22[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  __int64 v26; // [rsp+90h] [rbp+7h]
  __int64 v27; // [rsp+98h] [rbp+Fh]
  void *v28; // [rsp+A0h] [rbp+17h]
  __int64 v29; // [rsp+100h] [rbp+77h] BYREF
  unsigned int v30; // [rsp+108h] [rbp+7Fh]

  v29 = a3;
  v3 = a2;
  v21 = 0LL;
  v20 = 0LL;
  HIDWORD(v22[0]) = 0;
  v23 = 0LL;
  v26 = 0LL;
  v19 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00601A8);
  v6 = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v5 + 80),
      v7,
      13,
      97,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v3);
  }
  if ( !*(_BYTE *)(v6 + 37) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v6 + 80),
        2,
        13,
        98,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144));
    return (unsigned int)-1073741811;
  }
  if ( !(_DWORD)v3 || (unsigned int)v3 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 88LL) + 112LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v6 + 80),
        2,
        13,
        99,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v3);
    return (unsigned int)-1073741811;
  }
  v28 = off_1C0060338;
  v22[0] = 56LL;
  v24 = 1;
  v22[1] = Endpoint_EvtStaticStreamsCleanupCallback;
  v8 = 1;
  v25 = 1;
  v23 = 0LL;
  v26 = 0LL;
  v27 = 104 * v3 + 48;
  if ( *(_BYTE *)(v6 + 1336) )
    v8 = 2;
  v24 = v8;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD *, __int64 *))qword_1C0061740)(
         UcxDriverGlobals,
         a1,
         &v29,
         v22,
         &v19);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v19,
            off_1C0060338);
    v13 = v12;
    *(_QWORD *)v12 = v6;
    *(_DWORD *)(v12 + 8) = v3;
    if ( (unsigned int)v3 >= 4 )
    {
      if ( (unsigned int)v3 >= 8 )
      {
        if ( (unsigned int)v3 >= 0x10 )
        {
          if ( (unsigned int)v3 >= 0x20 )
          {
            if ( (unsigned int)v3 >= 0x40 )
              *(_DWORD *)(v12 + 12) = 7 - ((unsigned int)v3 < 0x80);
            else
              *(_DWORD *)(v12 + 12) = 5;
          }
          else
          {
            *(_DWORD *)(v12 + 12) = 4;
          }
        }
        else
        {
          *(_DWORD *)(v12 + 12) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v12 + 12) = 2;
      }
    }
    else
    {
      *(_DWORD *)(v12 + 12) = 1;
    }
    v14 = 0;
    for ( i = v12 + 48; ; i += 104LL )
    {
      v30 = v14 + 1;
      v10 = TR_Create(*(_QWORD *)v6, v6, v19, v14 + 1, 104LL * v14 + v13 + 48);
      if ( v10 < 0 )
        break;
      v14 = v30;
      *((_QWORD *)&v20 + 1) = *(_QWORD *)(*(_QWORD *)i + 72LL);
      *(_QWORD *)&v20 = 24LL;
      v21 = v30;
      ((void (__fastcall *)(__int64, __int64, __int128 *))qword_1C0061738)(UcxDriverGlobals, v19, &v20);
      if ( v14 >= (unsigned int)v3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_ddd(
            *(_QWORD *)(v6 + 80),
            v17,
            13,
            102,
            (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
            *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
            *(_DWORD *)(v6 + 144),
            v3);
        }
        return 0;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v6 + 80),
        v16,
        13,
        101,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
        *(_DWORD *)(v6 + 144),
        v14,
        v10);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 135LL);
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v6 + 80),
      v11,
      13,
      100,
      (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 135LL),
      *(_DWORD *)(v6 + 144),
      v9);
  }
  return (unsigned int)v10;
}
