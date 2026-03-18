/*
 * XREFs of ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18021F240
 * Callers:
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1800D24C0 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18021EEFC (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18021F180 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x18021EFFC (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18021F3BC (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18021F408 (-InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18021F4B4 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x18021F554 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // rbp
  int v8; // eax
  bool v9; // r13
  const struct DwmAnimationPrimitive *v10; // r12
  char CurrentPrimitive; // di
  const struct DwmAnimationPrimitive *v12; // rbx
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ecx
  float v17; // xmm6_4
  float v18; // xmm0_4

  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  v8 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this);
  v9 = 0;
  v10 = CAnimationInterpolator::GetPrimitiveAtIndex(this, v8 - 1);
  if ( !PrimitiveAtIndex )
    return 0;
  CurrentPrimitive = CAnimationInterpolator::FindCurrentPrimitive(this, a2);
  if ( CurrentPrimitive )
  {
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
        {
          CurrentPrimitive = 0;
          break;
        }
      }
      if ( !CurrentPrimitive )
        return CurrentPrimitive;
      v13 = *(_DWORD *)v12;
    }
    if ( CurrentPrimitive )
    {
      v15 = v13 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 2 )
            return 0;
          v17 = *((float *)v12 + 4);
          goto LABEL_27;
        }
        v18 = CAnimationInterpolator::InterpolateSinusoidal(this, v12, a2);
      }
      else
      {
        v18 = CAnimationInterpolator::InterpolateCubic(this, v12, a2);
      }
      v17 = v18;
LABEL_27:
      CurrentPrimitive = _finite(v17) != 0 ? CurrentPrimitive : 0;
      if ( CurrentPrimitive )
      {
        *a3 = v17;
        if ( a4 )
          *a4 = v9;
      }
    }
  }
  return CurrentPrimitive;
}
