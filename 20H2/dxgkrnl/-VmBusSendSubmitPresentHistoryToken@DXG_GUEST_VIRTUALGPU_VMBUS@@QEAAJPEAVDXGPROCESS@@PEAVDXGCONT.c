/*
 * XREFs of ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00D5DE8
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0102FF0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024C330 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0283E84 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
        DXG_VMBUS_CHANNEL_BASE *a1,
        DXGPROCESS *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int HostProcess; // eax
  struct _MDL *v12; // r9
  int v13; // edx
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-50h]
  int v18; // [rsp+2Ch] [rbp-4Ch]
  int v19; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-30h]
  __int64 v23; // [rsp+50h] [rbp-28h]
  __int64 v24; // [rsp+58h] [rbp-20h]
  int v25; // [rsp+60h] [rbp-18h]

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v13 = 0;
  v17 = HostProcess;
  v16 = 0LL;
  v18 = 0;
  v19 = 34;
  if ( a3 )
    v14 = *(_DWORD *)(a3 + 28);
  else
    v14 = 0;
  v20 = v14;
  v23 = a7;
  v22 = a6;
  v21 = a5;
  v24 = a4;
  if ( a8 )
    v13 = *(_DWORD *)(a8 + 44);
  v25 = v13;
  return DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(a1, (struct DXGKVMB_COMMAND_BASE *)&v16, 0x48u, v12);
}
