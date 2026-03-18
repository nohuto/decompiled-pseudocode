/*
 * XREFs of ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x1C01F8174
 * Callers:
 *     CitProcessCallout @ 0x1C0062720 (CitProcessCallout.c)
 * Callees:
 *     <none>
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryGetOutstanding(struct _CIT_PROCESS *a1)
{
  __int16 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  struct _CIT_INTERACTION_SUMMARY *result; // rax

  if ( (xmmword_1C024E484 & 1) == 0 )
    return 0LL;
  if ( (xmmword_1C024E484 & 2) != 0 )
  {
    v2 = *((_WORD *)a1 + 13);
    if ( !v2 )
      return 0LL;
    v3 = *((unsigned __int16 *)a1 + 12);
    if ( (unsigned int)v3 >= *((_DWORD *)xmmword_1C024E4A0 + 14) )
      return 0LL;
    v4 = *(_QWORD *)xmmword_1C024E4A0 + 96 * v3;
    if ( *(_WORD *)(v4 + 32) != v2 || *(_QWORD *)(v4 + 56) != *((_QWORD *)a1 + 6) )
      return 0LL;
    result = *(struct _CIT_INTERACTION_SUMMARY **)(v4 + 88);
  }
  else
  {
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)a1 + 2);
  }
  if ( result && *(struct _CIT_INTERACTION_SUMMARY **)result != result )
  {
    *((_WORD *)result + 57) |= 0x10u;
    return result;
  }
  return 0LL;
}
