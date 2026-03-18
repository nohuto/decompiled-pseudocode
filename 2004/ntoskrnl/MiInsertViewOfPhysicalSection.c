/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x1403C3C68
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x1407B08C8 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiInsertPhysicalPteMapping @ 0x1403381C8 (MiInsertPhysicalPteMapping.c)
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
  unsigned __int64 v14; // [rsp+70h] [rbp+8h]

  v6 = (*(_DWORD *)(a2 + 48) >> 7) & 0x1F;
  v7 = 8 * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v14 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v10 = a1 + 1664;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  MiInsertVad(a2, a1, 1LL, v11);
  v12 = MiLockWorkingSetShared(v10);
  if ( v7 > v14 )
    goto LABEL_8;
  do
  {
    if ( !v9 )
      goto LABEL_9;
    if ( (v7 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(v10, v9);
LABEL_9:
      MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(a2 + 48) >> 12) & 0x3F, v12, 0);
      v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    MiInsertPhysicalPteMapping(v7, a3, v6);
    v7 += 8LL;
    if ( (v7 & 0x78) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v9) || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(v10, v9);
      MiUnlockWorkingSetShared(v10, v12);
      v9 = 0LL;
      MiLockWorkingSetShared(v10);
    }
    ++a3;
  }
  while ( v7 <= v14 );
  if ( v9 )
    MiUnlockPageTableInternal(v10, v9);
LABEL_8:
  MiUnlockWorkingSetShared(v10, v12);
  return MiUnlockVad((__int64)CurrentThread, a2);
}
