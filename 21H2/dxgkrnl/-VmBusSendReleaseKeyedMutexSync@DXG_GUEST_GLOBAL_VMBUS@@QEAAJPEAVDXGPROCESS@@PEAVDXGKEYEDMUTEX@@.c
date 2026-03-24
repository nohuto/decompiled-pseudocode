/*
 * XREFs of ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x1C024B3D4
 * Callers:
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C0291980 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024D240 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C0290D94 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendReleaseKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const void **a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int HostHandle; // eax
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  _DWORD *v12; // rdi
  int v14; // ebx
  unsigned int HostProcess; // eax
  struct _MDL *v16; // r9
  unsigned int v17; // ebx

  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  v10 = *((_DWORD *)a3 + 40) + 48;
  v11 = HostHandle;
  v12 = operator new(v10, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v12 )
    return 3221225495LL;
  v14 = *((_DWORD *)a3 + 8);
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  *(_QWORD *)v12 = 0LL;
  v12[2] = HostProcess;
  *((_QWORD *)v12 + 4) = a5;
  *((_QWORD *)v12 + 5) = a6;
  v12[3] = 1;
  v12[4] = 1015;
  v12[6] = v14;
  v12[7] = v11;
  memmove(v12 + 12, a3[19], *((unsigned int *)a3 + 40));
  v17 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (struct DXGKVMB_COMMAND_BASE *)v12, v10, v16);
  operator delete[](v12);
  return v17;
}
