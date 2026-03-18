/*
 * XREFs of CitBackgroundMouseInput @ 0x1C0062A2C
 * Callers:
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00629E8 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C006B36C (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C006B390 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B498 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 */

void __fastcall CitBackgroundMouseInput(struct tagPROCESSINFO *a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  struct _CIT_PROCESS *v3; // rsi
  unsigned __int64 v4; // r8
  struct _CIT_INTERACTION_SUMMARY *v5; // rax

  v1 = xmmword_1C0256430;
  if ( xmmword_1C0256430 )
  {
    if ( *((struct tagPROCESSINFO **)xmmword_1C0256430 + 15) != a1 )
    {
      v3 = CitpProcessEnsureContext(a1);
      if ( v3 )
      {
        v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( (unsigned int)(v4 - *((_DWORD *)v3 + 19)) > 0x3E8 )
        {
          *((_DWORD *)v3 + 19) = v4;
          PsUpdateComponentPower(*(_QWORD *)a1, 9LL, 0LL);
          v5 = CitpInteractionSummaryEnsure(v1, v3, 8u);
          if ( v5 )
            CitpStatIncrement((unsigned __int16 *)v5 + 53, 1u);
        }
      }
    }
  }
}
