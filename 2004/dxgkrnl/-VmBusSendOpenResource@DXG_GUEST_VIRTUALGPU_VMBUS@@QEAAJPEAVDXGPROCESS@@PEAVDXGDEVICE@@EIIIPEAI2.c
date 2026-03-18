/*
 * XREFs of ?VmBusSendOpenResource@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EIIIPEAI2@Z @ 0x1C024A33C
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0115C38 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C011AE60 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024D0C8 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenResource(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int HostProcess; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v18; // esi
  unsigned int *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  unsigned int *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  struct _MDL *v27; // [rsp+28h] [rbp-38h]
  __int64 v28; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-28h]
  int v30; // [rsp+3Ch] [rbp-24h]
  int v31; // [rsp+40h] [rbp-20h]
  int v32; // [rsp+48h] [rbp-18h]
  char v33; // [rsp+4Ch] [rbp-14h]
  unsigned int v34; // [rsp+50h] [rbp-10h]
  unsigned int v35; // [rsp+54h] [rbp-Ch]
  unsigned int v36; // [rsp+58h] [rbp-8h]
  unsigned int v37; // [rsp+98h] [rbp+38h] BYREF

  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v15 = a6;
  v28 = 0LL;
  v30 = 0;
  v29 = HostProcess;
  v32 = *((_DWORD *)a3 + 110);
  v34 = a5;
  v36 = a7;
  v31 = 32;
  v33 = a4;
  v35 = a6;
  if ( a6 < 0x8000 )
  {
    v18 = (4 * a6 + 15) & 0xFFFFFFF8;
    v19 = (unsigned int *)operator new(v18, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( v19 )
    {
      v37 = (4 * v15 + 15) & 0xFFFFFFF8;
      v22 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
              this,
              (struct DXGKVMB_COMMAND_BASE *)&v28,
              0x30u,
              v19,
              &v37,
              v27);
      if ( v22 < 0 || (v22 = -1073741823, v37 < v18) || (v22 = v19[1], v22 < 0) )
      {
        v26 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v26 + 24) = v22;
        WdLogEvent5_WdError(v26);
      }
      else
      {
        *a8 = *v19;
        if ( (_DWORD)v15 )
        {
          v23 = a9;
          v24 = v15;
          v25 = (char *)(v19 + 2) - (char *)a9;
          do
          {
            *v23 = *(unsigned int *)((char *)v23 + v25);
            ++v23;
            --v24;
          }
          while ( v24 );
        }
      }
      operator delete[](v19);
      return (unsigned int)v22;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = 8563LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
}
