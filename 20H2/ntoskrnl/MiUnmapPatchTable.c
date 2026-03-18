/*
 * XREFs of MiUnmapPatchTable @ 0x14053D69C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140756210 (MiMapSystemImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiUnmapPatchTable(unsigned __int64 a1)
{
  int v2; // r14d
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  unsigned __int64 SessionVm; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  _KPROCESS *v8; // rdx
  unsigned __int8 v9; // r13
  unsigned __int64 v10; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  bool v17; // zf
  unsigned __int8 v19; // [rsp+28h] [rbp-E0h]
  int v20; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-D0h]
  _QWORD v23[24]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v23, 0, 0xB8uLL);
  v2 = 0;
  v3 = a1 + 8 * (((unsigned int)dword_140C4CB30 >> 12) + ((dword_140C4CB30 & 0xFFF) != 0) - 1LL);
  v22 = v3;
  v4 = (__int64)(a1 << 25) >> 16;
  SessionVm = MiGetSessionVm();
  LODWORD(v23[0]) = 2;
  v6 = SessionVm;
  WORD2(v23[0]) = 0;
  v23[2] = 0LL;
  v7 = 0LL;
  LODWORD(v23[1]) = 20;
  v23[3] = 0LL;
  v19 = MiLockWorkingSetShared(SessionVm);
  v9 = v19;
  if ( a1 > v3 )
    return MiUnlockWorkingSetShared(v6, v9);
  while ( 1 )
  {
    if ( v7 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_8;
      MiFlushTbList((unsigned int *)v23, v8);
      MiUnlockPageTableInternal(v6, v7);
    }
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v7, 0LL);
LABEL_8:
    v21 = MI_READ_PTE_LOCK_FREE(a1);
    v10 = v21;
    if ( (v21 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v21)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v21 >> 3) & 0x1FF)) & 0x20) != 0 )
            v10 |= 0x20uLL;
        }
      }
      v14 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20, (__int64)Flink, v12, v13);
        while ( *(__int64 *)(v14 + 24) < 0 );
      }
      MiDecrementShareCount(v14);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertTbFlushEntry((__int64)v23, v4, 1LL, 0);
    }
    v15 = ZeroPte;
    if ( MiPteInShadowRange(a1) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v2 = 1;
        if ( HIBYTE(word_140C4DE88) )
          goto LABEL_29;
        v17 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_29;
        v17 = (ZeroPte & 1) == 0;
      }
      if ( !v17 )
        v15 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_29:
    *(_QWORD *)a1 = v15;
    if ( v2 )
      MiWritePteShadow(a1, v15, v16);
    a1 += 8LL;
    v4 += 4096LL;
    if ( a1 > v22 )
      break;
    v2 = 0;
  }
  v9 = v19;
  if ( v7 )
  {
    MiFlushTbList((unsigned int *)v23, v8);
    MiUnlockPageTableInternal(v6, v7);
  }
  return MiUnlockWorkingSetShared(v6, v9);
}
