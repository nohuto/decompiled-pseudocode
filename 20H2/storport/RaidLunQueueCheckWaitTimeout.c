/*
 * XREFs of RaidLunQueueCheckWaitTimeout @ 0x1C0034930
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x1C002B60C (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidLunQueueCheckWaitTimeout(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v4; // rbx
  char v5; // r13
  unsigned int v6; // r15d
  char v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // r14
  _QWORD *v11; // rcx
  __int64 v12; // r8
  ULONGLONG v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  ULONGLONG UnbiasedInterruptTime; // [rsp+60h] [rbp+8h]

  v4 = (_QWORD *)(a1 + 112);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v8 = 0;
  v9 = 0LL;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  v11 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 == v4 )
    goto LABEL_27;
  do
  {
    v12 = v11[3];
    if ( (*(_BYTE *)(v12 + 450) & 2) == 0 )
    {
      v13 = *(v11 - 2);
      if ( v13 == -1LL || v13 >= UnbiasedInterruptTime )
        break;
    }
    if ( v5 )
    {
      if ( (*(_BYTE *)(v12 + 450) & 2) == 0 && !v7 )
      {
        v9 = v11[3];
        v8 = *(_DWORD *)(v12 + 672) + *(_DWORD *)(v12 + 676);
        v7 = 1;
      }
      v14 = *v11;
      v15 = v11[2] + 120LL;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        goto LABEL_26;
      v16 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v16 != v11 )
        goto LABEL_26;
      *v16 = v14;
      *(_QWORD *)(v14 + 8) = v16;
      v17 = *(_QWORD *)v15;
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
        goto LABEL_26;
      v18 = *(_QWORD **)(v15 + 8);
      if ( *v18 != v15 )
        goto LABEL_26;
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      if ( (*(_BYTE *)(v15 + 22) & 6) != 0 )
        --*(_DWORD *)(a1 + 20);
      else
        --*(_DWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v15 + 22) & 8) != 0 )
        --*(_DWORD *)(a1 + 24);
      *(_BYTE *)(v15 + 20) = 0;
      v19 = *(_QWORD **)(a3 + 8);
      if ( *v19 != a3 )
LABEL_26:
        __fastfail(3u);
      *v11 = a3;
      ++v6;
      v11[1] = v19;
      *v19 = v11;
      *(_QWORD *)(a3 + 8) = v11;
      v11 = (_QWORD *)*v4;
      if ( v6 == a2 )
        break;
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      v11 = (_QWORD *)*v4;
      v5 = 1;
    }
  }
  while ( v11 != v4 );
  if ( !v5 )
LABEL_27:
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  else
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( v7 )
  {
    if ( v8 > *(_DWORD *)(v9 + 2140) )
      *(_DWORD *)(v9 + 2140) = v8;
  }
  return v6;
}
