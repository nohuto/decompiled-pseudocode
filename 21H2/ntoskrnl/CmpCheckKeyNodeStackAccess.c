/*
 * XREFs of CmpCheckKeyNodeStackAccess @ 0x14065BF3C
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14065B560 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     CmpGetSecurityCellForKeyNodeStack @ 0x14065C2F0 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158 (CmpCheckKeySecurityDescriptorAccess.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpCheckKeyNodeStackAccess(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 CellFlat; // rax
  __int64 v4; // rdi
  unsigned int v5; // esi
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v8 = 0LL;
  BugCheckParameter3[0] = 0LL;
  HvpGetCellContextReinitialize(&v8);
  CmpGetSecurityCellForKeyNodeStack(a1, BugCheckParameter3, &BugCheckParameter4);
  v2 = BugCheckParameter3[0];
  if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3[0], (unsigned int)BugCheckParameter4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3[0]);
  v4 = CellFlat;
  v5 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20));
  if ( v4 )
  {
    if ( (*(_BYTE *)(v2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v2, &v8);
    else
      HvpReleaseCellPaged(v2, &v8);
  }
  return v5;
}
