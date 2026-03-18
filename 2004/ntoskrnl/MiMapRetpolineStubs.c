/*
 * XREFs of MiMapRetpolineStubs @ 0x14053EB6C
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x1407471F4 (MiFinalizeImageRetpolineState.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndIncrementShareCount @ 0x140261128 (MiLockAndIncrementShareCount.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 SessionVm; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  __int64 ContainingPageTable; // rax
  __int64 v13; // r9
  int v14; // r13d
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  bool v17; // zf
  __int64 v19; // [rsp+60h] [rbp+8h]
  unsigned __int8 v20; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v6 = SessionVm;
  v7 = a1 + ((a2 + ((unsigned int)dword_140C4CAB0 >> 12) + ((dword_140C4CAB0 & 0xFFF) != 0)) << 12);
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = qword_140C4CA50;
  v9 = 0LL;
  v20 = MiLockWorkingSetShared(SessionVm);
  if ( !dword_140C4CA88 )
    goto LABEL_22;
  do
  {
    v10 = *(_QWORD *)(v19 + 8 * v9 + 48);
    v11 = v8 + 8 * v9;
    if ( v4 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v6, v4);
    }
    v4 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v4, 0LL);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v8 + 8 * v9);
    MiLockAndIncrementShareCount(ContainingPageTable);
    MiLockAndIncrementShareCount(v10);
    v14 = 0;
    v15 = MiMakeValidPte(v8 + 8 * v9, v10, 3LL, v13) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v8 + 8 * v9) )
      goto LABEL_17;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C4DE08) )
        goto LABEL_17;
      v17 = (v15 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v17 = (v15 & 1) == 0;
    }
    if ( !v17 )
      v15 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v11 = v15;
    if ( v14 )
      MiWritePteShadow(v8 + 8 * v9, v15, v16);
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < dword_140C4CA88 );
  if ( v4 )
    MiUnlockPageTableInternal(v6, v4);
LABEL_22:
  MiUnlockWorkingSetShared(v6, v20);
  return v7;
}
