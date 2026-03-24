/*
 * XREFs of MiDeleteLargeUserPde @ 0x14054F95C
 * Callers:
 *     MiDeleteVa @ 0x140337A80 (MiDeleteVa.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiInsertLargeTbFlushEntry @ 0x14029A7DC (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiDecreaseUsedPtesCount @ 0x1402C12F4 (MiDecreaseUsedPtesCount.c)
 *     MiSetLeafPfnBuddy @ 0x1402CA91C (MiSetLeafPfnBuddy.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiRewritePteWithLockBit @ 0x1403B6C18 (MiRewritePteWithLockBit.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiDeleteVadAwePtes @ 0x14054BB34 (MiDeleteVadAwePtes.c)
 */

unsigned __int64 __fastcall MiDeleteLargeUserPde(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  int v7; // r13d
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  int v13; // r13d
  unsigned __int64 i; // rcx
  unsigned __int64 v15; // rbx
  int v16; // r15d
  __int64 v17; // r8
  bool v18; // zf
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v20; // r8
  unsigned __int64 result; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  char v29; // r8
  __int64 v30; // [rsp+20h] [rbp-48h] BYREF
  __int64 v31; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+80h] [rbp+18h] BYREF
  int v34; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a1;
  v31 = v3;
  v7 = *(_DWORD *)(v3 + 104);
  v34 = v7;
  v30 = MI_READ_PTE_LOCK_FREE(a2);
  v9 = v30;
  v10 = v30 & 1;
  if ( (v30 & 1) != 0 )
  {
    v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v30);
  }
  else if ( qword_140C4DF40 )
  {
    if ( (v30 & 0x10) != 0 )
      v9 = v30 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v9 = ~qword_140C4DF40 & v30;
  }
  v11 = (v9 >> 12) & 0xFFFFFFFFFLL;
  v12 = (-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) + 16;
  v13 = v7 & 0x10;
  if ( v13 )
  {
    MiDeleteVadAwePtes(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 32LL), a2, (__int64 *)(v3 + 112));
    goto LABEL_28;
  }
  if ( a3 )
  {
    if ( v10 )
    {
      MiRewritePteWithLockBit(*(_QWORD *)(v4 + 24), (volatile __int64 *)a2, ZeroPte);
      goto LABEL_26;
    }
    v15 = ZeroPte;
    v16 = 0;
    if ( MiPteInShadowRange(a2) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v16 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v18 = (ZeroPte & 1) == 0;
          goto LABEL_21;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v18 = (ZeroPte & 1) == 0;
LABEL_21:
        if ( !v18 )
          v15 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v15;
    if ( v16 )
      MiWritePteShadow(a2, v15, v17);
    v4 = a1;
LABEL_26:
    if ( a3 == 3 )
      goto LABEL_28;
    goto LABEL_27;
  }
  for ( i = 0LL; i < v12; ++i )
    *(_QWORD *)(a2 + 8 * i) = ZeroPte;
LABEL_27:
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a2 << 25) >> 16, v8);
  MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v12, v20);
LABEL_28:
  result = 0xFFFFFA8000000000uLL;
  v22 = 48 * v11 - 0x58000000000LL;
  if ( v10 )
  {
    v23 = *(_QWORD *)(v4 + 16);
    if ( a3 )
      result = MiInsertLargeTbFlushEntry(v23, a3, a2);
    else
      result = MiInsertTbFlushEntry(v23, (__int64)(a2 << 25) >> 16, v12, 0);
  }
  if ( !v13 )
  {
    result = MI_PFN_IS_PROTO(48 * v11 - 0x58000000000LL);
    if ( !(_DWORD)result )
    {
      v33 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v33, v24, v25, v26);
        while ( *(__int64 *)(v22 + 24) < 0 );
      }
      v27 = v31;
      *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 5;
      MiSetLeafPfnBuddy((_QWORD *)(48 * v11 - 0x58000000000LL), *(_QWORD *)(*(_QWORD *)(v27 + 16) + 40LL));
      result = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(*(_QWORD *)(v28 + 16) + 40LL) = v22;
      *(_BYTE *)(v22 + 34) ^= (*(_BYTE *)(v22 + 34) ^ v29) & 7;
      _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  if ( (v34 & 0x800) != 0 && !a3 )
    *(_BYTE *)(v4 + 3) = 15;
  return result;
}
