/*
 * XREFs of MmStoreProbeAndLockPages @ 0x140385584
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14037DD88 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiUnlockProbePacketWorkingSet @ 0x14023CB68 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x140247F34 (MiProbeLeafFrame.c)
 *     MiReferencePageForModifiedWrite @ 0x14028C14C (MiReferencePageForModifiedWrite.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiProbeAndLockPrepare @ 0x140319F70 (MiProbeAndLockPrepare.c)
 *     MiStoreMarkLockedPagesModified @ 0x1403856F4 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140385FB0 (MiUnlockStoreLockedPages.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
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
  ULONG_PTR v16[22]; // [rsp+48h] [rbp-69h] BYREF
  int v17; // [rsp+120h] [rbp+6Fh] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v6 = v5 & 0xFFFFFFF3 | 8;
  else
    v6 = v5 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v6;
  MiProbeAndLockPrepare(
    (__int64)v16,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(unsigned int *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v7 = (_QWORD *)v16[7];
  do
  {
    *v7 = -1LL;
    v8 = MiProbeLeafFrame((__int64)v16);
    v12 = v8;
    if ( v8 == -1073741801 )
      break;
    if ( v8 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v8, v16[1], BugCheckParameter4);
    v13 = 48 * v16[17] - 0x220000000000LL;
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
    v14 = v16[7];
    v16[1] += 4096LL;
    *(_QWORD *)v16[7] = v16[17];
    v7 = (_QWORD *)(v14 + 8);
    v16[7] = (ULONG_PTR)v7;
    v16[3] += 8LL;
  }
  while ( v16[3] <= v16[4] );
  MiUnlockProbePacketWorkingSet((__int64)v16);
  if ( v12 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v12;
}
