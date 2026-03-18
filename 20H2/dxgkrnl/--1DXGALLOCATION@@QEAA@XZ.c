/*
 * XREFs of ??1DXGALLOCATION@@QEAA@XZ @ 0x1C01028C8
 * Callers:
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C003E6F8 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0102150 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0125DF4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0126A70 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0227E04 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 */

void __fastcall DXGALLOCATION::~DXGALLOCATION(DXGALLOCATION *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x40000) != 0 )
  {
    UnlockParavirtualizedAllocationOnGuest(this, 1u);
    v1 = *((_DWORD *)this + 18);
  }
  if ( (v1 & 0x100000) != 0 )
    DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)this + 5));
}
