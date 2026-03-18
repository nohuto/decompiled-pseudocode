/*
 * XREFs of ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C009E6E4
 * Callers:
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0035970 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00363A0 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C003672C (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0036958 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0061C64 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     CitBackgroundMouseInput @ 0x1C006DD4C (CitBackgroundMouseInput.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C009E498 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C009E810 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C00A1AC0 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01F92C0 (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01FA5C0 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpStatIncrement(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int16 v2; // ax

  if ( (unsigned __int16)(a2 + *a1) < *a1 )
    v2 = -1;
  else
    v2 = a2 + *a1;
  *a1 = v2;
}
