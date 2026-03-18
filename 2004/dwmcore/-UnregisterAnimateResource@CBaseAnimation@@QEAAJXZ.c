/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800AE2AC
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800AE22C (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x1801E9B90 (-UpdateAnimateValues@CScalar@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AE2F0 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 96) )
  {
    v3 = CComposition::UnregisterAnimateResource(this[2], (struct IAnimationResource *)(this + 7));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x8Eu, 0LL);
    else
      *((_BYTE *)this + 96) = 0;
  }
  return v1;
}
