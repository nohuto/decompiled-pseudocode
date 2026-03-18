/*
 * XREFs of ?Initialize@CShadowEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01DAF90
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C01DA130 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CShadowEffectMarshaler::Initialize(
        DirectComposition::CShadowEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 28) = 1077936128;
    *(_OWORD *)((char *)this + 116) = xmmword_1C0220C70;
  }
  *((_DWORD *)this + 33) = 0;
  return result;
}
