/*
 * XREFs of MmStoreProbeAndLockPages @ 0x1403458AC
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14030A25C (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiUnlockStoreLockedPages @ 0x14030FA40 (MiUnlockStoreLockedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x14030FB40 (MiStoreMarkLockedPagesModified.c)
 *     MiProbeLeafFrame @ 0x140345A1C (MiProbeLeafFrame.c)
 *     MiReferencePageForModifiedWrite @ 0x1403536FC (MiReferencePageForModifiedWrite.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG_PTR BugCheckParameter3[22]; // [rsp+48h] [rbp-69h] BYREF
  int v19; // [rsp+120h] [rbp+6Fh] BYREF

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
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v19, v9, v10, v11);
      while ( *(__int64 *)(v13 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v13 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v13);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v14 = BugCheckParameter3[6];
    BugCheckParameter3[0] += 4096LL;
    *(_QWORD *)BugCheckParameter3[6] = BugCheckParameter3[16];
    v7 = (_QWORD *)(v14 + 8);
    BugCheckParameter3[6] = (ULONG_PTR)v7;
    BugCheckParameter3[2] += 8LL;
  }
  while ( BugCheckParameter3[2] <= BugCheckParameter3[3] );
  MiUnlockProbePacketWorkingSet((__int64)BugCheckParameter3, v9, v10);
  if ( v12 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4, v15, v16);
  else
    MiStoreMarkLockedPagesModified((_DWORD *)BugCheckParameter4, v15, v16);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v12;
}
