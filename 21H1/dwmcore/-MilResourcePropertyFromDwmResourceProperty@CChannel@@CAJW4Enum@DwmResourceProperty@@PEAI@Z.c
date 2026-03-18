/*
 * XREFs of ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x18001FAC4
 * Callers:
 *     ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x18001FA00 (-BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 *     ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x180152AB0 (-BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::MilResourcePropertyFromDwmResourceProperty(unsigned int a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  if ( a1 >= 7 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0xC25u, 0LL);
  }
  else
  {
    v2 = 0;
    *a2 = dword_1802E0B70[a1];
  }
  return v2;
}
