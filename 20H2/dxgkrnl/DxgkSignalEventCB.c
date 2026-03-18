/*
 * XREFs of DxgkSignalEventCB @ 0x1C0040EC0
 * Callers:
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0042E08 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025E1E4 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?DxgkSignalEventCBCblt@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0025BC0 (-DxgkSignalEventCBCblt@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C004099C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0237914 (-DxgkSignalEventCBPaged@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 */

__int64 __fastcall DxgkSignalEventCB(struct _DXGKARGCB_SIGNALEVENT *a1)
{
  __int64 v2; // rdx
  struct _MDL *v3; // r9
  struct VMBCHANNEL__ *v5; // rcx
  HANDLE hEvent; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+2Ch] [rbp-34h]
  int v16; // [rsp+30h] [rbp-30h]
  int v17; // [rsp+34h] [rbp-2Ch]
  HANDLE v18; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int16 v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+4Ah] [rbp-16h]
  __int16 v22; // [rsp+4Eh] [rbp-12h]

  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() && (a1->Flags & 1) != 0 )
    return DxgkSignalEventCBCblt(a1, v2);
  v5 = (struct VMBCHANNEL__ *)*((_QWORD *)a1->hDxgkProcess + 14);
  if ( v5 )
  {
    v19 = *((_QWORD *)a1->hDxgkProcess + 9);
    v17 = 0;
    hEvent = a1->hEvent;
    v21 = 0;
    v22 = 0;
    v16 = v19 != 0 ? 3 : 0;
    v13 = 0LL;
    v14 = 0;
    v15 = 2;
    v18 = hEvent;
    v20 = 0;
    v7 = VmBusSendAsyncMessage(v5, (struct DXGKVMB_COMMAND_BASE *)&v13, 48LL, v3);
    v10 = v7;
    if ( v7 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdError(v11);
    }
    return (unsigned int)v10;
  }
  else if ( KeGetCurrentIrql() < 2u )
  {
    return DxgkSignalEventCBPaged(a1);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(0LL, v2);
    *(_QWORD *)(v12 + 24) = 14181LL;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}
