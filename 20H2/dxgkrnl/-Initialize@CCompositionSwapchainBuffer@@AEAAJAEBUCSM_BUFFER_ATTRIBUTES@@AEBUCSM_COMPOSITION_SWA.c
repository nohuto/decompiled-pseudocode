/*
 * XREFs of ?Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0066520
 * Callers:
 *     ?Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C00662FC (-Create@CCompositionSwapchainBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C001151C (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0011828 (-InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::Initialize(
        CCompositionSwapchainBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO *a3)
{
  int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // xmm1_8
  struct CBufferRealization *v8; // r14
  _DWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  struct CBufferRealization *v13; // [rsp+78h] [rbp+20h] BYREF

  v5 = CFlipExBuffer::InitializeAttributes(this, a2);
  if ( v5 >= 0 )
  {
    v5 = 0;
    memset((char *)this + 48, 0, 0x78uLL);
    *((_DWORD *)this + 41) = 80;
    *((_DWORD *)this + 29) = 1065353216;
    v6 = 0LL;
    *((_DWORD *)this + 32) = 1065353216;
    *((_DWORD *)this + 28) = 1;
    v10[0] = *(_DWORD *)a3;
    do
    {
      if ( (unsigned int)v6 >= *((_DWORD *)a3 + 1) )
        break;
      v13 = 0LL;
      v10[1] = v6;
      v7 = *((_QWORD *)a3 + 3 * v6 + 3);
      v11 = *(_OWORD *)((char *)a3 + 24 * v6 + 8);
      v12 = v7;
      v5 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v10, 1, &v13);
      if ( v5 >= 0 )
      {
        v8 = v13;
        v5 = (*(__int64 (__fastcall **)(CCompositionSwapchainBuffer *, struct CBufferRealization *))(*(_QWORD *)this + 200LL))(
               this,
               v13);
        if ( v5 < 0 )
        {
          if ( v8 )
            (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v8)(v8, 1LL);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 8) + 32LL))(*((_QWORD *)v8 + 8));
        }
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v5 >= 0 );
    if ( v5 >= 0 )
    {
      *((_QWORD *)this + 36) = 0LL;
      *((_BYTE *)this + 568) = *(_DWORD *)a3 == 4;
      *((_QWORD *)this + 81) = *((_QWORD *)a3 + 94);
      *((_QWORD *)this + 82) = *((_QWORD *)a3 + 95);
    }
  }
  return (unsigned int)v5;
}
