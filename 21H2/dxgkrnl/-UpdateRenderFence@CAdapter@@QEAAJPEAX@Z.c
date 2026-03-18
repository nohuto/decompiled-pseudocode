/*
 * XREFs of ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0008188
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0008030 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C001C154 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C0161E20 (DxgkGetSharedSyncObjectType.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0162164 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkDestroyDeviceInternal @ 0x1C01DA7A8 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C01DA7C0 (DxgkDestroyContextInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01DA7E0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkCreateDeviceInternal @ 0x1C01E9ECC (DxgkCreateDeviceInternal.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C01E9F6C (DxgkCreateContextVirtualInternal.c)
 */

__int64 __fastcall CAdapter::UpdateRenderFence(CAdapter *this, void *a2)
{
  int DeviceInternal; // edi
  int v3; // esi
  PVOID v4; // r14
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v8; // eax
  int v10; // eax
  void *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _OWORD v15[6]; // [rsp+38h] [rbp-19h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+6Fh] BYREF

  DeviceInternal = 0;
  v3 = 0;
  v4 = 0LL;
  if ( !a2 )
  {
LABEL_11:
    v11 = (void *)*((_QWORD *)this + 8);
    if ( v11 )
      ObfDereferenceObject(v11);
    v12 = *((_DWORD *)this + 14);
    *((_QWORD *)this + 8) = v4;
    if ( v12 )
    {
      LODWORD(Object) = v12;
      DxgkCddDestroySynchronizationObject((const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)&Object);
    }
    *((_DWORD *)this + 14) = v3;
    if ( !v3 )
    {
      if ( *((_DWORD *)this + 18) )
      {
        LODWORD(Object) = *((_DWORD *)this + 18);
        DxgkDestroyContextInternal(&Object);
        *((_DWORD *)this + 18) = 0;
      }
      if ( *((_DWORD *)this + 11) )
      {
        LODWORD(Object) = *((_DWORD *)this + 11);
        DxgkDestroyDeviceInternal(&Object);
        *((_DWORD *)this + 11) = 0;
      }
    }
    return (unsigned int)DeviceInternal;
  }
  if ( !*((_DWORD *)this + 11) )
  {
    memset(v15, 0, 0x40uLL);
    v13 = *((_DWORD *)this + 10);
    DWORD2(v15[0]) |= 4u;
    LODWORD(v15[0]) = v13;
    DeviceInternal = DxgkCreateDeviceInternal(v15);
    if ( DeviceInternal < 0 )
      goto LABEL_6;
    *((_DWORD *)this + 11) = HIDWORD(v15[0]);
  }
  if ( !*((_DWORD *)this + 18) )
  {
    v14 = *((_DWORD *)this + 11);
    memset(v15, 0, 40);
    HIDWORD(v15[0]) = 8;
    LODWORD(v15[0]) = v14;
    DeviceInternal = DxgkCreateContextVirtualInternal(v15);
    if ( DeviceInternal < 0 )
      goto LABEL_6;
    *((_DWORD *)this + 18) = v15[2];
  }
  SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a2, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
  v4 = Object;
  DeviceInternal = v8;
  if ( v8 >= 0 && Object != *((PVOID *)this + 8) )
  {
    memset(v15, 0, 0x58uLL);
    v10 = *((_DWORD *)this + 11);
    HIDWORD(v15[0]) |= 0x83u;
    DWORD2(v15[0]) = v10;
    *(_QWORD *)&v15[0] = a2;
    DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15);
    if ( DeviceInternal >= 0
      || (HIDWORD(v15[0]) &= ~0x80u, DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15), DeviceInternal >= 0) )
    {
      v3 = v15[1];
      if ( LODWORD(v15[1]) )
        goto LABEL_11;
    }
  }
LABEL_6:
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)DeviceInternal;
}
