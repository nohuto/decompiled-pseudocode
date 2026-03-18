/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C003FC64
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C006B498 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C003FCE4 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01FF578 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1)
{
  __int16 v1; // bx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int16 v5; // bx

  v1 = dword_1C025642C;
  v3 = (unsigned __int16)dword_1C025642C;
  v4 = CitAllocZero((unsigned __int16)dword_1C025642C);
  if ( v4 )
  {
    v4[1] = v4;
    *v4 = v4;
    v5 = (*((_WORD *)v4 + 50) ^ (4 * v1)) & 0x7FFC;
    *a1 = (struct _CIT_INTERACTION_SUMMARY *)v4;
    *((_WORD *)v4 + 50) ^= v5;
    v4[20] = v4 + 22;
    v4[21] = v3 - 176;
  }
  else
  {
    CitpLogFailureWorker(-1073741670, 0LL, 0xD0Bu);
  }
}
