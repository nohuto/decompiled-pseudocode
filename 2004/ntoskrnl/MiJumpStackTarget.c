/*
 * XREFs of MiJumpStackTarget @ 0x140530B80
 * Callers:
 *     MiDoStackCopy @ 0x140530A50 (MiDoStackCopy.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x140355280 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140355434 (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14037E4DC (MiGetLeafPfnBuddy.c)
 *     MiStackTheftFreezeProcessors @ 0x140530E5C (MiStackTheftFreezeProcessors.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(ULONG_PTR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rsi
  ULONG_PTR v6; // rdi
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  __int16 v13; // di
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // ecx
  unsigned __int64 *v23; // rdi
  int v24; // esi
  unsigned __int64 v25; // rbx
  bool v26; // zf
  ULONG_PTR v27; // rdi
  signed __int32 v28; // eax
  unsigned int v29; // ebx
  volatile signed __int32 *result; // rax
  unsigned __int8 v31; // [rsp+70h] [rbp+8h]
  int v32; // [rsp+78h] [rbp+10h] BYREF
  int v33; // [rsp+80h] [rbp+18h] BYREF
  int v34; // [rsp+88h] [rbp+20h] BYREF

  v33 = 0;
  v5 = *a1;
  v6 = a1[2];
  v7 = _InterlockedDecrement((volatile signed __int32 *)v6);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)v6 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v33, a2, a3, a4);
    goto LABEL_29;
  }
  *(_DWORD *)v6 = v8 | *(_DWORD *)(v6 + 4);
  if ( !*(_DWORD *)(v5 + 40) )
  {
    v9 = 48LL * *(_QWORD *)v5 - 0x58000000000LL;
    v10 = *(_QWORD *)(v5 + 64);
    v11 = 48LL * *(_QWORD *)(v5 + 8) - 0x58000000000LL;
    v12 = 0LL;
    v13 = (*(_QWORD *)(v5 + 56) != 0LL) + 1;
    v14 = MiLockWorkingSetShared(v10);
    v32 = 0;
    v31 = v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v32, v15, v16, v17);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) == *(_QWORD *)(v5 + 32)
      && MiCanStealKernelStack(v9, v13)
      && ((MiGetLeafPfnBuddy((_QWORD *)v9) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0
      && *(_QWORD *)(v5 + 48) == (__int64)(*(_QWORD *)(v9 + 8) << 25) >> 16
      && (v18 = *(_QWORD *)(v9 + 8),
          (v12 = (((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & -(__int64)((unsigned int)MiLockPageTableInternal(
                                                                                                v10,
                                                                                                ((v18 >> 9) & 0x7FFFFFFFF8LL)
                                                                                              - 0x98000000000LL,
                                                                                                1LL) != 0)) != 0) )
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        MiRemoveLockedPageChargeAndDecRef(v9, v19, v20, v21);
        *(_QWORD *)(v5 + 56) = 0LL;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        MiStackTheftFreezeProcessors(v5);
        v22 = 0;
      }
      else
      {
        v22 = (unsigned int)MiSwapStackPageNoDpc(0LL, v9, v11) != 1 ? 0xC0000434 : 0;
      }
    }
    else
    {
      v22 = -1073740748;
    }
    *(_DWORD *)(v5 + 40) = v22;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
      MiUnlockPageTableInternal(v10, v12);
    MiUnlockWorkingSetShared(v10, v31);
    v23 = *(unsigned __int64 **)(v5 + 16);
    v24 = 0;
    v25 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v23) )
      goto LABEL_27;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v24 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
        v26 = (ZeroPte & 1) == 0;
        goto LABEL_25;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v26 = (ZeroPte & 1) == 0;
LABEL_25:
      if ( !v26 )
        v25 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_27:
    *v23 = v25;
    if ( v24 )
      MiWritePteShadow((__int64)v23, v25, a3);
  }
LABEL_29:
  v27 = a1[2];
  v28 = _InterlockedDecrement((volatile signed __int32 *)v27);
  v29 = ~v28 & 0x80000000;
  if ( (v28 & 0x7FFFFFFF) != 0 )
  {
    v34 = 0;
    while ( (*(_DWORD *)v27 & 0x80000000) != v29 )
      KeYieldProcessorEx(&v34, a2, a3, a4);
  }
  else
  {
    *(_DWORD *)v27 = v29 | *(_DWORD *)(v27 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
