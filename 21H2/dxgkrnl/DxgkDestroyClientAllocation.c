/*
 * XREFs of DxgkDestroyClientAllocation @ 0x1C02D7FFC
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C019B990 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C019EB60 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C03301AC (-DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C02D5AC0 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C02D5BBC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C02E695C (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DxgkDestroyClientAllocation(
        __int64 a1,
        DXGDEVICE *a2,
        __int64 a3,
        __int64 a4,
        struct DXGALLOCATION **P)
{
  struct DXGALLOCATION **v6; // r14
  __int64 v7; // rsi
  struct DXGALLOCATION *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = (struct DXGALLOCATION **)a4;
  if ( P )
  {
    DXGDEVICE::DestroyClientResource(a2, P, a3, a4);
  }
  else if ( (_DWORD)a3 )
  {
    v7 = (unsigned int)a3;
    do
    {
      v8 = *v6;
      DXGDEVICE::RemoveAllocationFromList(a2, *v6, 0);
      DXGDEVICE::DestroyClientAllocations(a2, v8, v9, v10);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
}
