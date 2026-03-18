/*
 * XREFs of ?SetFloatProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0004010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetFloatProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 16;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 14;
      if ( v7 )
      {
        if ( v7 != 2 || a3 < 0.0 || a3 > 1.0 )
          return 3221225485LL;
        *((_DWORD *)this + 4) &= ~0x2000u;
        *((float *)this + 79) = a3;
        goto LABEL_7;
      }
      if ( a3 != 0.0
        && (a3 < 0.0625 || a3 > 16.0)
        && (COERCE_FLOAT(LODWORD(a3) ^ _xmm) < 0.0625 || COERCE_FLOAT(LODWORD(a3) ^ _xmm) > 16.0) )
      {
        return 3221225485LL;
      }
      if ( *((float *)this + 78) != a3 )
      {
        *((_DWORD *)this + 4) &= ~0x8000u;
        *((float *)this + 78) = a3;
        goto LABEL_7;
      }
    }
    else
    {
      if ( a3 <= 0.0 && a3 != -1.0 )
        return 3221225485LL;
      if ( *((float *)this + 57) != a3 )
      {
        *((float *)this + 57) = a3;
LABEL_6:
        *((_DWORD *)this + 4) &= ~0x400u;
LABEL_7:
        *a4 = 1;
      }
    }
  }
  else
  {
    if ( a3 < 0.0 )
      return 3221225485LL;
    if ( *((float *)this + 56) != a3 )
    {
      *((float *)this + 56) = a3;
      goto LABEL_6;
    }
  }
  return result;
}
