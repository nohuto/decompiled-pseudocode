/*
 * XREFs of MiResolveProtoCombine @ 0x14033A920
 * Callers:
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiMakeTransitionPteValid @ 0x140234EB4 (MiMakeTransitionPteValid.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiResolveProtoCombine(unsigned __int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  ULONG_PTR v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rdx
  unsigned __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  char v27; // al
  unsigned __int64 ValidPte; // rax
  char v29; // al
  unsigned __int64 TransitionPteValid; // rdi
  unsigned __int64 v31; // rdx
  int v32; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]
  unsigned __int64 v34; // [rsp+50h] [rbp-38h] BYREF
  int v35; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0LL;
  result = MiLockProtoPoolPage((unsigned __int64)a3, 0LL);
  if ( result )
  {
    v8 = 48 * MiGetContainingPageTable(a3) - 0x220000000000LL;
    v10 = MiLockLeafPage(a3, 0LL);
    if ( !v10 )
    {
      LOBYTE(v9) = 17;
      MiUnlockProtoPoolPage(v8, v9, v11, v12);
      return 0LL;
    }
    v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a3);
    v34 = v13;
    if ( (v13 & 1) != 0 )
    {
      v17 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
      goto LABEL_5;
    }
    if ( (v13 & 0x400) == 0 && (v13 & 0x800) != 0 )
    {
      v17 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v10 + 34) & 0x20) == 0 )
      {
        if ( (MiUnlinkPageFromListEx(v10, 0) & 3) == 0 )
        {
          __incgsdword(0x2E98u);
          *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
          v29 = *(_BYTE *)(v10 + 34);
          ++*(_WORD *)(v10 + 32);
          *(_BYTE *)(v10 + 34) = v29 & 0xF8 | 6;
          TransitionPteValid = MiMakeTransitionPteValid((__int64)a3);
          v33 = TransitionPteValid;
          v34 = TransitionPteValid;
          if ( (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 && (unsigned int)MiIsPteInStore(v17, *(_QWORD *)(v10 + 16)) )
            v6 = MiCaptureDirtyBitToPfn(v10);
          if ( MiPteInShadowRange((unsigned __int64)a3) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v31 = v33;
              if ( !HIBYTE(word_140C51864) && (v33 & 1) != 0 )
                v31 = v33 | 0x8000000000000000uLL;
              *a3 = v31;
              MiWritePteShadow((__int64)a3, v31);
              goto LABEL_5;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              TransitionPteValid = v33;
              if ( (v33 & 1) != 0 )
                TransitionPteValid = v33 | 0x8000000000000000uLL;
            }
            else
            {
              TransitionPteValid = v33;
            }
          }
          *a3 = TransitionPteValid;
LABEL_5:
          v18 = *(_QWORD *)(v10 + 24);
          *(_QWORD *)(v10 + 24) = v18 ^ ((v18 + 1) ^ v18) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v35, v18, v15, v16);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          *(_BYTE *)(v8 + 34) &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v8);
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v6 )
            MiReleasePageFileInfo(v17, v6, 1);
          v19 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFFLL;
          v20 = 48 * v19 - 0x220000000000LL;
          v21 = *(_QWORD *)(v20 + 16);
          v23 = 48 * MiGetContainingPageTable(a1) - 0x220000000000LL;
          v32 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v32, v22, v24, v25);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 = (unsigned __int8)v21 >> 5;
          v27 = *(_BYTE *)(v20 + 34) >> 6;
          if ( v27 != 1 )
          {
            if ( v27 )
            {
              if ( v27 == 2 )
                v26 |= 0x18u;
            }
            else
            {
              v26 |= 8u;
            }
          }
          ValidPte = MiMakeValidPte(a1, v19, v26);
          if ( (unsigned int)MiAllocateWsle(a2, a1, (_QWORD *)v20, 0, ValidPte, 0, 0LL) )
            return 1LL;
          MiLockAndDecrementShareCount(v20, 0);
          MiLockAndDecrementShareCount(v23, 0);
          return 0LL;
        }
        MiDiscardTransitionPteEx(v10, 0LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v14) = 17;
    MiUnlockProtoPoolPage(v8, v14, v15, v16);
    return 0LL;
  }
  return result;
}
