/*
 * XREFs of ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C00646E8
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0062664 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0004758 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C0064280 (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0064BB8 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UpdateBufferDirtyRegion(
        CCompositionSurface *a1,
        __int64 a2,
        const struct IRegion *a3)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v5; // rdi
  struct CFlipExBuffer *v6; // rax
  struct CCompositionBuffer *v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(a1, a2, &v8);
  if ( Buffer >= 0 )
  {
    v5 = v8;
    if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 80LL))(v8) )
    {
      v6 = CFlipExBuffer::FromBuffer(v5);
      if ( *((_DWORD *)v6 + 87) == -1 )
        *((_DWORD *)v6 + 87) = 0;
      *((_DWORD *)v6 + 12) = 1;
      CCompositionBuffer::NotifyDirty(v6, a3, 0LL);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}
