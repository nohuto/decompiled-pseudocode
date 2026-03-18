/*
 * XREFs of ?DxgkNotifyProcessFreezeCallout@@YAXPEAU_EPROCESS@@@Z @ 0x1C00E2560
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00E2BF8 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

void __fastcall DxgkNotifyProcessFreezeCallout(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rax
  __int64 v3; // rdx
  DXGPROCESS *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  struct DXGGLOBAL *Global; // rax
  DXG_VMBUS_CHANNEL_BASE *v10; // rcx
  struct _MDL *v11; // [rsp+28h] [rbp-21h]
  _BYTE v12[16]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v14; // [rsp+50h] [rbp+7h] BYREF
  int v15; // [rsp+58h] [rbp+Fh]
  int v16; // [rsp+5Ch] [rbp+13h]
  int v17; // [rsp+60h] [rbp+17h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp+1Fh] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  v4 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && *(char *)(ProcessDxgProcess + 347) >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v5);
    KeStackAttachProcess(PROCESS, &ApcState);
    v8 = *((_DWORD *)v4 + 106);
    if ( v8 )
    {
      Global = DXGGLOBAL::GetGlobal(v7, v6);
      v14 = 0LL;
      v15 = v8;
      v10 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)Global + 197);
      v16 = 1;
      v17 = 1007;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v10, (struct DXGKVMB_COMMAND_BASE *)&v14, 0x18u, 0LL, 0LL, v11);
    }
    DXGPROCESS::NotifyProcessFreeze(v4);
    KeUnstackDetachProcess(&ApcState);
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v3);
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v3);
}
