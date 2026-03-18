/*
 * XREFs of ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036BFE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C033F7C8 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyKeyedMutex(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v2 )
  {
    v6 = DXGKEYEDMUTEX::DestroyLocal(*(unsigned int *)(v2 + 24), v3, v4, v5);
    v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
    v9 = v6;
    VmBusCompletePacket(v7, &v9, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
