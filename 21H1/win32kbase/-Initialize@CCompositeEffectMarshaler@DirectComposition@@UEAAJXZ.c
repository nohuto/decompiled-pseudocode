/*
 * XREFs of ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01E4790
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01E2380 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositeEffectMarshaler::Initialize(
        DirectComposition::CCompositeEffectMarshaler *this)
{
  *((_DWORD *)this + 28) = 0;
  return DirectComposition::CFilterEffectMarshaler::Initialize(this);
}
