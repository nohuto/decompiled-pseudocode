/*
 * XREFs of MiDeleteKernelStack @ 0x1402263A0
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x1402400D4 (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x1402925B0 (MmDeleteKernelStack.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // r13
  ULONG_PTR v9; // r15
  unsigned __int8 v10; // al
  __int64 Flink; // rdx
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r10
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  unsigned __int64 v17; // r8
  bool v18; // zf
  signed __int32 v19; // eax
  struct _LIST_ENTRY *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  ULONG_PTR v25; // [rsp+20h] [rbp-88h]
  _QWORD v26[8]; // [rsp+28h] [rbp-80h] BYREF
  int v27; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v28; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v29; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+20h]

  memset(v26, 0, 48);
  if ( (a2 & 1) != 0 )
    v2 = 18LL;
  else
    v2 = (unsigned __int8)byte_140C4EAFC;
  v3 = (unsigned int)(v2 + 1);
  v4 = (unsigned int)v2;
  v27 = v2 + 1;
  v30 = (unsigned int)v2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = a1 - 8 * v2;
  v25 = v7;
  v8 = v7;
  v9 = v7 + 8 * v3;
  v10 = MiLockWorkingSetShared((__int64)&unk_140C4F440);
  v28 = v10;
  if ( v7 >= v9 )
    goto LABEL_15;
  v12 = v7;
  do
  {
    if ( v5 )
    {
      if ( (v12 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(&unk_140C4F440, v5);
    }
    v5 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)&unk_140C4F440, v5, 0LL);
LABEL_7:
    v13 = *(_QWORD *)v7;
    if ( (unsigned int)MiPteInShadowRange(v12, Flink)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v13 & 1) != 0
      && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v24 = *(_QWORD *)(Flink + 8 * ((v7 >> 3) & 0x1FF));
        Flink = v13 | 0x20;
        if ( (v24 & 0x20) == 0 )
          Flink = v13;
        v13 = Flink;
        if ( (v24 & 0x42) != 0 )
          v13 = Flink | 0x42;
      }
    }
    v29 = v13;
    if ( (v13 & 1) != 0 )
    {
      if ( !v6 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v29, Flink)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          v21 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v21 )
          {
            v22 = *((_QWORD *)&v21->Flink + (((unsigned __int64)&v29 >> 3) & 0x1FF));
            v23 = v13 | 0x20;
            if ( (v22 & 0x20) == 0 )
              v23 = v13;
            v13 = v23;
            if ( (v22 & 0x42) != 0 )
              v13 = v23 | 0x42;
          }
        }
        v6 = *(_QWORD *)(qword_140C4E588
                       + 8 * ((*(_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      }
      MiDeleteValidSystemPage((__int64)&unk_140C4F440, v7, 0, (__int64)v26);
      ++v26[0];
    }
    v7 += 8LL;
    v12 = v7;
  }
  while ( v7 < v9 );
  v4 = v30;
  v8 = v25;
  if ( v5 )
    MiUnlockPageTableInternal(&unk_140C4F440, v5);
  v10 = v28;
  LODWORD(v3) = v27;
LABEL_15:
  MiUnlockWorkingSetShared((__int64)&unk_140C4F440, v10);
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EF08, -v4);
  v14 = v26[0];
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
    {
      v14 = v26[0];
    }
    else
    {
      v17 = v26[0];
      if ( (unsigned __int64)(v26[0] + CachedResidentAvailable) <= 0x100 )
      {
        do
        {
          if ( v17 >= 0x80000 )
            break;
          v19 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v17,
                  CachedResidentAvailable);
          v18 = (_DWORD)CachedResidentAvailable == v19;
          LODWORD(CachedResidentAvailable) = v19;
          if ( v18 )
            goto LABEL_22;
          if ( v19 == -1 )
            break;
          v17 = v26[0];
        }
        while ( (unsigned __int64)(v26[0] + v19) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v14 = v26[0] + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v14 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7168), v14);
LABEL_22:
  MiReleasePtes(&unk_140C4EA98, v8, (unsigned int)v3);
  return MiReturnCommit(v6, v4 - v26[1]);
}
