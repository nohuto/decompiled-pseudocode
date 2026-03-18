/*
 * XREFs of Endpoint_EvaluateContextCompletion @ 0x1C0018940
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C000182C (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dddL @ 0x1C000C36C (WPP_RECORDER_SF_dddL.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x1C0048B8C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 */

__int64 __fastcall Endpoint_EvaluateContextCompletion(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  _QWORD *v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+40h] [rbp-28h]

  v2 = *(__int64 **)(a1 + 48);
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)*v2 + 120LL), v2[1]);
  v6 = 0;
  v2[1] = 0LL;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *v2;
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
        v9,
        13,
        28,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        *(_BYTE *)(*(_QWORD *)(*v2 + 16) + 135LL),
        *(_DWORD *)(*v2 + 144));
    }
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dddL(
        *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
        2u,
        *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16) + 135LL),
        0x1Eu,
        v10);
LABEL_12:
    v6 = -1073741823;
    goto LABEL_7;
  }
  *(_WORD *)(*v2 + 100) = *((_WORD *)v2 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *(_DWORD *)(*v2 + 144);
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)*v2 + 72LL),
      4u,
      0xDu,
      0x1Du,
      (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(*v2 + 16) + 135LL));
  }
  v5 = (_QWORD *)*v2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    McTemplateK0pppnnn_EtwWriteTransfer(
      (_DWORD)v5 + 103,
      (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_UPDATE,
      0,
      *(_QWORD *)(*v5 + 8LL),
      v5[1],
      v5[3],
      v11,
      (__int64)(v5 + 12),
      v12,
      (__int64)v5 + 103);
LABEL_7:
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *))(WdfFunctions_01023 + 1632))(
         WdfDriverGlobals,
         v2,
         v5);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v7,
           v6);
}
