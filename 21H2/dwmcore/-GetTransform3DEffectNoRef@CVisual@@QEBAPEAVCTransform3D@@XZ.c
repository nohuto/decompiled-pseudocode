/*
 * XREFs of ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180049050
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180048940 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CalcScopeMode@CCpuClippingData@@CA?AW4Enum@CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W423@@Z @ 0x180048F94 (-CalcScopeMode@CCpuClippingData@@CA-AW4Enum@CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W423@.c)
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B314 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x1800E301C (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CTransform3D *__fastcall CVisual::GetTransform3DEffectNoRef(CVisual *this)
{
  __int64 v1; // rbx
  struct CEffect *EffectInternal; // rdi

  v1 = 0LL;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           186LL) )
    {
      return EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                EffectInternal,
                56LL) )
    {
      return (struct CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
  }
  return (struct CTransform3D *)v1;
}
