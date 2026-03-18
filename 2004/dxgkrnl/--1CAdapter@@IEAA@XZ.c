/*
 * XREFs of ??1CAdapter@@IEAA@XZ @ 0x1C0012744
 * Callers:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0012710 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     DxgkCloseAdapterInternal @ 0x1C0151768 (DxgkCloseAdapterInternal.c)
 *     DxgkDestroyDeviceInternal @ 0x1C0151780 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C0151798 (DxgkDestroyContextInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01517B0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 */

void __fastcall CAdapter::~CAdapter(CAdapter *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAdapter::`vftable';
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 != (void *)-1LL )
    ObCloseHandle(v2, 1);
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *((_DWORD *)this + 12) )
  {
    v4.hSyncObject = *((_DWORD *)this + 12);
    DxgkCddDestroySynchronizationObject(&v4);
  }
  if ( *((_DWORD *)this + 16) )
  {
    v4.hSyncObject = *((_DWORD *)this + 16);
    DxgkDestroyContextInternal(&v4);
  }
  if ( *((_DWORD *)this + 9) )
  {
    v4.hSyncObject = *((_DWORD *)this + 9);
    DxgkDestroyDeviceInternal(&v4);
  }
  if ( *((_DWORD *)this + 8) )
  {
    v4.hSyncObject = *((_DWORD *)this + 8);
    DxgkCloseAdapterInternal(&v4);
  }
}
