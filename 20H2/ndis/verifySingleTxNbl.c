/*
 * XREFs of verifySingleTxNbl @ 0x1C0074F60
 * Callers:
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074B38 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1C0074C14 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0074780 (datapathVerifierReportProblem.c)
 *     verifySingleNb @ 0x1C0074DFC (verifySingleNb.c)
 */

__int64 __fastcall verifySingleTxNbl(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  i = *(_QWORD **)(BugCheckParameter4 + 8);
  if ( i )
    goto LABEL_3;
  result = datapathVerifierReportProblem(0x30uLL, BugCheckParameter3, BugCheckParameter4);
  for ( i = *(_QWORD **)(BugCheckParameter4 + 8); i; i = (_QWORD *)*i )
LABEL_3:
    result = verifySingleNb((ULONG_PTR)i, BugCheckParameter3);
  return result;
}
