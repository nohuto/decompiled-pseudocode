/*
 * XREFs of MiDeleteKernelStack @ 0x140272740
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x1402726DC (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x14032AB70 (MmDeleteKernelStack.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiDeleteValidSystemPage @ 0x140328E20 (MiDeleteValidSystemPage.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiDeleteKernelStack(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  unsigned __int8 v12; // al
  __int64 Flink; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r10
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  unsigned __int64 v19; // r8
  bool v20; // zf
  signed __int32 v21; // eax
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // [rsp+20h] [rbp-88h]
  _QWORD v28[8]; // [rsp+28h] [rbp-80h] BYREF
  int v29; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v30; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v31; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+20h]

  memset(v28, 0, 48);
  if ( (a2 & 1) != 0 )
    v4 = 18LL;
  else
    v4 = (unsigned __int8)byte_140C4EBBC;
  v5 = (unsigned int)(v4 + 1);
  v6 = (unsigned int)v4;
  v29 = v4 + 1;
  v32 = (unsigned int)v4;
  v7 = 0LL;
  v8 = 0LL;
  v9 = a1 - 8 * v4;
  v27 = (_QWORD *)v9;
  v10 = (_QWORD *)v9;
  v11 = (_QWORD *)(v9 + 8 * v5);
  v12 = MiLockWorkingSetShared((__int64)&unk_140C4F500, a2, a3, a4);
  v30 = v12;
  if ( v9 >= (unsigned __int64)v11 )
    goto LABEL_15;
  v14 = v9;
  do
  {
    if ( v7 )
    {
      if ( (v14 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(&unk_140C4F500, v7);
    }
    v7 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal((__int64)&unk_140C4F500, v7, 0LL);
LABEL_7:
    v15 = *(_QWORD *)v9;
    if ( (unsigned int)MiPteInShadowRange(v14, Flink)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v15 & 1) != 0
      && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v26 = *(_QWORD *)(Flink + 8 * ((v9 >> 3) & 0x1FF));
        Flink = v15 | 0x20;
        if ( (v26 & 0x20) == 0 )
          Flink = v15;
        v15 = Flink;
        if ( (v26 & 0x42) != 0 )
          v15 = Flink | 0x42;
      }
    }
    v31 = v15;
    if ( (v15 & 1) != 0 )
    {
      if ( !v8 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v31, Flink)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
        {
          v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v23 )
          {
            v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF));
            v25 = v15 | 0x20;
            if ( (v24 & 0x20) == 0 )
              v25 = v15;
            v15 = v25;
            if ( (v24 & 0x42) != 0 )
              v15 = v25 | 0x42;
          }
        }
        v8 = *(_QWORD *)(qword_140C4E648
                       + 8 * ((*(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      }
      MiDeleteValidSystemPage(&unk_140C4F500, v9, 0LL, v28);
      ++v28[0];
    }
    v9 += 8LL;
    v14 = v9;
  }
  while ( v9 < (unsigned __int64)v11 );
  v6 = v32;
  v10 = v27;
  if ( v7 )
    MiUnlockPageTableInternal(&unk_140C4F500, v7);
  v12 = v30;
  LODWORD(v5) = v29;
LABEL_15:
  MiUnlockWorkingSetShared((__int64)&unk_140C4F500, v12);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFC8, -v6);
  v16 = v28[0];
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
    {
      v16 = v28[0];
    }
    else
    {
      v19 = v28[0];
      if ( (unsigned __int64)(v28[0] + CachedResidentAvailable) <= 0x100 )
      {
        do
        {
          if ( v19 >= 0x80000 )
            break;
          v21 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + v19,
                  CachedResidentAvailable);
          v20 = (_DWORD)CachedResidentAvailable == v21;
          LODWORD(CachedResidentAvailable) = v21;
          if ( v20 )
            goto LABEL_22;
          if ( v21 == -1 )
            break;
          v19 = v28[0];
        }
        while ( (unsigned __int64)(v28[0] + v21) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v16 = v28[0] + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v16 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 7168), v16);
LABEL_22:
  MiReleasePtes((__int64)&unk_140C4EB58, v10, v5);
  return MiReturnCommit(v8, v6 - v28[1]);
}
