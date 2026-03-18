/*
 * XREFs of ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0063930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z @ 0x1C0063BC0 (-CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C011A590 (DxgkShareObjectsInternal.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C014FB40 (DxgkGetSharedSyncObjectType.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C0150058 (DxgkCreateContextVirtualInternal.c)
 */

__int64 __fastcall CAdapter::AllocateCascadedSignalingResources(
        CAdapter *this,
        void **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  PVOID v8; // r12
  PVOID v9; // r15
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // r13d
  int ContextVirtualInternal; // edi
  int v14; // eax
  int CurrentProcess; // eax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v17; // eax
  int v18; // eax
  struct _OBJECT_TYPE *v19; // rax
  NTSTATUS v20; // eax
  int v21; // eax
  PVOID Object; // [rsp+58h] [rbp-69h] BYREF
  unsigned int Src; // [rsp+60h] [rbp-61h] BYREF
  int v25; // [rsp+64h] [rbp-5Dh] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-59h] BYREF
  PVOID v27; // [rsp+78h] [rbp-49h] BYREF
  _OWORD v28[2]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-21h]
  __int64 v30[4]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v31; // [rsp+C8h] [rbp+7h]

  v6 = 0;
  Src = 0;
  v8 = 0LL;
  LODWORD(Object) = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = CAdapter::CreateSyncObject(this, 18LL, &Src);
  v12 = Src;
  ContextVirtualInternal = v11;
  if ( v11 < 0 )
    goto LABEL_14;
  v14 = CAdapter::CreateSyncObject(this, 19LL, &Object);
  v10 = (unsigned int)Object;
  ContextVirtualInternal = v14;
  if ( v14 < 0 )
    goto LABEL_14;
  Src = v12;
  *(_OWORD *)Handle = 0LL;
  v25 = (int)Object;
  v31 = 0LL;
  v30[0] = 48LL;
  v30[3] = 512LL;
  v30[1] = 0LL;
  v30[2] = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ContextVirtualInternal = DxgkShareObjectsInternal(
                             0,
                             0,
                             CurrentProcess,
                             1,
                             &Src,
                             (__int64)v30,
                             0x10000000u,
                             (__int64)Handle,
                             0LL);
  if ( ContextVirtualInternal >= 0 )
  {
    SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
    Object = 0LL;
    v17 = ObReferenceObjectByHandle(Handle[0], 0x1F0000u, SharedSyncObjectType, 0, &Object, 0LL);
    v8 = Object;
    ContextVirtualInternal = v17;
    if ( v17 >= 0 )
    {
      v18 = PsGetCurrentProcess();
      ContextVirtualInternal = DxgkShareObjectsInternal(
                                 0,
                                 0,
                                 v18,
                                 1,
                                 &v25,
                                 (__int64)v30,
                                 0x10000000u,
                                 (__int64)&Handle[1],
                                 0LL);
      if ( ContextVirtualInternal >= 0 )
      {
        v19 = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
        v27 = 0LL;
        v20 = ObReferenceObjectByHandle(Handle[1], 0x1F0000u, v19, 0, &v27, 0LL);
        v9 = v27;
        ContextVirtualInternal = v20;
      }
    }
  }
  if ( Handle[0] )
    ObCloseHandle(Handle[0], 0);
  if ( Handle[1] )
    ObCloseHandle(Handle[1], 0);
  if ( ContextVirtualInternal < 0
    || (v29 = 0LL,
        v21 = *((_DWORD *)this + 9),
        memset(v28, 0, sizeof(v28)),
        HIDWORD(v28[0]) = 8,
        LODWORD(v28[0]) = v21,
        ContextVirtualInternal = DxgkCreateContextVirtualInternal(v28),
        ContextVirtualInternal < 0) )
  {
LABEL_14:
    (*(void (__fastcall **)(CAdapter *, PVOID, _QWORD, PVOID, unsigned int, _DWORD))(*(_QWORD *)this + 40LL))(
      this,
      v8,
      v12,
      v9,
      v10,
      0);
    *a2 = 0LL;
    *a3 = 0;
    *a4 = 0LL;
    *a5 = 0;
  }
  else
  {
    v6 = v29;
    *a2 = v8;
    *a3 = v12;
    *a4 = v9;
    *a5 = v10;
  }
  *a6 = v6;
  return (unsigned int)ContextVirtualInternal;
}
