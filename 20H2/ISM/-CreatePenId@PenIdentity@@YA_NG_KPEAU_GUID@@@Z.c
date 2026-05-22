/*
 * XREFs of ?CreatePenId@PenIdentity@@YA_NG_KPEAU_GUID@@@Z @ 0x180131BC8
 * Callers:
 *     ?ExtractPenIdFromReport@PenIdentity@@YA_NPEAXKW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z @ 0x180131BE8 (-ExtractPenIdFromReport@PenIdentity@@YA_NPEAXKW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEA.c)
 *     ?ExtractPenIdFromStaticDescriptor@PenIdentity@@YA_NPEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z @ 0x180131DB0 (-ExtractPenIdFromStaticDescriptor@PenIdentity@@YA_NPEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall PenIdentity::CreatePenId(PenIdentity *this, __int64 a2, __int64 a3, struct _GUID *a4)
{
  bool result; // al

  result = 0;
  if ( (_WORD)this )
  {
    if ( a2 )
    {
      *(_QWORD *)(a3 + 8) = a2;
      result = 1;
      *(_WORD *)(a3 + 6) = (_WORD)this;
    }
  }
  return result;
}
