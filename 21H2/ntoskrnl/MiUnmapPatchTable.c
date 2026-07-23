/*
 * XREFs of MiUnmapPatchTable @ 0x14053F3DC
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiUnmapPatchTable(unsigned __int64 a1)
{
  int v2; // r14d
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  unsigned __int64 SessionVm; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  _KPROCESS *v11; // rdx
  unsigned __int8 v12; // r13
  unsigned __int64 v13; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  bool v19; // zf
  unsigned __int8 v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-D0h]
  _QWORD v25[24]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v25, 0, 0xB8uLL);
  v2 = 0;
  v3 = a1 + 8 * (((unsigned int)dword_140C4CCF0 >> 12) + ((dword_140C4CCF0 & 0xFFF) != 0) - 1LL);
  v24 = v3;
  v4 = (__int64)(a1 << 25) >> 16;
  SessionVm = MiGetSessionVm();
  LODWORD(v25[0]) = 2;
  v6 = SessionVm;
  WORD2(v25[0]) = 0;
  v25[2] = 0LL;
  v7 = 0LL;
  LODWORD(v25[1]) = 20;
  v25[3] = 0LL;
  v21 = MiLockWorkingSetShared(SessionVm, v8, v9, v10);
  v12 = v21;
  if ( a1 > v3 )
    return MiUnlockWorkingSetShared(v6, v12);
  while ( 1 )
  {
    if ( v7 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_8;
      MiFlushTbList((__int64)v25, v11);
      MiUnlockPageTableInternal(v6, v7);
    }
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v7, 0);
LABEL_8:
    v23 = MI_READ_PTE_LOCK_FREE(a1);
    v13 = v23;
    if ( (v23 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v23)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v23 >> 3) & 0x1FF)) & 0x20) != 0 )
            v13 |= 0x20uLL;
        }
      }
      v17 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v22, (__int64)Flink, v15, v16);
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      MiDecrementShareCount(v17);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertTbFlushEntry((__int64)v25, v4, 1LL, 0);
    }
    v18 = ZeroPte;
    if ( MiPteInShadowRange(a1) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v2 = 1;
        if ( HIBYTE(word_140C4E048) )
          goto LABEL_29;
        v19 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_29;
        v19 = (ZeroPte & 1) == 0;
      }
      if ( !v19 )
        v18 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_29:
    *(_QWORD *)a1 = v18;
    if ( v2 )
      MiWritePteShadow(a1, v18);
    a1 += 8LL;
    v4 += 4096LL;
    if ( a1 > v24 )
      break;
    v2 = 0;
  }
  v12 = v21;
  if ( v7 )
  {
    MiFlushTbList((__int64)v25, v11);
    MiUnlockPageTableInternal(v6, v7);
  }
  return MiUnlockWorkingSetShared(v6, v12);
}
