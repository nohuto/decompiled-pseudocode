/*
 * XREFs of MmStoreProbeAndLockPages @ 0x14031656C
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140303648 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F771C (MiReferencePageForModifiedWrite.c)
 *     MiProbeLeafFrame @ 0x1403166DC (MiProbeLeafFrame.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140345CA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiUnlockStoreLockedPages @ 0x14034D0D0 (MiUnlockStoreLockedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x14034D1D0 (MiStoreMarkLockedPagesModified.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // eax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rcx
  ULONG_PTR BugCheckParameter3[22]; // [rsp+48h] [rbp-69h] BYREF
  int v17; // [rsp+120h] [rbp+6Fh] BYREF

  memset(BugCheckParameter3, 0, 0xA8uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v6 = v5 & 0xFFFFFFF3 | 8;
  else
    v6 = v5 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6;
  MiProbeAndLockPrepare(
    (__int64)BugCheckParameter3,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(_DWORD *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v7 = (_QWORD *)BugCheckParameter3[6];
  do
  {
    *v7 = -1LL;
    v8 = MiProbeLeafFrame(BugCheckParameter3);
    v12 = v8;
    if ( v8 == -1073741801 )
      break;
    if ( v8 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v8, BugCheckParameter3[0], BugCheckParameter4);
    v13 = 48 * BugCheckParameter3[16] - 0x58000000000LL;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v17, v9, v10, v11);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v13 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v13, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v14 = BugCheckParameter3[6];
    BugCheckParameter3[0] += 4096LL;
    *(_QWORD *)BugCheckParameter3[6] = BugCheckParameter3[16];
    v7 = (_QWORD *)(v14 + 8);
    BugCheckParameter3[6] = (ULONG_PTR)v7;
    BugCheckParameter3[2] += 8LL;
  }
  while ( BugCheckParameter3[2] <= BugCheckParameter3[3] );
  MiUnlockProbePacketWorkingSet(BugCheckParameter3);
  if ( v12 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v12;
}
