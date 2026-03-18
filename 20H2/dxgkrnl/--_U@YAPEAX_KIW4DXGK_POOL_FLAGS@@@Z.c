/*
 * XREFs of ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00269D8
 * Callers:
 *     ?VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D6120 (-VmBusCreateAllocationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8870 (-VmBusQueryAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall operator new[](unsigned __int64 a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    a1 = 1LL;
  if ( a1 <= 0x7FFFFFFF )
    return ExAllocatePool2(a3, a1, 1265072196LL);
  else
    return 0LL;
}
