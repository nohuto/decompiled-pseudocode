/*
 * XREFs of ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D994C
 * Callers:
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x1800BD330 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x1800D9670 (-CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z.c)
 *     ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x1800D9780 (-DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::MilTypeFromDwmType(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  if ( (unsigned int)a1 >= 0x2C )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0LL, -2147024809, 0xC7Cu);
  }
  else
  {
    v2 = 0;
    *a2 = dword_1803651C0[(unsigned int)a1];
  }
  return v2;
}
