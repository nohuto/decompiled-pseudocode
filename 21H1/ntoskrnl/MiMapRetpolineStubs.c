/*
 * XREFs of MiMapRetpolineStubs @ 0x14053E51C
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x140745674 (MiFinalizeImageRetpolineState.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLockAndIncrementShareCount @ 0x1402BA158 (MiLockAndIncrementShareCount.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

unsigned __int64 __fastcall MiMapRetpolineStubs(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 SessionVm; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __int64 ContainingPageTable; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r13d
  unsigned __int64 v20; // rbx
  bool v21; // zf
  __int64 v23; // [rsp+60h] [rbp+8h]
  unsigned __int8 v24; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v6 = SessionVm;
  v7 = a1 + ((a2 + ((unsigned int)dword_140C4CBF0 >> 12) + ((dword_140C4CBF0 & 0xFFF) != 0)) << 12);
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = qword_140C4CB90;
  v9 = 0LL;
  v24 = MiLockWorkingSetShared(SessionVm);
  if ( !dword_140C4CBC8 )
    goto LABEL_22;
  do
  {
    v11 = *(_QWORD *)(v23 + 8 * v9 + 48);
    v12 = v8 + 8 * v9;
    if ( v4 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v6, v4, v10);
    }
    v4 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v4, 0LL);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v8 + 8 * v9);
    MiLockAndIncrementShareCount(ContainingPageTable, v14, v15);
    MiLockAndIncrementShareCount(v11, v16, v17);
    v19 = 0;
    v20 = MiMakeValidPte(v8 + 8 * v9, v11, 3LL, v18) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v8 + 8 * v9) )
      goto LABEL_17;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v19 = 1;
      if ( HIBYTE(word_140C4DF48) )
        goto LABEL_17;
      v21 = (v20 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v21 = (v20 & 1) == 0;
    }
    if ( !v21 )
      v20 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v12 = v20;
    if ( v19 )
      MiWritePteShadow(v8 + 8 * v9, v20);
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < dword_140C4CBC8 );
  if ( v4 )
    MiUnlockPageTableInternal(v6, v4, v10);
LABEL_22:
  MiUnlockWorkingSetShared(v6, v24);
  return v7;
}
