/*
 * XREFs of MiDeleteLargeUserPde @ 0x14054FB9C
 * Callers:
 *     MiDeleteVa @ 0x1403427D0 (MiDeleteVa.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiDecreaseUsedPtesCount @ 0x14023F794 (MiDecreaseUsedPtesCount.c)
 *     MiSetLeafPfnBuddy @ 0x14024920C (MiSetLeafPfnBuddy.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiRewritePteWithLockBit @ 0x1403B6D88 (MiRewritePteWithLockBit.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiDeleteVadAwePtes @ 0x14054BD74 (MiDeleteVadAwePtes.c)
 */

unsigned __int64 __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  int v7; // r13d
  unsigned __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  int v12; // r13d
  unsigned __int64 i; // rcx
  unsigned __int64 v14; // rbx
  int v15; // r15d
  bool v16; // zf
  ULONG_PTR UsedPtesHandle; // rax
  unsigned __int64 result; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  char v26; // r8
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h]
  int v30; // [rsp+80h] [rbp+18h] BYREF
  int v31; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a1;
  v28 = v3;
  v7 = *(_DWORD *)(v3 + 104);
  v31 = v7;
  v27 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v27;
  v9 = v27 & 1;
  if ( (v27 & 1) != 0 )
  {
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v27);
  }
  else if ( qword_140C4DF80 )
  {
    if ( (v27 & 0x10) != 0 )
      v8 = v27 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v8 = ~qword_140C4DF80 & v27;
  }
  v10 = (v8 >> 12) & 0xFFFFFFFFFLL;
  v11 = (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v12 = v7 & 0x10;
  if ( v12 )
  {
    MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 32LL), a2, (__int64 *)(v3 + 112));
    goto LABEL_28;
  }
  if ( a3 )
  {
    if ( v9 )
    {
      MiRewritePteWithLockBit(*(_QWORD *)(v4 + 24), (volatile __int64 *)a2, ZeroPte);
      goto LABEL_26;
    }
    v14 = ZeroPte;
    v15 = 0;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v15 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v16 = (ZeroPte & 1) == 0;
          goto LABEL_21;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v16 = (ZeroPte & 1) == 0;
LABEL_21:
        if ( !v16 )
          v14 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v14;
    if ( v15 )
      MiWritePteShadow(a2, v14);
    v4 = a1;
LABEL_26:
    if ( a3 == 3 )
      goto LABEL_28;
    goto LABEL_27;
  }
  for ( i = 0LL; i < v11; ++i )
    *(_QWORD *)(a2 + 8 * i) = ZeroPte;
LABEL_27:
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16);
  MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v11);
LABEL_28:
  result = 0xFFFFFA8000000000uLL;
  v19 = 48 * v10 - 0x58000000000LL;
  if ( v9 )
  {
    v20 = *(_QWORD *)(v4 + 16);
    if ( a3 )
      result = MiInsertLargeTbFlushEntry(v20, a3, a2);
    else
      result = MiInsertTbFlushEntry(v20, (__int64)(a2 << 25) >> 16, v11, 0);
  }
  if ( !v12 )
  {
    result = MI_PFN_IS_PROTO(48 * v10 - 0x58000000000LL);
    if ( !(_DWORD)result )
    {
      v30 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30, v21, v22, v23);
        while ( *(__int64 *)(v19 + 24) < 0 );
      }
      v24 = v28;
      *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 5;
      MiSetLeafPfnBuddy((_QWORD *)(48 * v10 - 0x58000000000LL), *(_QWORD *)(*(_QWORD *)(v24 + 16) + 40LL));
      result = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(*(_QWORD *)(v25 + 16) + 40LL) = v19;
      *(_BYTE *)(v19 + 34) ^= (*(_BYTE *)(v19 + 34) ^ v26) & 7;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  if ( (v31 & 0x800) != 0 && !a3 )
    *(_BYTE *)(v4 + 3) = 15;
  return result;
}
