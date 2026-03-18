/*
 * XREFs of MiJumpStackTarget @ 0x140530530
 * Callers:
 *     MiDoStackCopy @ 0x140530400 (MiDoStackCopy.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiSwapStackPageNoDpc @ 0x1403177D0 (MiSwapStackPageNoDpc.c)
 *     MiCanStealKernelStack @ 0x140317984 (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x14037DA1C (MiGetLeafPfnBuddy.c)
 *     MiStackTheftFreezeProcessors @ 0x14053080C (MiStackTheftFreezeProcessors.c)
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
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  unsigned int v20; // ecx
  unsigned __int64 *v21; // rdi
  int v22; // esi
  unsigned __int64 v23; // rbx
  bool v24; // zf
  ULONG_PTR v25; // rdi
  signed __int32 v26; // eax
  unsigned int v27; // ebx
  volatile signed __int32 *result; // rax
  unsigned __int8 v29; // [rsp+70h] [rbp+8h]
  int v30; // [rsp+78h] [rbp+10h] BYREF
  int v31; // [rsp+80h] [rbp+18h] BYREF
  int v32; // [rsp+88h] [rbp+20h] BYREF

  v31 = 0;
  v5 = *a1;
  v6 = a1[2];
  v7 = _InterlockedDecrement((volatile signed __int32 *)v6);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)v6 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v31, a2, a3, a4);
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
    v30 = 0;
    v29 = v14;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30, v15, v16, v17);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    v18 = (*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL;
    if ( *(_QWORD *)(qword_140C4E588 + 8 * v18) == *(_QWORD *)(v5 + 32)
      && MiCanStealKernelStack(v9, v13)
      && ((MiGetLeafPfnBuddy((_QWORD *)v9) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0
      && *(_QWORD *)(v5 + 48) == (__int64)(*(_QWORD *)(v9 + 8) << 25) >> 16
      && (v19 = *(_QWORD *)(v9 + 8),
          (v12 = (((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & -(__int64)((unsigned int)MiLockPageTableInternal(
                                                                                                v10,
                                                                                                ((v19 >> 9) & 0x7FFFFFFFF8LL)
                                                                                              - 0x98000000000LL,
                                                                                                1LL) != 0)) != 0) )
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        MiRemoveLockedPageChargeAndDecRef(v9);
        *(_QWORD *)(v5 + 56) = 0LL;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        MiStackTheftFreezeProcessors(v5);
        v20 = 0;
      }
      else
      {
        v20 = (unsigned int)MiSwapStackPageNoDpc(0LL, v9, v11) != 1 ? 0xC0000434 : 0;
      }
    }
    else
    {
      v20 = -1073740748;
    }
    *(_DWORD *)(v5 + 40) = v20;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v12 )
      MiUnlockPageTableInternal(v10, v12, v18);
    MiUnlockWorkingSetShared(v10, v29);
    v21 = *(unsigned __int64 **)(v5 + 16);
    v22 = 0;
    v23 = ZeroPte;
    if ( !MiPteInShadowRange((unsigned __int64)v21) )
      goto LABEL_27;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v22 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v24 = (ZeroPte & 1) == 0;
        goto LABEL_25;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v24 = (ZeroPte & 1) == 0;
LABEL_25:
      if ( !v24 )
        v23 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_27:
    *v21 = v23;
    if ( v22 )
      MiWritePteShadow((__int64)v21, v23);
  }
LABEL_29:
  v25 = a1[2];
  v26 = _InterlockedDecrement((volatile signed __int32 *)v25);
  v27 = ~v26 & 0x80000000;
  if ( (v26 & 0x7FFFFFFF) != 0 )
  {
    v32 = 0;
    while ( (*(_DWORD *)v25 & 0x80000000) != v27 )
      KeYieldProcessorEx(&v32, a2, a3, a4);
  }
  else
  {
    *(_DWORD *)v25 = v27 | *(_DWORD *)(v25 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
