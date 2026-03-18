/*
 * XREFs of ??1CAdapter@@IEAA@XZ @ 0x1C001BF04
 * Callers:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C001BED0 (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     DxgkCloseAdapterInternal @ 0x1C01DA790 (DxgkCloseAdapterInternal.c)
 *     DxgkDestroyDeviceInternal @ 0x1C01DA7A8 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C01DA7C0 (DxgkDestroyContextInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01DA7E0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 */

void __fastcall CAdapter::~CAdapter(CAdapter *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAdapter::`vftable';
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 != (void *)-1LL )
    ObCloseHandle(v2, 1);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *((_DWORD *)this + 14) )
  {
    v4.hSyncObject = *((_DWORD *)this + 14);
    DxgkCddDestroySynchronizationObject(&v4);
  }
  if ( *((_DWORD *)this + 18) )
  {
    v4.hSyncObject = *((_DWORD *)this + 18);
    DxgkDestroyContextInternal(&v4);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v4.hSyncObject = *((_DWORD *)this + 11);
    DxgkDestroyDeviceInternal(&v4);
  }
  if ( *((_DWORD *)this + 10) )
  {
    v4.hSyncObject = *((_DWORD *)this + 10);
    DxgkCloseAdapterInternal(&v4);
  }
  *((_QWORD *)this + 4) = 0LL;
}
