/*
 * XREFs of DxgkSignalEventCB @ 0x1C003FF90
 * Callers:
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0041EE8 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AEC4 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003FA94 (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0234838 (-DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 */

__int64 __fastcall DxgkSignalEventCB(const struct _DXGKARGCB_SIGNALEVENT *a1)
{
  _QWORD *hDxgkProcess; // rdx
  struct VMBCHANNEL__ *v2; // r9
  HANDLE hEvent; // rax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+2Ch] [rbp-34h]
  int v14; // [rsp+30h] [rbp-30h]
  int v15; // [rsp+34h] [rbp-2Ch]
  HANDLE v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int16 v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+4Ah] [rbp-16h]
  __int16 v20; // [rsp+4Eh] [rbp-12h]

  hDxgkProcess = a1->hDxgkProcess;
  v2 = (struct VMBCHANNEL__ *)*((_QWORD *)a1->hDxgkProcess + 14);
  if ( v2 )
  {
    v17 = hDxgkProcess[9];
    v15 = 0;
    hEvent = a1->hEvent;
    v19 = 0;
    v20 = 0;
    v14 = v17 != 0 ? 3 : 0;
    v11 = 0LL;
    v12 = 0;
    v13 = 2;
    v16 = hEvent;
    v18 = 0;
    v4 = VmBusSendAsyncMessage(v2, (struct DXGKVMB_COMMAND_BASE *)&v11, 48LL, (struct _MDL *)v2);
    v7 = v4;
    if ( v4 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdError(v8);
    }
    return (unsigned int)v7;
  }
  else if ( KeGetCurrentIrql() < 2u )
  {
    return DxgkSignalEventCBPaged(a1);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(a1, hDxgkProcess);
    *(_QWORD *)(v10 + 24) = 14038LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}
