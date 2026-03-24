/*
 * XREFs of MiUnmapPatchTable @ 0x14053F19C
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14075D0C4 (MiMapSystemImage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int8 v22; // [rsp+28h] [rbp-E0h]
  int v23; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v24; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-D0h]
  _QWORD v26[24]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v26, 0, 0xB8uLL);
  v2 = 0;
  v3 = a1 + 8 * (((unsigned int)dword_140C4CCB0 >> 12) + ((dword_140C4CCB0 & 0xFFF) != 0) - 1LL);
  v25 = v3;
  v4 = (__int64)(a1 << 25) >> 16;
  SessionVm = MiGetSessionVm();
  LODWORD(v26[0]) = 2;
  v6 = SessionVm;
  WORD2(v26[0]) = 0;
  v26[2] = 0LL;
  v7 = 0LL;
  LODWORD(v26[1]) = 20;
  v26[3] = 0LL;
  v22 = MiLockWorkingSetShared(SessionVm, v8, v9, v10);
  v12 = v22;
  if ( a1 > v3 )
    return MiUnlockWorkingSetShared(v6, v12);
  while ( 1 )
  {
    if ( v7 )
    {
      if ( (a1 & 0xFFF) != 0 )
        goto LABEL_8;
      MiFlushTbList((__int64)v26, v11);
      MiUnlockPageTableInternal(v6, v7);
    }
    v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v6, v7, 0LL);
LABEL_8:
    v24 = MI_READ_PTE_LOCK_FREE(a1);
    v13 = v24;
    if ( (v24 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v24)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v24 >> 3) & 0x1FF)) & 0x20) != 0 )
            v13 |= 0x20uLL;
        }
      }
      v17 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23, (__int64)Flink, v15, v16);
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      MiDecrementShareCount(v17);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertTbFlushEntry((__int64)v26, v4, 1LL, 0);
    }
    v18 = ZeroPte;
    if ( MiPteInShadowRange(a1) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v2 = 1;
        if ( HIBYTE(word_140C4E008) )
          goto LABEL_29;
        v20 = (ZeroPte & 1) == 0;
      }
      else
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          goto LABEL_29;
        v20 = (ZeroPte & 1) == 0;
      }
      if ( !v20 )
        v18 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_29:
    *(_QWORD *)a1 = v18;
    if ( v2 )
      MiWritePteShadow(a1, v18, v19);
    a1 += 8LL;
    v4 += 4096LL;
    if ( a1 > v25 )
      break;
    v2 = 0;
  }
  v12 = v22;
  if ( v7 )
  {
    MiFlushTbList((__int64)v26, v11);
    MiUnlockPageTableInternal(v6, v7);
  }
  return MiUnlockWorkingSetShared(v6, v12);
}
