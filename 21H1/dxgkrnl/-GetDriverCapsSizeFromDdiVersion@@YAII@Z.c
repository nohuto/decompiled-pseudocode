/*
 * XREFs of ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C017A358
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023B6B0 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDriverCapsSizeFromDdiVersion(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (unsigned int)a1;
  if ( (unsigned int)a1 >= 0x9002 )
    return 584LL;
  if ( (unsigned int)a1 >= 0x5011 )
    return 576LL;
  if ( (unsigned int)a1 >= 0x4000 )
    return 552LL;
  if ( (unsigned int)a1 >= 0x3000 )
    return 544LL;
  if ( (unsigned int)a1 >= 0x2001 )
    return 528LL;
  if ( (unsigned int)a1 < 0x2000 && (unsigned int)a1 >= 0x104E )
    return 336LL;
  v4 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v4 + 24) = v2;
  WdLogEvent5_WdError(v4);
  return 0LL;
}
