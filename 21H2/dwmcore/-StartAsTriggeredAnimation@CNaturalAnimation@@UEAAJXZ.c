/*
 * XREFs of ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x180227E20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x180225FE8 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x1802292E0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::StartAsTriggeredAnimation(CNaturalAnimation *this)
{
  int started; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi

  started = CBaseExpression::StartAsTriggeredAnimation(this);
  v4 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, started, 0x3A9u);
  }
  else if ( (*((_BYTE *)this + 232) & 8) != 0 )
  {
    CNaturalAnimation::ClearState(this);
  }
  return v4;
}
