/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x1403C63D8
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiInsertPhysicalPteMapping @ 0x14025F5F8 (MiInsertPhysicalPteMapping.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

_QWORD *__fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v6; // r13d
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 v11; // bl
  unsigned __int64 v13; // [rsp+70h] [rbp+8h]

  v6 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v13 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = a1 + 1664;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  MiInsertVad(a2, a1, 1LL);
  v11 = MiLockWorkingSetShared(v10);
  if ( v7 > v13 )
    goto LABEL_8;
  do
  {
    if ( !v9 )
      goto LABEL_9;
    if ( (v7 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v10, v9);
LABEL_9:
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v11, 0);
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiInsertPhysicalPteMapping(v7, a3, v6);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v9) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v9);
      MiUnlockWorkingSetShared(v10, v11);
      v9 = 0LL;
      MiLockWorkingSetShared(v10);
    }
    ++a3;
  }
  while ( v7 <= v13 );
  if ( v9 )
    MiUnlockPageTableInternal(v10, v9);
LABEL_8:
  MiUnlockWorkingSetShared(v10, v11);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
