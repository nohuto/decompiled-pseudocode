/*
 * XREFs of ?VerifyInfo@DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@SA_NPEBX_K@Z @ 0x1C0034ED8
 * Callers:
 *     ?AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z @ 0x1C0034DBC (-AnimationScenarioBegin@CTelemetryInfo@DirectComposition@@QEAAJ_KPEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO::VerifyInfo(
        unsigned __int16 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  bool result; // al

  result = 0;
  if ( a2 >= 0x30 && *a1 == 4096 )
  {
    v2 = a1[1];
    if ( v2 <= a2 && (unsigned __int16 *)((char *)a1 + a2) >= a1 )
    {
      v3 = a1[16];
      if ( !(_WORD)v3 || (v3 & 3) == 0 && v3 + 16 <= v2 )
      {
        v4 = a1[17];
        if ( !(_WORD)v4
          || (v4 & 1) == 0
          && v4 + 2 * ((unsigned __int64)a1[18] + 1) <= v2
          && !*(unsigned __int16 *)((char *)&a1[a1[18]] + v4) )
        {
          v5 = a1[19];
          if ( !(_WORD)v5
            || (v5 & 1) == 0
            && v5 + 2 * ((unsigned __int64)a1[20] + 1) <= v2
            && !*(unsigned __int16 *)((char *)&a1[a1[20]] + v5) )
          {
            return 1;
          }
        }
      }
    }
  }
  return result;
}
