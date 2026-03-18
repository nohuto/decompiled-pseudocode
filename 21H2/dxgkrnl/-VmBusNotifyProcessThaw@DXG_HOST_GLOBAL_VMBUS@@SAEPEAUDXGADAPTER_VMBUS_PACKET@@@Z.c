/*
 * XREFs of ?VmBusNotifyProcessThaw@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0370860
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C015BE1C (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusNotifyProcessThaw(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGPROCESS *Current; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGPROCESS *)((char *)Current + 104), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  DXGPROCESS::NotifyProcessThaw(Current, v5, v6);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return 0;
}
