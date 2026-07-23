/*
 * XREFs of MiJumpStackTarget @ 0x140536290
 * Callers:
 *     MiDoStackCopy @ 0x140536160 (MiDoStackCopy.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x140245010 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x1402451C4 (MiCanStealKernelStack.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetLeafPfnBuddy @ 0x14038059C (MiGetLeafPfnBuddy.c)
 *     MiStackTheftFreezeProcessors @ 0x14053656C (MiStackTheftFreezeProcessors.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(ULONG_PTR *a1, __int64 a2, __int64 a3, _DWORD *a4)
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
  unsigned int v19; // ecx
  unsigned __int64 *v20; // rdi
  int v21; // esi
  unsigned __int64 v22; // rbx
  bool v23; // zf
  ULONG_PTR v24; // rdi
  signed __int32 v25; // eax
  unsigned int v26; // ebx
  volatile signed __int32 *result; // rax
  unsigned __int8 v28; // [rsp+70h] [rbp+8h]
  int v29; // [rsp+78h] [rbp+10h] BYREF
  int v30; // [rsp+80h] [rbp+18h] BYREF
  int v31; // [rsp+88h] [rbp+20h] BYREF

  v30 = 0;
  v5 = *a1;
  v6 = a1[2];
  v7 = _InterlockedDecrement((volatile signed __int32 *)v6);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)v6 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v30, a2, a3, (__int64)a4);
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
    v14 = MiLockWorkingSetShared(v10, a2, a3, a4);
    v29 = 0;
    v28 = v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29, v15, v16, v17);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    if ( *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL)) == *(_QWORD *)(v5 + 32)
      && MiCanStealKernelStack(v9, v13)
      && ((MiGetLeafPfnBuddy((_QWORD *)v9) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0
      && *(_QWORD *)(v5 + 48) == (__int64)(*(_QWORD *)(v9 + 8) << 25) >> 16
      && (v18 = *(_QWORD *)(v9 + 8),
          (v12 = (((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & -(__int64)((unsigned int)MiLockPageTableInternal(
                                                                                                v10,
                                                                                                ((v18 >> 9) & 0x7FFFFFFFF8LL)
                                                                                              - 0x98000000000LL,
                                                                                                1) != 0)) != 0) )
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        MiRemoveLockedPageChargeAndDecRef(v9);
        *(_QWORD *)(v5 + 56) = 0LL;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        MiStackTheftFreezeProcessors(v5);
        v19 = 0;
      }
      else
      {
        v19 = (unsigned int)MiSwapStackPageNoDpc(0LL, v9, v11) != 1 ? 0xC0000434 : 0;
      }
    }
    else
    {
      v19 = -1073740748;
    }
    *(_DWORD *)(v5 + 40) = v19;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
      MiUnlockPageTableInternal(v10, v12);
    MiUnlockWorkingSetShared(v10, v28);
    v20 = *(unsigned __int64 **)(v5 + 16);
    v21 = 0;
    v22 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v20) )
      goto LABEL_27;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v21 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v23 = (ZeroPte & 1) == 0;
        goto LABEL_25;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v23 = (ZeroPte & 1) == 0;
LABEL_25:
      if ( !v23 )
        v22 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_27:
    *v20 = v22;
    if ( v21 )
      MiWritePteShadow((__int64)v20, v22);
  }
LABEL_29:
  v24 = a1[2];
  v25 = _InterlockedDecrement((volatile signed __int32 *)v24);
  v26 = ~v25 & 0x80000000;
  if ( (v25 & 0x7FFFFFFF) != 0 )
  {
    v31 = 0;
    while ( (*(_DWORD *)v24 & 0x80000000) != v26 )
      KeYieldProcessorEx(&v31, a2, a3, (__int64)a4);
  }
  else
  {
    *(_DWORD *)v24 = v26 | *(_DWORD *)(v24 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
