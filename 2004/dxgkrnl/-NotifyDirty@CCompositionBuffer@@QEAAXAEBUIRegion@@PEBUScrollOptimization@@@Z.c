/*
 * XREFs of ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0065D48
 * Callers:
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0065878 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C00667B0 (-NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00659C0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

void __fastcall CCompositionBuffer::NotifyDirty(
        CCompositionBuffer *this,
        const struct IRegion *a2,
        const struct ScrollOptimization *a3)
{
  char *v3; // rsi

  v3 = (char *)this + 256;
  if ( *((_DWORD *)this + 64) )
  {
    CCompositionBuffer::AddScrollAsDirty(this, (CCompositionBuffer *)((char *)this + 256));
    *(_DWORD *)v3 = 0;
    *((_BYTE *)this + 42) = 1;
  }
  if ( a3 && *(_DWORD *)a3 )
  {
    if ( *((_BYTE *)this + 42) )
    {
      CCompositionBuffer::AddScrollAsDirty(this, a3);
    }
    else
    {
      *(_OWORD *)v3 = *(_OWORD *)a3;
      *((_QWORD *)v3 + 2) = *((_QWORD *)a3 + 2);
      *((_DWORD *)v3 + 6) = *((_DWORD *)a3 + 6);
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(const struct IRegion *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    (*(void (__fastcall **)(_QWORD, const struct IRegion *, __int64))(**((_QWORD **)this + 31) + 48LL))(
      *((_QWORD *)this + 31),
      a2,
      2LL);
    *((_BYTE *)this + 42) = 1;
  }
}
