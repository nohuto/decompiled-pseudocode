/*
 * XREFs of ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18000F270
 * Callers:
 *     ?IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000F1F0 (-IsDrawListCacheDirty@CDropShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18000F2B0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

struct CDropShadow::ShadowIntermediates *__fastcall CDropShadow::GetEffectiveShadowIntermediates(
        CDropShadow *this,
        struct CVisual *a2)
{
  struct CDropShadow::ShadowIntermediates *result; // rax
  unsigned __int64 appended; // rax
  _QWORD *v5; // r11
  __int64 v6; // r9
  __int64 *v7; // r8
  __int64 v8; // rdx
  __int64 *i; // rcx
  __int64 *v10; // rax
  struct CVisual *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  if ( *((_DWORD *)this + 33) != 1 )
    return (CDropShadow *)((char *)this + 136);
  appended = std::_Fnv1a_append_bytes((unsigned __int64)this, (const unsigned __int8 *const)&v11, 8uLL);
  v6 = v5[28];
  v7 = (__int64 *)v5[26];
  v8 = 2 * (v5[31] & appended);
  for ( i = *(__int64 **)(v6 + 16 * (v5[31] & appended)); ; i = (__int64 *)*i )
  {
    v10 = *(__int64 **)(v6 + 8 * v8) == v7 ? (__int64 *)v5[26] : **(__int64 ***)(v6 + 8 * v8 + 8);
    if ( i == v10 )
      break;
    if ( (struct CVisual *)i[2] == a2 )
      goto LABEL_11;
  }
  i = (__int64 *)v5[26];
LABEL_11:
  result = 0LL;
  if ( i != v7 )
    return (struct CDropShadow::ShadowIntermediates *)(i + 3);
  return result;
}
