/*
 * XREFs of ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1C00075EC
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x1C0007530 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C0007780 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0007B78 (-InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C0161E20 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CFlipExBuffer::Initialize(
        CFlipExBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO_ *a3)
{
  NTSTATUS v5; // ebx
  void *v6; // rcx
  void *v7; // rsi
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  unsigned int v9; // esi
  __int64 v10; // rax
  __int128 v11; // xmm1
  void (__fastcall ***v12)(PVOID, __int64); // r15
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+50h] [rbp-10h]

  v5 = CFlipExBuffer::InitializeAttributes(this, a2);
  if ( v5 >= 0 )
  {
    v6 = (void *)*((_QWORD *)a3 + 126);
    if ( !v6
      || (Object = 0LL,
          v5 = ObReferenceObjectByHandle(v6, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL),
          *((_QWORD *)this + 41) = Object,
          v5 >= 0) )
    {
      v7 = (void *)*((_QWORD *)a3 + 127);
      if ( !v7
        || (SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType(),
            Object = 0LL,
            v5 = ObReferenceObjectByHandle(v7, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL),
            *((_QWORD *)this + 43) = Object,
            v5 >= 0) )
      {
        v9 = 0;
        v15[0] = *(_DWORD *)a3;
        do
        {
          if ( v9 >= *((_DWORD *)a3 + 1) )
          {
            *((_QWORD *)this + 40) = *((_QWORD *)a3 + 125);
            *((_BYTE *)this + 624) = *(_DWORD *)a3 == 4;
            return (unsigned int)v5;
          }
          Object = 0LL;
          v10 = 32LL * v9;
          v15[1] = v9;
          v11 = *(_OWORD *)((char *)a3 + v10 + 24);
          v16 = *(_OWORD *)((char *)a3 + v10 + 8);
          v17 = v11;
          v5 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v15,
                 0,
                 (struct CBufferRealization **)&Object);
          if ( v5 >= 0 )
          {
            v12 = (void (__fastcall ***)(PVOID, __int64))Object;
            v5 = (*(__int64 (__fastcall **)(CFlipExBuffer *, PVOID))(*(_QWORD *)this + 208LL))(this, Object);
            if ( v5 < 0 )
            {
              if ( v12 )
              {
                (**v12)(v12, 1LL);
                return (unsigned int)v5;
              }
            }
            else
            {
              (*((void (__fastcall **)(void (__fastcall **)(PVOID, __int64)))*v12[9] + 4))(v12[9]);
            }
          }
          ++v9;
        }
        while ( v5 >= 0 );
      }
    }
  }
  return (unsigned int)v5;
}
