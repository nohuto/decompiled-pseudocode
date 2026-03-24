/*
 * XREFs of ?Show@CCursorVisualReference@@UEAAXXZ @ 0x180174460
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18009FC08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E5648 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x1801743BC (--4-$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV.c)
 */

void __fastcall CCursorVisualReference::Show(CRenderTargetBitmap **this)
{
  CVisual *Visual; // rax
  struct CEffect *EffectInternal; // rax
  CMILCOMBase *v4; // rdi
  float *v5; // rcx
  float v6; // xmm1_4
  __int64 v7; // rax

  Visual = CExcludeVisualReference::GetVisual((CExcludeVisualReference *)this);
  if ( Visual )
  {
    EffectInternal = CVisual::GetEffectInternal(Visual);
    v4 = EffectInternal;
    if ( EffectInternal )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
             EffectInternal,
             56LL) )
      {
        wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(this + 3, v4);
        v5 = (float *)this[3];
        v6 = v5[18];
        if ( v6 == 0.0 )
        {
          if ( 1.0 != v6 )
          {
            v7 = *(_QWORD *)v5;
            v5[18] = 1.0;
            (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v7 + 72))(v5, 0LL, 0LL);
          }
        }
        else
        {
          this[3] = 0LL;
          if ( v5 )
            CRenderTargetBitmap::Release((CRenderTargetBitmap *)v5);
        }
      }
    }
  }
  CExcludeVisualReference::Show((CExcludeVisualReference *)this);
}
