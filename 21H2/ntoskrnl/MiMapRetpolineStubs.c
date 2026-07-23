/*
 * XREFs of MiMapRetpolineStubs @ 0x14054427C
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x14075CE48 (MiFinalizeImageRetpolineState.c)
 *     MiReloadBootLoadedDrivers @ 0x140A509F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockAndIncrementShareCount @ 0x140296C70 (MiLockAndIncrementShareCount.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 SessionVm; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned __int64 v14; // r14
  __int64 ContainingPageTable; // rax
  int v16; // r13d
  unsigned __int64 v17; // rbx
  bool v18; // zf
  __int64 v20; // [rsp+60h] [rbp+8h]
  unsigned __int8 v21; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v9 = SessionVm;
  v10 = a1 + ((a2 + ((unsigned int)dword_140C4CCF0 >> 12) + ((dword_140C4CCF0 & 0xFFF) != 0)) << 12);
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = qword_140C4CC90;
  v12 = 0LL;
  v21 = MiLockWorkingSetShared(SessionVm, v6, v7, v8);
  if ( !dword_140C4CCC8 )
    goto LABEL_22;
  do
  {
    v13 = *(_QWORD *)(v20 + 8 * v12 + 48);
    v14 = v11 + 8 * v12;
    if ( v4 )
    {
      if ( (v14 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v9, v4);
    }
    v4 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v9, v4, 0);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v11 + 8 * v12);
    MiLockAndIncrementShareCount(ContainingPageTable);
    MiLockAndIncrementShareCount(v13);
    v16 = 0;
    v17 = MiMakeValidPte(v11 + 8 * v12, v13, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v11 + 8 * v12) )
      goto LABEL_17;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_17;
      v18 = (v17 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v18 = (v17 & 1) == 0;
    }
    if ( !v18 )
      v17 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v14 = v17;
    if ( v16 )
      MiWritePteShadow(v11 + 8 * v12, v17);
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < dword_140C4CCC8 );
  if ( v4 )
    MiUnlockPageTableInternal(v9, v4);
LABEL_22:
  MiUnlockWorkingSetShared(v9, v21);
  return v10;
}
