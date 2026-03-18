/*
 * XREFs of Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C003A9E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C003F804 (TR_EnableForwardProgress_Internal.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointEnableForwardProgress(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // edi
  unsigned __int16 v6; // r9
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+38h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00611A8);
  v4 = v3;
  if ( *(_BYTE *)(v3 + 37) )
  {
    v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 48LL), a2);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 59;
        v10 = v5;
        v9 = *(_DWORD *)(v4 + 144);
        v8 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
LABEL_8:
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(v4 + 80),
          3u,
          0xDu,
          v6,
          (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
          v8,
          v9,
          v10);
        return (unsigned int)v5;
      }
      return (unsigned int)v5;
    }
LABEL_9:
    *(_BYTE *)(v4 + 36) = 1;
    return (unsigned int)v5;
  }
  v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(v3 + 88), a2);
  if ( v5 >= 0 )
    goto LABEL_9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 60;
    v10 = v5;
    v9 = *(_DWORD *)(v4 + 144);
    v8 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
    goto LABEL_8;
  }
  return (unsigned int)v5;
}
