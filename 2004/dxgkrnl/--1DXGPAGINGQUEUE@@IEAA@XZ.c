/*
 * XREFs of ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00E55E4
 * Callers:
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x1C00022D8 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0002378 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGPAGINGQUEUE::~DXGPAGINGQUEUE(DXGPAGINGQUEUE *this, __int64 a2)
{
  DXGDEVICESYNCOBJECT *v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  DXGPROCESS *v8; // rcx
  int v9; // ebx
  __int64 v10; // rdi
  struct _MDL *v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned int HostProcess; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  int v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+48h] [rbp-10h]

  if ( !*((_BYTE *)this + 72) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 36LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v3 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
  if ( v3 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v3);
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v4);
  if ( *((_DWORD *)this + 7) )
  {
    v6 = *((_QWORD *)this + 2);
    if ( *(_DWORD *)(v6 + 576) != 4 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      v8 = *(DXGPROCESS **)(v6 + 40);
      v9 = *((_DWORD *)this + 7);
      v12 = 0LL;
      v10 = *(_QWORD *)(v7 + 16);
      v14 = 0;
      HostProcess = DXGPROCESS::GetHostProcess(v8);
      v15 = 10;
      v16 = v9;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        (DXG_VMBUS_CHANNEL_BASE *)(v10 + 4240),
        (struct DXGKVMB_COMMAND_BASE *)&v12,
        0x20u,
        0LL,
        0LL,
        v11);
    }
  }
  *((_QWORD *)this + 2) = 0LL;
}
