/*
 * XREFs of ??1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ @ 0x1C004031C
 * Callers:
 *     ??_EDXGK_VIRTUAL_GPU_PARAV@@UEAAPEAXI@Z @ 0x1C00403B0 (--_EDXGK_VIRTUAL_GPU_PARAV@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x1C0040374 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(DXGK_VIRTUAL_GPU_PARAV *this, unsigned int a2)
{
  void *v3; // rcx
  void *v4; // rcx

  *(_QWORD *)this = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
  v3 = (void *)*((_QWORD *)this + 39);
  if ( v3 )
    CDriverStoreCopy::`scalar deleting destructor'(v3, a2);
  v4 = (void *)*((_QWORD *)this + 27);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
}
