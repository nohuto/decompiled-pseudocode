/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x1408815F4
 * Callers:
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1408825D0 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1403EFD44 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  ULONG_PTR v1; // rdx

  v1 = *(unsigned int *)P;
  if ( (_DWORD)v1 != -1 )
    CmpDereferenceSecurityNode(P[1], v1);
  ExFreePoolWithTag(P, 0x77554D43u);
}
