/*
 * XREFs of HvpFindFreeCell @ 0x14071F32C
 * Callers:
 *     HvpDoAllocateCell @ 0x140720248 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x1403625A0 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 *     HvpFindFreeCellInBin @ 0x140720190 (HvpFindFreeCellInBin.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v13; // r13d
  ULONG i; // edx
  __int64 v15; // rbx
  ULONG SetBits; // ecx
  int v17; // eax
  __int64 CellMap; // rax
  unsigned int v19; // r8d
  __int64 v20; // r9
  int FreeCellInBin; // eax
  __int64 v23; // rbx
  ULONG v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  v8 = 632LL * a4;
  v9 = a2;
  v10 = (-1 << a2) & *(_DWORD *)(v8 + BugCheckParameter2 + 896);
  if ( !v10 )
    return (unsigned int)-1;
  _BitScanForward(&v11, v10);
  if ( v11 != a2 )
    v9 = v11;
  v12 = -1;
  v13 = -1;
  for ( i = *(_DWORD *)(v8 + 24 * v9 + BugCheckParameter2 + 308); ; i = v24 )
  {
    v15 = v8 + 24 * v9;
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v15 + BugCheckParameter2 + 312), 1u, i);
    *(_DWORD *)(v15 + BugCheckParameter2 + 308) = SetBits;
    v24 = SetBits + 1;
    if ( v13 == SetBits )
    {
      v10 &= v10 - 1;
      if ( !v10 )
        return v12;
      _BitScanForward((unsigned int *)&v9, v10);
      v23 = v8 + 24 * v9;
      SetBits = RtlFindSetBits(
                  (PRTL_BITMAP)(v23 + BugCheckParameter2 + 312),
                  1u,
                  *(_DWORD *)(v23 + BugCheckParameter2 + 308));
      *(_DWORD *)(v23 + BugCheckParameter2 + 308) = SetBits;
      v13 = SetBits;
      v24 = SetBits + 1;
    }
    v17 = SetBits;
    if ( v13 != -1 )
      v17 = v13;
    v13 = v17;
    LODWORD(v25) = (SetBits << 12) + (a4 << 31);
    CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v25);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0x480uLL);
    v20 = *(_QWORD *)(CellMap + 8);
    if ( (v20 & 2) == 0 && (v20 & 4) == 0 && (v20 & 1) != 0 )
      break;
LABEL_16:
    ;
  }
  FreeCellInBin = HvpFindFreeCellInBin(BugCheckParameter2, (__int64)&v25, a5, a6);
  if ( FreeCellInBin < 0 )
  {
    if ( FreeCellInBin != -1073741275 )
      return v12;
    goto LABEL_16;
  }
  return (unsigned int)v25;
}
