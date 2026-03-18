/*
 * XREFs of ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800CD75C
 * Callers:
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800CD690 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1800EF100 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x180270874 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 * Callees:
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x1800CD8E8 (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800CD970 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800CD9D0 (-InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800CDA88 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180270A6C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

bool __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // r15
  int v8; // eax
  bool v9; // r13
  const struct DwmAnimationPrimitive *v10; // rbp
  bool CurrentPrimitive; // di
  const struct DwmAnimationPrimitive *v12; // rbx
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  float v16; // xmm0_4
  float v17; // xmm6_4
  int v19; // ecx

  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  v8 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this);
  v9 = 0;
  v10 = CAnimationInterpolator::GetPrimitiveAtIndex(this, v8 - 1);
  if ( !PrimitiveAtIndex )
    return 0;
  CurrentPrimitive = CAnimationInterpolator::FindCurrentPrimitive(this, a2);
  if ( !CurrentPrimitive )
    return CurrentPrimitive;
  v12 = (const struct DwmAnimationPrimitive *)((char *)PrimitiveAtIndex + 32 * *((unsigned int *)this + 2));
  v13 = *(_DWORD *)v12;
  if ( *(_DWORD *)v12 == 4 || v13 == 6 && v12 == v10 )
    v9 = 1;
  while ( ((v13 - 3) & 0xFFFFFFFC) == 0 && v13 != 4 )
  {
    if ( PrimitiveAtIndex == v12 )
      return 0;
    v14 = CAnimationInterpolator::TransformTime(this, v12, a2);
    a2 = v14;
    if ( *((_QWORD *)v12 + 1) < v14 )
      return 0;
    while ( 1 )
    {
      v12 = (const struct DwmAnimationPrimitive *)((char *)v12 - 32);
      if ( *((_QWORD *)v12 + 1) <= v14 )
        break;
      if ( v12 == PrimitiveAtIndex )
        return 0;
    }
    v13 = *(_DWORD *)v12;
  }
  v15 = v13 - 1;
  if ( !v15 )
  {
    v16 = CAnimationInterpolator::InterpolateCubic(this, v12, a2);
LABEL_13:
    v17 = v16;
    goto LABEL_14;
  }
  v19 = v15 - 1;
  if ( !v19 )
  {
    v16 = CAnimationInterpolator::InterpolateSinusoidal(this, v12, a2);
    goto LABEL_13;
  }
  if ( v19 != 2 )
    return 0;
  v17 = *((float *)v12 + 4);
LABEL_14:
  if ( !_finite(v17) )
    return 0;
  *a3 = v17;
  if ( a4 )
    *a4 = v9;
  return CurrentPrimitive;
}
