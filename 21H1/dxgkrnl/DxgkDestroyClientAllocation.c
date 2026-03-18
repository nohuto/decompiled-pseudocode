/*
 * XREFs of DxgkDestroyClientAllocation @ 0x1C0225724
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010C740 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C01204C0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C027B58C (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C015B4BC (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0223614 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0223708 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        DXGDEVICE *a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        struct DXGALLOCATION **P)
{
  __int64 v7; // rsi
  struct DXGALLOCATION *v8; // rbx

  if ( P )
  {
    DXGDEVICE::DestroyClientResource(a2, P);
  }
  else if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *a4;
      DXGDEVICE::RemoveAllocationFromList(a2, *a4, 0);
      DXGDEVICE::DestroyClientAllocations(a2, v8);
      ++a4;
      --v7;
    }
    while ( v7 );
  }
}
