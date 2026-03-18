/*
 * XREFs of _anonymous_namespace_::StoreIfChanged_float_ @ 0x1801D7558
 * Callers:
 *     ?UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipulationTelemetryData@@@Z @ 0x1801D8E70 (-UpdateOnManipulationThread@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadArgs@@PEAUIManipul.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::StoreIfChanged_float_(float *a1, float *a2)
{
  char result; // al

  result = 0;
  if ( *a1 != *a2 )
  {
    *a2 = *a1;
    return 1;
  }
  return result;
}
