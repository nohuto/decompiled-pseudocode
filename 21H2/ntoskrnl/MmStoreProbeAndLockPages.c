/*
 * XREFs of MmStoreProbeAndLockPages @ 0x140235900
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140292600 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiStoreMarkLockedPagesModified @ 0x140235A70 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140235CE0 (MiUnlockProbePacketWorkingSet.c)
 *     MiUnlockStoreLockedPages @ 0x14023DBF0 (MiUnlockStoreLockedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiProbeLeafFrame @ 0x140308590 (MiProbeLeafFrame.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(_DWORD *BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // eax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  int v8; // eax
  int v9; // edi
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rcx
  ULONG_PTR BugCheckParameter3[22]; // [rsp+48h] [rbp-69h] BYREF
  int v14; // [rsp+120h] [rbp+6Fh] BYREF

  memset(BugCheckParameter3, 0, 0xA8uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v6 = v5 & 0xFFFFFFF3 | 8;
  else
    v6 = v5 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6;
  MiProbeAndLockPrepare(
    (unsigned int)BugCheckParameter3,
    (_DWORD)BugCheckParameter4,
    BugCheckParameter4[8] + BugCheckParameter4[11],
    BugCheckParameter4[10],
    1,
    0,
    0);
  v7 = (_QWORD *)BugCheckParameter3[6];
  do
  {
    *v7 = -1LL;
    v8 = MiProbeLeafFrame(BugCheckParameter3);
    v9 = v8;
    if ( v8 == -1073741801 )
      break;
    if ( v8 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v8, BugCheckParameter3[0], (ULONG_PTR)BugCheckParameter4);
    v10 = 48 * BugCheckParameter3[16] - 0x58000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v11 = BugCheckParameter3[6];
    BugCheckParameter3[0] += 4096LL;
    *(_QWORD *)BugCheckParameter3[6] = BugCheckParameter3[16];
    v7 = (_QWORD *)(v11 + 8);
    BugCheckParameter3[6] = (ULONG_PTR)v7;
    BugCheckParameter3[2] += 8LL;
  }
  while ( BugCheckParameter3[2] <= BugCheckParameter3[3] );
  MiUnlockProbePacketWorkingSet(BugCheckParameter3);
  if ( v9 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v9;
}
