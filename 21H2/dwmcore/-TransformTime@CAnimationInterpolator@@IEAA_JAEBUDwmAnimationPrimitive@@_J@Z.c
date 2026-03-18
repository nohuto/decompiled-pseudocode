/*
 * XREFs of ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1800CDA88
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800CD75C (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x1800CD970 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 */

__int64 __fastcall CAnimationInterpolator::TransformTime(
        CAnimationInterpolator *this,
        const struct DwmAnimationPrimitive *a2,
        __int64 a3)
{
  signed __int64 v5; // rbx
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax

  v5 = 0LL;
  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  switch ( *(_DWORD *)a2 )
  {
    case 3:
      v7 = *((_QWORD *)a2 + 2);
      v8 = *((_QWORD *)a2 + 1);
      if ( v7 )
        v5 = (a3 - v8) % v7;
      v5 += v8 - v7;
      if ( v5 < *((_QWORD *)PrimitiveAtIndex + 1) )
        return *((_QWORD *)a2 + 1);
      break;
    case 5:
      v10 = *((_QWORD *)a2 + 1);
      v11 = a3 - v10;
      v12 = v10 - *((_QWORD *)PrimitiveAtIndex + 1);
      if ( v11 <= v12 )
        v12 = v11;
      return v10 - v12;
    case 6:
      return *((_QWORD *)a2 + 1);
  }
  return v5;
}
