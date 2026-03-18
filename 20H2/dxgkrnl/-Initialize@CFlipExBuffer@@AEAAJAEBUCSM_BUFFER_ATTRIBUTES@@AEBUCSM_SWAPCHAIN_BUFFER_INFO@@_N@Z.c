/*
 * XREFs of ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C0011354
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C0011200 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C001151C (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0011828 (-InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C014FB40 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CFlipExBuffer::Initialize(
        CFlipExBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3,
        bool a4)
{
  NTSTATUS v7; // ebx
  void *v8; // rcx
  void *v9; // r14
  __int64 v10; // r14
  __int64 v11; // xmm1_8
  void (__fastcall ***v12)(PVOID, __int64); // r15
  PVOID v14; // rax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  PVOID v16; // rax
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v18[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-10h]

  v7 = CFlipExBuffer::InitializeAttributes(this, a2);
  if ( v7 >= 0 )
  {
    v8 = (void *)*((_QWORD *)a3 + 95);
    if ( v8 )
    {
      if ( a4 )
      {
        ObfReferenceObject(v8);
        v14 = (PVOID)*((_QWORD *)a3 + 95);
      }
      else
      {
        Object = 0LL;
        v7 = ObReferenceObjectByHandle(v8, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
        v14 = Object;
      }
      *((_QWORD *)this + 37) = v14;
    }
    if ( v7 >= 0 )
    {
      v9 = (void *)*((_QWORD *)a3 + 96);
      if ( v9 )
      {
        if ( a4 )
        {
          ObfReferenceObject(*((PVOID *)a3 + 96));
          v16 = (PVOID)*((_QWORD *)a3 + 96);
        }
        else
        {
          SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
          Object = 0LL;
          v7 = ObReferenceObjectByHandle(v9, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
          v16 = Object;
        }
        *((_QWORD *)this + 39) = v16;
      }
      if ( v7 >= 0 )
      {
        v10 = 0LL;
        v18[0] = *(_DWORD *)a3;
        do
        {
          if ( (unsigned int)v10 >= *((_DWORD *)a3 + 1) )
            break;
          Object = 0LL;
          v11 = *((_QWORD *)a3 + 3 * v10 + 3);
          v19 = *(_OWORD *)((char *)a3 + 24 * v10 + 8);
          v18[1] = v10;
          v20 = v11;
          v7 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v18,
                 a4,
                 (struct CBufferRealization **)&Object);
          if ( v7 >= 0 )
          {
            v12 = (void (__fastcall ***)(PVOID, __int64))Object;
            v7 = (*(__int64 (__fastcall **)(CFlipExBuffer *, PVOID))(*(_QWORD *)this + 200LL))(this, Object);
            if ( v7 < 0 )
            {
              if ( v12 )
                (**v12)(v12, 1LL);
            }
            else
            {
              (*((void (__fastcall **)(void (__fastcall **)(PVOID, __int64)))*v12[8] + 4))(v12[8]);
            }
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( v7 >= 0 );
        if ( v7 >= 0 )
        {
          *((_QWORD *)this + 36) = *((_QWORD *)a3 + 94);
          *((_BYTE *)this + 568) = *(_DWORD *)a3 == 4;
        }
      }
    }
  }
  return (unsigned int)v7;
}
