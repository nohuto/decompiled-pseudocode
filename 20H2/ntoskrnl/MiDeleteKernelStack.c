/*
 * XREFs of MiDeleteKernelStack @ 0x140265A40
 * Callers:
 *     MiDeleteCachedKernelStack @ 0x1402659DC (MiDeleteCachedKernelStack.c)
 *     MmDeleteKernelStack @ 0x1402ADF80 (MmDeleteKernelStack.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiDeleteValidSystemPage @ 0x1402AC570 (MiDeleteValidSystemPage.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  _QWORD *v9; // r15
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r10
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  unsigned __int64 v16; // r8
  bool v17; // zf
  signed __int32 v18; // eax
  struct _LIST_ENTRY *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // [rsp+20h] [rbp-88h]
  _QWORD v26[8]; // [rsp+28h] [rbp-80h] BYREF
  int v27; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v28; // [rsp+B8h] [rbp+10h]
  unsigned __int64 v29; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+20h]

  memset(v26, 0, 48);
  if ( (a2 & 1) != 0 )
    v2 = 18LL;
  else
    v2 = (unsigned __int8)byte_140C4EA3C;
  v3 = (unsigned int)(v2 + 1);
  v4 = (unsigned int)v2;
  v27 = v2 + 1;
  v30 = (unsigned int)v2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = a1 - 8 * v2;
  v25 = v7;
  v8 = v7;
  v9 = (_QWORD *)(v7 + 8 * v3);
  v10 = MiLockWorkingSetShared(&unk_140C4F380);
  v28 = v10;
  if ( v7 >= (unsigned __int64)v9 )
    goto LABEL_15;
  v11 = v7;
  do
  {
    if ( v5 )
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(&unk_140C4F380);
    }
    v5 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(&unk_140C4F380, v5, 0LL);
LABEL_7:
    v12 = *(_QWORD *)v7;
    if ( MiPteInShadowRange(v11)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v12 & 1) != 0
      && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v23 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
        v24 = v12 | 0x20;
        if ( (v23 & 0x20) == 0 )
          v24 = v12;
        v12 = v24;
        if ( (v23 & 0x42) != 0 )
          v12 = v24 | 0x42;
      }
    }
    v29 = v12;
    if ( (v12 & 1) != 0 )
    {
      if ( !v6 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v29)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v19 )
          {
            v20 = *((_QWORD *)&v19->Flink + (((unsigned __int64)&v29 >> 3) & 0x1FF));
            v21 = v12 | 0x20;
            if ( (v20 & 0x20) == 0 )
              v21 = v12;
            v12 = v21;
            if ( (v20 & 0x42) != 0 )
              v12 = v21 | 0x42;
          }
        }
        v6 = *(_QWORD *)(qword_140C4E4C8
                       + 8 * ((*(_QWORD *)(48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) >> 39) & 0x3FFLL));
      }
      MiDeleteValidSystemPage(&unk_140C4F380, v7, 0LL, v26);
      ++v26[0];
    }
    v7 += 8LL;
    v11 = v7;
  }
  while ( v7 < (unsigned __int64)v9 );
  v4 = v30;
  v8 = v25;
  if ( v5 )
    MiUnlockPageTableInternal(&unk_140C4F380);
  v10 = v28;
  LODWORD(v3) = v27;
LABEL_15:
  MiUnlockWorkingSetShared(&unk_140C4F380, v10);
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EE48, -v4);
  v13 = v26[0];
  if ( (ULONG_PTR *)v6 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
    {
      v13 = v26[0];
    }
    else
    {
      v16 = v26[0];
      if ( (unsigned __int64)(v26[0] + CachedResidentAvailable) <= 0x100 )
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
          v16 = v26[0];
        }
        while ( (unsigned __int64)(v26[0] + v18) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v13 = v26[0] + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v13 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7168), v13);
LABEL_22:
  MiReleasePtes(&unk_140C4E9D8, v8, (unsigned int)v3);
  MiReturnCommit(v6, v4 - v26[1]);
}
