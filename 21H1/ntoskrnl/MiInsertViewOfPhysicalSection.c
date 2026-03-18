/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x1403C2DA8
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x1407AD768 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiInsertPhysicalPteMapping @ 0x1402FB198 (MiInsertPhysicalPteMapping.c)
 */

_QWORD *__fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  unsigned int v6; // r13d
  ULONG_PTR v7; // rbp
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  _DWORD *v11; // r9
  unsigned __int8 v12; // bl
  __int64 v13; // r8
  unsigned __int64 v15; // [rsp+70h] [rbp+8h]

  v6 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v15 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = a1 + 1664;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  MiInsertVad(a2, a1, 1LL, v11);
  v12 = MiLockWorkingSetShared(v10);
  if ( v7 > v15 )
    goto LABEL_8;
  do
  {
    if ( !v9 )
      goto LABEL_9;
    if ( (v7 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v10, v9, v13);
LABEL_9:
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v12, 0);
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiInsertPhysicalPteMapping(v7, a3, v6);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v9) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v9, v13);
      MiUnlockWorkingSetShared(v10, v12);
      v9 = 0LL;
      MiLockWorkingSetShared(v10);
    }
    ++a3;
  }
  while ( v7 <= v15 );
  if ( v9 )
    MiUnlockPageTableInternal(v10, v9, v13);
LABEL_8:
  MiUnlockWorkingSetShared(v10, v12);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
