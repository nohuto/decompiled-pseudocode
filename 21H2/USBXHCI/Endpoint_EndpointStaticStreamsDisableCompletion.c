/*
 * XREFs of Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C00384A0
 * Callers:
 *     <none>
 * Callees:
 *     TR_Disable_Internal @ 0x1C0001578 (TR_Disable_Internal.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0037764 (XilEndpoint_FreeStreamContextArray.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsDisableCompletion(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 **v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned int i; // esi
  int v9; // eax
  _QWORD *v10; // rcx
  _OWORD v12[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h]

  v13 = 0LL;
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a1,
    v12);
  v4 = *((_QWORD *)&v12[0] + 1);
  v5 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0061090);
  v6 = *v5;
  v7 = **v5;
  if ( a2 < 0 )
  {
    v10 = *(_QWORD **)(v7 + 128);
    *(_QWORD *)(v7 + 136) = v6;
    XilEndpoint_FreeStreamContextArray(v10);
    ExFreePoolWithTag(*(PVOID *)(v7 + 128), 0x49434858u);
    *(_QWORD *)(v7 + 128) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v7 + 80),
        2u,
        0xDu,
        0x72u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL),
        *(_DWORD *)(v7 + 144),
        *((_DWORD *)v6 + 2),
        a2);
    v9 = -2147481600;
  }
  else
  {
    for ( i = 1; i <= *((_DWORD *)v6 + 2); ++i )
      TR_Disable_Internal(v6[13 * i - 7], 1);
    XilEndpoint_FreeStreamContextArray(v6);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v7 + 80),
        4u,
        0xDu,
        0x71u,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL),
        *(_DWORD *)(v7 + 144),
        *((_DWORD *)v6 + 2));
    v9 = 0;
  }
  *(_DWORD *)(v4 + 4) = v9;
  if ( a2 >= 0 )
    ESM_AddEvent((KSPIN_LOCK *)(v7 + 288), 142);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
