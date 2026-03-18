/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x180023850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B3B90 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18020F074 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

char __fastcall CCompositionSpotLight::IsValid(
        CCompositionSpotLight *this,
        const struct CVisual **a2,
        const struct CVisual *a3)
{
  const struct CVisual *v5; // rax
  const struct CVisual *v6; // rcx
  const struct CVisual *v7; // r8
  const struct Windows::Foundation::Numerics::float4x4 *v9; // rdx
  float v10; // xmm0_4
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp-18h]

  v5 = (const struct CVisual *)(*(__int64 (__fastcall **)(CCompositionSpotLight *))(*(_QWORD *)this + 216LL))(this);
  v6 = v5;
  v7 = v5;
  if ( v5 )
  {
    while ( (*((_BYTE *)v6 + 95) & 2) != 0 && (*((_BYTE *)v6 + 94) & 4) == 0 )
    {
      if ( v6 == a2[7] )
      {
        if ( a3 == v5 )
        {
LABEL_14:
          v12 = 0;
          if ( (int)CVisual::GetWorldTransform(v5, a2, 3LL, v11, 0LL, 0LL) >= 0 )
          {
            v10 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v11, v9);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 0.0) & _xmm) >= 0.00000011920929 )
            {
              if ( _finite((float)(1.0 / v10)) )
                return 1;
            }
          }
        }
        else
        {
          while ( a3 )
          {
            a3 = (const struct CVisual *)*((_QWORD *)a3 + 10);
            if ( a3 == v5 )
              goto LABEL_14;
          }
        }
        return 0;
      }
      if ( !v7
        || (v7 = (const struct CVisual *)*((_QWORD *)v7 + 10)) == 0LL
        || v6 != v7 && (v7 = (const struct CVisual *)*((_QWORD *)v7 + 10), v6 != v7) )
      {
        v6 = (const struct CVisual *)*((_QWORD *)v6 + 10);
        if ( v6 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}
