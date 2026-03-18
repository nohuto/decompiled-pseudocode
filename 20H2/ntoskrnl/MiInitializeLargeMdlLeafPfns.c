/*
 * XREFs of MiInitializeLargeMdlLeafPfns @ 0x1405324E8
 * Callers:
 *     MiDoGangAssignment @ 0x14055E6A0 (MiDoGangAssignment.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiInitializeMdlLeafPfns @ 0x14033459C (MiInitializeMdlLeafPfns.c)
 *     MiGetLeafPfnBuddy @ 0x14038020C (MiGetLeafPfnBuddy.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 */

void __fastcall MiInitializeLargeMdlLeafPfns(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  unsigned __int64 LeafPfnBuddy; // rax
  _QWORD *v8; // rdi
  int PfnPageSizeIndex; // eax

  v3 = *(_QWORD *)(a2 + 72);
  if ( (*(_DWORD *)(a2 + 8) & 0x80000200) != 0 )
    v5 = 0LL;
  else
    v5 = MiSwizzleInvalidPte(128LL);
  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    do
    {
      LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
      *a1 = LeafPfnBuddy;
      v8 = (_QWORD *)LeafPfnBuddy;
      PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v6);
      MiInitializeMdlLeafPfns((__int64)v6, MiLargePageSizes[PfnPageSizeIndex], v3, v5, *(_DWORD *)(a2 + 8));
      v6 = v8;
    }
    while ( v8 && !KeShouldYieldProcessor() );
  }
}
