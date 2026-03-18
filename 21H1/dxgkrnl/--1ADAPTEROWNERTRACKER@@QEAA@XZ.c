/*
 * XREFs of ??1ADAPTEROWNERTRACKER@@QEAA@XZ @ 0x1C0011D6C
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0133440 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ @ 0x1C00117DC (-PopWorkerThreadOfExclusiveOwner@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER(ADAPTEROWNERTRACKER *this)
{
  PERESOURCE *v2; // rcx
  PERESOURCE *v3; // rcx

  v2 = (PERESOURCE *)*((_QWORD *)this + 1);
  if ( v2 )
    DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v2);
  v3 = (PERESOURCE *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    if ( *((PERESOURCE **)this + 1) != v3 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v3);
  }
}
