/*
 * XREFs of ?Initialize@CFloodEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01DDA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01DC400 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CFloodEffectMarshaler::Initialize(DirectComposition::CFloodEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_OWORD *)this + 7) = xmmword_1C0222B40;
  }
  return result;
}
