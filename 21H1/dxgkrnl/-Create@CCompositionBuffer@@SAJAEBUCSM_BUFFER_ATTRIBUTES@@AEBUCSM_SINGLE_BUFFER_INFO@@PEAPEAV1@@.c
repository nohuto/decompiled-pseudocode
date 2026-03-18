/*
 * XREFs of ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00648B4
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0004984 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 * Callees:
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C0005264 (--0CCompositionBuffer@@IEAA@XZ.c)
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00052D4 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C0064AAC (-Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 */

__int64 __fastcall CCompositionBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SINGLE_BUFFER_INFO *a2,
        struct CCompositionBuffer **a3)
{
  int v6; // ebx
  CCompositionBuffer *v7; // rax
  CCompositionBuffer *v8; // rdi

  *a3 = 0LL;
  v6 = ValidateBufferAttributes(a1, (__int64)a2, (__int64)a3);
  if ( v6 >= 0 )
  {
    v6 = -1073741811;
    if ( *(_DWORD *)a2 == 1 )
      v6 = 0;
    if ( v6 >= 0 )
    {
      v7 = (CCompositionBuffer *)operator new[](0x120uLL, 0x624D5343u, PagedPool);
      if ( v7 )
        v8 = CCompositionBuffer::CCompositionBuffer(v7);
      else
        v8 = 0LL;
      if ( v8 )
      {
        v6 = CCompositionBuffer::Initialize(v8, a1, a2);
        if ( v6 < 0 )
          (**(void (__fastcall ***)(CCompositionBuffer *, __int64))v8)(v8, 1LL);
        else
          *a3 = v8;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v6;
}
