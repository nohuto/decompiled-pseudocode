/*
 * XREFs of MiDeleteLargeUserPde @ 0x14054A4BC
 * Callers:
 *     MiDeleteVa @ 0x140242B90 (MiDeleteVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiDecreaseUsedPtesCount @ 0x14034EF54 (MiDecreaseUsedPtesCount.c)
 *     MiSetLeafPfnBuddy @ 0x140358D90 (MiSetLeafPfnBuddy.c)
 *     MiRewritePteWithLockBit @ 0x1403B2B38 (MiRewritePteWithLockBit.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiDeleteVadAwePtes @ 0x140546664 (MiDeleteVadAwePtes.c)
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
  __int64 v16; // r8
  bool v17; // zf
  ULONG_PTR UsedPtesHandle; // rax
  __int64 v19; // r8
  unsigned __int64 result; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r9
  __int64 v27; // r9
  char v28; // r8
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+80h] [rbp+18h] BYREF
  int v33; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 168);
  v4 = a1;
  v30 = v3;
  v7 = *(_DWORD *)(v3 + 104);
  v33 = v7;
  v29 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v29;
  v9 = v29 & 1;
  if ( (v29 & 1) != 0 )
  {
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
  }
  else if ( qword_140C4DD40 )
  {
    if ( (v29 & 0x10) != 0 )
      v8 = v29 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v8 = ~qword_140C4DD40 & v29;
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
        if ( !HIBYTE(word_140C4DE08) )
        {
          v17 = (ZeroPte & 1) == 0;
          goto LABEL_21;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v17 = (ZeroPte & 1) == 0;
LABEL_21:
        if ( !v17 )
          v14 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a2 = v14;
    if ( v15 )
      MiWritePteShadow(a2, v14, v16);
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
  MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v11, v19);
LABEL_28:
  result = 0xFFFFFA8000000000uLL;
  v21 = 48 * v10 - 0x58000000000LL;
  if ( v9 )
  {
    v22 = *(_QWORD *)(v4 + 16);
    if ( a3 )
      result = MiInsertLargeTbFlushEntry(v22, a3, a2);
    else
      result = MiInsertTbFlushEntry(v22, (__int64)(a2 << 25) >> 16, v11, 0);
  }
  if ( !v12 )
  {
    result = MI_PFN_IS_PROTO(48 * v10 - 0x58000000000LL);
    if ( !(_DWORD)result )
    {
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v23, v24, v25);
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      v26 = v30;
      *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0xF8 | 5;
      MiSetLeafPfnBuddy((_QWORD *)(48 * v10 - 0x58000000000LL), *(_QWORD *)(*(_QWORD *)(v26 + 16) + 40LL));
      result = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(*(_QWORD *)(v27 + 16) + 40LL) = v21;
      *(_BYTE *)(v21 + 34) ^= (*(_BYTE *)(v21 + 34) ^ v28) & 7;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  if ( (v33 & 0x800) != 0 && !a3 )
    *(_BYTE *)(v4 + 3) = 15;
  return result;
}
