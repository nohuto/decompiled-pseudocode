/*
 * XREFs of ?TransformRgn@@YGPAUHRGN__@@PAU1@PAUtagXFORM@@@Z @ 0x15014E
 * Callers:
 *     _PhysicalToLogicalInPlaceRgnWorker@12 @ 0x36FD6 (_PhysicalToLogicalInPlaceRgnWorker@12.c)
 *     _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12 (_LogicalToPhysicalInPlaceRgnWorker@12.c)
 * Callees:
 *     <none>
 */

int __fastcall TransformRgn(int a1, int a2)
{
  int Region; // edi
  int RegionData; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // esi

  Region = 0;
  RegionData = GreGetRegionData(a1, 0, 0);
  v4 = RegionData;
  if ( RegionData > 0 )
  {
    v5 = Win32AllocPool(RegionData, 1919775573);
    v6 = v5;
    if ( v5 )
    {
      if ( GreGetRegionData(a1, v4, v5) )
        Region = GreExtCreateRegion(a2, v4, v6);
      Win32FreePool(v6);
    }
  }
  return Region;
}
