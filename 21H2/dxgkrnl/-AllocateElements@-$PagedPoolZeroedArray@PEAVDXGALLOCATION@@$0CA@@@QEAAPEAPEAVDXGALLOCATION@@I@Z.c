/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C02DB5B0
 * Callers:
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0366FC0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  void *v7; // rcx

  if ( a2 <= 0x20 )
  {
    v7 = a1 + 1;
    *a1 = (__int64)v7;
    if ( a2 )
      memset(v7, 0, 8LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL, a4);
  }
  result = *a1;
  *((_DWORD *)a1 + 66) = a2;
  return result;
}
