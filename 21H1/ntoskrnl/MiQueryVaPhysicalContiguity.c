/*
 * XREFs of MiQueryVaPhysicalContiguity @ 0x140541734
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408CC950 (MiQueryMemoryPhysicalContiguity.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiCheckContiguityTradeEligible @ 0x1405410A4 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiQueryVaPhysicalContiguity(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // ebp
  int v9; // r13d
  unsigned int v10; // edi
  int v11; // r14d
  unsigned __int64 v12; // r8
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 NextPageTable; // rax
  unsigned int v17; // ebp
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v21; // rbx
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // r15
  int v27; // r15d
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  struct _LIST_ENTRY *v30; // rdx
  __int64 v31; // rbp
  bool v32; // zf
  __int64 v33; // rax
  int v35; // [rsp+30h] [rbp-88h]
  int v36; // [rsp+34h] [rbp-84h]
  __int64 v37; // [rsp+38h] [rbp-80h] BYREF
  __int64 v38; // [rsp+40h] [rbp-78h]
  unsigned __int64 v39; // [rsp+48h] [rbp-70h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 v41; // [rsp+60h] [rbp-58h]
  unsigned int v43; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int8 v44; // [rsp+D0h] [rbp+18h]
  int v45; // [rsp+D8h] [rbp+20h]

  v45 = a4;
  v43 = 0;
  v4 = a1;
  v41 = MiLargePageSizes[a3];
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = -1LL;
  v6 = ((((v41 << 12) + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0LL;
  v39 = v6;
  v38 = 0LL;
  v8 = 0;
  v35 = 0;
  v9 = 0;
  v10 = 1;
  v11 = 0;
  v36 = a4 & 1;
  v44 = MiLockWorkingSetShared(a1);
  v13 = v44;
  if ( v5 > v6 )
    goto LABEL_69;
  v14 = v6;
  while ( 1 )
  {
    v15 = 1LL;
    if ( v7 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v4, v7, v12);
        v13 = v44;
        v7 = 0LL;
      }
      if ( v7 )
        goto LABEL_32;
      v14 = v39;
    }
    NextPageTable = MiGetNextPageTable(v5, v14, 0LL, v13, 1, &v43);
    if ( !NextPageTable )
      break;
    v17 = v43;
    v7 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v43 )
    {
      v38 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v12 = v38;
      if ( v43 > 1 )
      {
        v18 = v43 - 1;
        do
        {
          v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v18;
        }
        while ( v18 );
        v38 = v12;
      }
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v12 = v38;
    }
    if ( NextPageTable != v5 )
      break;
    if ( v43 )
    {
      v37 = MI_READ_PTE_LOCK_FREE(v12);
      v19 = v37;
      if ( MiPteInShadowRange((unsigned __int64)&v37) && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v19 & 1) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF)) & 0x20) != 0 )
              v19 |= 0x20uLL;
          }
        }
        v17 = v43;
      }
      v21 = (v19 >> 12) & 0xFFFFFFFFFLL;
      v22 = (unsigned __int64)((__int64)(v5 << 25) >> 16) >> 12;
      if ( v17 )
      {
        v23 = v17;
        do
        {
          v24 = v22;
          v22 >>= 9;
          v25 = v15 * (v24 & 0x1FF);
          v15 <<= 9;
          v21 += v25;
          --v23;
        }
        while ( v23 );
      }
      v11 = 1;
      v26 = v15 - (v21 & (v15 - 1));
      goto LABEL_51;
    }
LABEL_32:
    v27 = 0;
    v28 = MI_READ_PTE_LOCK_FREE(v5);
    v37 = v28;
    v29 = v28;
    if ( (v28 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v37)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v30 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v30 )
        {
          if ( ((__int64)*(&v30->Flink + (((unsigned __int64)&v37 >> 3) & 0x1FF)) & 0x20) != 0 )
            v29 |= 0x20uLL;
        }
      }
      v21 = (v29 >> 12) & 0xFFFFFFFFFLL;
      v31 = 48 * v21 - 0x58000000000LL;
    }
    else
    {
      if ( (v28 & 0x400) != 0 || (v28 & 0x800) == 0 || (v45 & 2) != 0 || (v31 = MiLockTransitionLeafPage(v5, 0LL)) == 0 )
      {
        v9 = 1;
LABEL_65:
        v4 = a1;
        goto LABEL_66;
      }
      v27 = 1;
      v21 = (v31 + 0x58000000000LL) / 48;
    }
    if ( !(unsigned int)MiCheckContiguityTradeEligible(v31) )
      v11 = 1;
    v32 = v27 == 0;
    v26 = 1LL;
    if ( !v32 )
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_51:
    if ( v40 == -1 )
      v32 = ((v41 - 1) & v21) == 0;
    else
      v32 = v40 == v21;
    if ( !v32 )
    {
      v35 = 1;
      if ( !v36 )
        goto LABEL_65;
    }
    v33 = v21 + v26;
    v4 = a1;
    v40 = v33;
    if ( (v5 & 0x78) == 0 && MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
    {
      if ( v7 )
      {
        MiUnlockPageTableInternal(a1, v7, v12);
        v7 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v44);
      MiLockWorkingSetShared(a1);
    }
    v14 = v39;
    v5 += 8 * v26;
    v13 = v44;
    if ( v5 > v39 )
      goto LABEL_66;
  }
  v9 = 1;
LABEL_66:
  if ( v7 )
    MiUnlockPageTableInternal(v4, v7, v12);
  v13 = v44;
  v8 = v35;
LABEL_69:
  MiUnlockWorkingSetShared(v4, v13);
  if ( v9 )
  {
    return (unsigned int)(v11 != 0) + 2;
  }
  else if ( v8 )
  {
    return v11 != 0 ? 3 : 0;
  }
  return v10;
}
