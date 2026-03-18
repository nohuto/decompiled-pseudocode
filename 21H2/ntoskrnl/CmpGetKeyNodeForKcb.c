/*
 * XREFs of CmpGetKeyNodeForKcb @ 0x14067E828
 * Callers:
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140722534 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1407F7A58 (CmpKeyNodeNeedsAccessBitUpdate.c)
 */

__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // rcx
  ULONG_PTR v13; // rcx
  __int64 CellPaged; // rax
  __int64 v15; // rbx

  v5 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v5);
  else
    CellFlat = HvpGetCellPaged(v7);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = CellFlat;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v9, CellFlat, *(unsigned int *)(a1 + 40));
  }
  else if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(v9, CellFlat) )
  {
    if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v12, a2);
    else
      HvpReleaseCellPaged(v12, a2);
    ExAcquirePushLockSharedEx(*(_QWORD *)(a1 + 32) + 72LL, 0LL);
    v13 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v13, *(unsigned int *)(a1 + 40));
    else
      CellPaged = HvpGetCellPaged(v13);
    v10 = CellPaged;
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 32), CellPaged, *(unsigned int *)(a1 + 40));
    v15 = *(_QWORD *)(a1 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v15 + 72));
    KeAbPostRelease(v15 + 72);
  }
  return v10;
}
