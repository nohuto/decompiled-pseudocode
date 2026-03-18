/*
 * XREFs of MiDereferenceDataSubsections @ 0x140553358
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x14022E700 (MiLocateSubsectionNode.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14024E10C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiOffsetToProtos @ 0x1402A42A0 (MiOffsetToProtos.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 */

__int64 __fastcall MiDereferenceDataSubsections(__int64 a1, unsigned __int64 *a2, __int64 a3, int a4, int a5)
{
  __int64 *v9; // rbp
  unsigned __int64 v10; // r14
  bool v11; // cf
  unsigned int v12; // edi
  __int64 *SubsectionNode; // rax
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v9 = (__int64 *)MiOffsetToProtos(a1, *a2, &v15);
  v10 = a3 + v15;
  v11 = a5 != 0;
  a5 = -a5;
  v12 = v11 ? 0xFFFFFF80 : 0;
  if ( a4 )
  {
    SubsectionNode = MiLocateSubsectionNode(a1, (a3 << 12) + *a2 - 1, 0);
    MiDecrementLargeSubsections(v9, SubsectionNode);
  }
  return MiRemoveViewsFromSectionWithPfn(v9, v10, v12 + 264);
}
