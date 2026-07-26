/*
 * XREFs of verifySingleRxNbl @ 0x1C0074838
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074168 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C0074244 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C00740A0 (datapathVerifierReportProblem.c)
 *     verifySingleNb @ 0x1C007471C (verifySingleNb.c)
 */

__int64 __fastcall verifySingleRxNbl(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  _QWORD *v4; // rcx

  v4 = *(_QWORD **)(BugCheckParameter4 + 8);
  if ( *v4 )
  {
    datapathVerifierReportProblem(0x32uLL, BugCheckParameter3, BugCheckParameter4);
    v4 = *(_QWORD **)(BugCheckParameter4 + 8);
  }
  return verifySingleNb((ULONG_PTR)v4, BugCheckParameter3);
}
