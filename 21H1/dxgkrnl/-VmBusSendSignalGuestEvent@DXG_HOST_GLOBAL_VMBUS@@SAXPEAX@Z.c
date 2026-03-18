/*
 * XREFs of ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C003FE00
 * Callers:
 *     ?REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@I@Z @ 0x1C0014A70 (-REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@I@Z.c)
 *     REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___ @ 0x1C004D030 (REMOTEVSYNCMAPPING--IterateList__lambda_3d79675884e940cafd73bf406652b69f___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003FA94 (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(_QWORD *P, __int64 a2, __int64 a3, struct _MDL *a4)
{
  char v5; // al
  struct VMBCHANNEL__ *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  char v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+49h] [rbp-17h]
  int v20; // [rsp+4Ah] [rbp-16h]
  __int16 v21; // [rsp+4Eh] [rbp-12h]

  v16 = P[1];
  v18 = *((_BYTE *)P + 16);
  v5 = *((_BYTE *)P + 18);
  v6 = (struct VMBCHANNEL__ *)*P;
  v19 = v5;
  v15 = 0LL;
  v20 = 0;
  v21 = 0;
  v12 = 0LL;
  v13 = 0;
  v14 = 2;
  v17 = 0LL;
  v7 = VmBusSendAsyncMessage(v6, (struct DXGKVMB_COMMAND_BASE *)&v12, 48LL, a4);
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  if ( !*((_BYTE *)P + 17) )
    ExFreePoolWithTag(P, 0x4B677844u);
}
