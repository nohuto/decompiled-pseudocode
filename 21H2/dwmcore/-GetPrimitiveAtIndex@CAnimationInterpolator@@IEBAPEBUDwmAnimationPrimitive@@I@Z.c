/*
 * XREFs of ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800CD970
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800CD75C (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x1800CD8E8 (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800CDA88 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct DwmAnimationPrimitive *__fastcall CAnimationInterpolator::GetPrimitiveAtIndex(
        CAnimationInterpolator *this,
        unsigned int a2)
{
  if ( a2 >= (***(unsigned int (__fastcall ****)(_QWORD))this)(*(_QWORD *)this) )
    return 0LL;
  else
    return (const struct DwmAnimationPrimitive *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 8LL))(
                                                   *(_QWORD *)this,
                                                   a2);
}
