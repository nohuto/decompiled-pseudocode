/*
 * XREFs of MiUnmapPatchTable @ 0x14053967C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140745AB0 (MiMapSystemImage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
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
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  bool v17; // zf
  __int64 v18; // r8
  unsigned __int8 v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v22; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h]
  _QWORD v24[24]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v24, 0, 0xB8uLL);
  v2 = 0;
  v3 = a1 + 8 * (((unsigned int)dword_140C4CBF0 >> 12) + ((dword_140C4CBF0 & 0xFFF) != 0) - 1LL);
  v23 = v3;
  v4 = (__int64)(a1 << 25) >> 16;
  SessionVm = MiGetSessionVm();
  LODWORD(v24[0]) = 2;
  v6 = SessionVm;
  WORD2(v24[0]) = 0;
  v24[2] = 0LL;
  v7 = 0LL;
  LODWORD(v24[1]) = 20;
  v24[3] = 0LL;
  v20 = MiLockWorkingSetShared(SessionVm);
  v9 = v20;
  if ( a1 > v3 )
    return MiUnlockWorkingSetShared(v6, v9);
  while ( 1 )
  {
    if ( v7 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_8;
      MiFlushTbList((__int64)v24, v8);
      MiUnlockPageTableInternal(v6, v7, v10);
    }
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v7, 0LL);
LABEL_8:
    v22 = MI_READ_PTE_LOCK_FREE(a1);
    v11 = v22;
    if ( (v22 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v22)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v22 >> 3) & 0x1FF)) & 0x20) != 0 )
            v11 |= 0x20uLL;
        }
      }
      v15 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21, (__int64)Flink, v13, v14);
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      MiDecrementShareCount(v15);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertTbFlushEntry((__int64)v24, v4, 1LL, 0);
    }
    v16 = ZeroPte;
    if ( MiPteInShadowRange(a1) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v2 = 1;
        if ( HIBYTE(word_140C4DF48) )
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
        v16 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_29:
    *(_QWORD *)a1 = v16;
    if ( v2 )
      MiWritePteShadow(a1, v16);
    a1 += 8LL;
    v4 += 4096LL;
    if ( a1 > v23 )
      break;
    v2 = 0;
  }
  v9 = v20;
  if ( v7 )
  {
    MiFlushTbList((__int64)v24, v8);
    MiUnlockPageTableInternal(v6, v7, v18);
  }
  return MiUnlockWorkingSetShared(v6, v9);
}
