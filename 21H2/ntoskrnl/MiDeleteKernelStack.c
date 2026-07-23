/*
 * XREFs of MiDeleteKernelStack @ 0x1402606E0
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x14026067C (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiDeleteValidSystemPage @ 0x140333B70 (MiDeleteValidSystemPage.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 *v8; // r13
  unsigned __int64 *v9; // r15
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r10
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  unsigned __int64 v16; // r8
  bool v17; // zf
  signed __int32 v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  struct _LIST_ENTRY *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 *v28; // [rsp+20h] [rbp-88h]
  _QWORD v29[8]; // [rsp+28h] [rbp-80h] BYREF
  int v30; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v31; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v32; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+20h]

  memset(v29, 0, 48);
  if ( (a2 & 1) != 0 )
    v2 = 18LL;
  else
    v2 = (unsigned __int8)byte_140C4EBFC;
  v3 = (unsigned int)(v2 + 1);
  v4 = (unsigned int)v2;
  v30 = v2 + 1;
  v33 = (unsigned int)v2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = a1 - 8 * v2;
  v28 = (unsigned __int64 *)v7;
  v8 = (unsigned __int64 *)v7;
  v9 = (unsigned __int64 *)(v7 + 8 * v3);
  v10 = MiLockWorkingSetShared(&unk_140C4F540);
  v31 = v10;
  if ( v7 >= (unsigned __int64)v9 )
    goto LABEL_15;
  v11 = v7;
  do
  {
    if ( v5 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal((__int64)&unk_140C4F540, v5);
    }
    v5 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(&unk_140C4F540, v5, 0LL);
LABEL_7:
    v12 = *(_QWORD *)v7;
    if ( (unsigned int)MiPteInShadowRange(v11)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v26 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
        v27 = v12 | 0x20;
        if ( (v26 & 0x20) == 0 )
          v27 = v12;
        v12 = v27;
        if ( (v26 & 0x42) != 0 )
          v12 = v27 | 0x42;
      }
    }
    v32 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( !v6 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v32)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          v22 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v22 )
          {
            v23 = *((_QWORD *)&v22->Flink + (((unsigned __int64)&v32 >> 3) & 0x1FF));
            v24 = v12 | 0x20;
            if ( (v23 & 0x20) == 0 )
              v24 = v12;
            v12 = v24;
            if ( (v23 & 0x42) != 0 )
              v12 = v24 | 0x42;
          }
        }
        v6 = *(_QWORD *)(qword_140C4E688
                       + 8 * ((*(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      }
      MiDeleteValidSystemPage(&unk_140C4F540, v7, 0LL, v29);
      ++v29[0];
    }
    v7 += 8LL;
    v11 = v7;
  }
  while ( v7 < (unsigned __int64)v9 );
  v4 = v33;
  v8 = v28;
  if ( v5 )
    MiUnlockPageTableInternal((__int64)&unk_140C4F540, v5);
  v10 = v31;
  LODWORD(v3) = v30;
LABEL_15:
  MiUnlockWorkingSetShared(&unk_140C4F540, v10);
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4F008, -v4);
  v13 = v29[0];
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
    {
      v13 = v29[0];
    }
    else
    {
      v16 = v29[0];
      if ( (unsigned __int64)(v29[0] + CachedResidentAvailable) <= 0x100 )
      {
        do
        {
          if ( v16 >= 0x80000 )
            break;
          v18 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v16,
                  CachedResidentAvailable);
          v17 = (_DWORD)CachedResidentAvailable == v18;
          LODWORD(CachedResidentAvailable) = v18;
          if ( v17 )
            goto LABEL_22;
          if ( v18 == -1 )
            break;
          v16 = v29[0];
        }
        while ( (unsigned __int64)(v29[0] + v18) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v13 = v29[0] + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v13 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7168), v13);
LABEL_22:
  MiReleasePtes(&unk_140C4EB98, v8, (unsigned int)v3);
  return MiReturnCommit(v6, v4 - v29[1], v19, v20);
}
