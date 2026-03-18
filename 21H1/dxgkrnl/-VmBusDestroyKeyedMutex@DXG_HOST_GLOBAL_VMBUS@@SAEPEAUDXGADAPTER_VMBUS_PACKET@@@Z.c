/*
 * XREFs of ?VmBusDestroyKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BF70
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E87C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C028BEF0 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyKeyedMutex(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  int v3; // eax
  struct VMBPACKETCOMPLETION__ *v4; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v2 )
  {
    v3 = DXGKEYEDMUTEX::DestroyLocal(*(_DWORD *)(v2 + 24));
    v4 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v6 = v3;
    VmBusCompletePacket(v4, &v6, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
