/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1406CE32C
 * Callers:
 *     CmpCheckRegistry2 @ 0x1407C5CB0 (CmpCheckRegistry2.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  unsigned int *v3; // rsi
  __int64 CellFlat; // rax
  __int64 v5; // r14
  int v6; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  HvpGetCellContextReinitialize(&v8);
  v2 = 0;
  if ( !*(_DWORD *)(BugCheckParameter3 + 1872) )
    return 0;
  while ( 1 )
  {
    v3 = (unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v2);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *v3, &v8);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v5 = CellFlat;
    if ( *(_DWORD *)(CellFlat + 12) == *(_DWORD *)(*((_QWORD *)v3 + 1) + 28LL) )
      goto LABEL_5;
    v6 = HvpMarkCellDirty(BugCheckParameter3, *v3);
    if ( v6 < 0 )
      break;
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(*((_QWORD *)v3 + 1) + 28LL);
LABEL_5:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v8);
    if ( ++v2 >= *(_DWORD *)(BugCheckParameter3 + 1872) )
      return 0;
  }
  if ( v5 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v8);
  }
  return (unsigned int)v6;
}
