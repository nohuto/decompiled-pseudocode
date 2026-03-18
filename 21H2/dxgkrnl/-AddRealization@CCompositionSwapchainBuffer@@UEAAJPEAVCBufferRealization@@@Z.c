/*
 * XREFs of ?AddRealization@CCompositionSwapchainBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x1C0082EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z @ 0x1C0007910 (-AddRealization@CFlipExBuffer@@UEAAJPEAVCBufferRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::AddRealization(
        CCompositionSwapchainBuffer *this,
        struct CBufferRealization *a2)
{
  int v3; // ebx

  v3 = CFlipExBuffer::AddRealization(this, a2);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 9) + 32LL))(*((_QWORD *)a2 + 9));
  return (unsigned int)v3;
}
