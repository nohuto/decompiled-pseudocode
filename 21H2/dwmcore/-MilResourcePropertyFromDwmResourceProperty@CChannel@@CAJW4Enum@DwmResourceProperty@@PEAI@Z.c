/*
 * XREFs of ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x1801ABA28
 * Callers:
 *     ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x1801AA050 (-BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 *     ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x1801AA140 (-BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::MilResourcePropertyFromDwmResourceProperty(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  if ( (unsigned int)a1 < 9 )
  {
    v2 = 0;
    *a2 = dword_180377730[(unsigned int)a1];
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, 0xC9Cu);
  }
  return v2;
}
