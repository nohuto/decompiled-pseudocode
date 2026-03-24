/*
 * XREFs of MiMapRetpolineStubs @ 0x14054403C
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x14075CC88 (MiFinalizeImageRetpolineState.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockAndIncrementShareCount @ 0x1402E5920 (MiLockAndIncrementShareCount.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r13d
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  bool v23; // zf
  __int64 v25; // [rsp+60h] [rbp+8h]
  unsigned __int8 v26; // [rsp+70h] [rbp+18h]

  v4 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
    SessionVm = MiGetSessionVm();
  else
    SessionVm = (__int64)MiGetAnyMultiplexedVm(1);
  v9 = SessionVm;
  v10 = a1 + ((a2 + ((unsigned int)dword_140C4CCB0 >> 12) + ((dword_140C4CCB0 & 0xFFF) != 0)) << 12);
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = qword_140C4CC50;
  v12 = 0LL;
  v26 = MiLockWorkingSetShared(SessionVm, v6, v7, v8);
  if ( !dword_140C4CC88 )
    goto LABEL_22;
  do
  {
    v13 = *(_QWORD *)(v25 + 8 * v12 + 48);
    v14 = v11 + 8 * v12;
    if ( v4 )
    {
      if ( (v14 & 0xFFF) != 0 )
        goto LABEL_9;
      MiUnlockPageTableInternal(v9, v4);
    }
    v4 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v9, v4, 0LL);
LABEL_9:
    ContainingPageTable = MiGetContainingPageTable(v11 + 8 * v12);
    MiLockAndIncrementShareCount(ContainingPageTable, v16, v17);
    MiLockAndIncrementShareCount(v13, v18, v19);
    v20 = 0;
    v21 = MiMakeValidPte(v11 + 8 * v12, v13, 3) & 0xF0FFFFFFFFFFFFFFuLL | 0x900000000000000LL;
    if ( !MiPteInShadowRange(v11 + 8 * v12) )
      goto LABEL_17;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_17;
      v23 = (v21 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_17;
      v23 = (v21 & 1) == 0;
    }
    if ( !v23 )
      v21 |= 0x8000000000000000uLL;
LABEL_17:
    *(_QWORD *)v14 = v21;
    if ( v20 )
      MiWritePteShadow(v11 + 8 * v12, v21, v22);
    v12 = (unsigned int)(v12 + 1);
  }
  while ( (unsigned int)v12 < dword_140C4CC88 );
  if ( v4 )
    MiUnlockPageTableInternal(v9, v4);
LABEL_22:
  MiUnlockWorkingSetShared(v9, v26);
  return v10;
}
