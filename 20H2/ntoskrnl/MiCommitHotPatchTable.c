/*
 * XREFs of MiCommitHotPatchTable @ 0x14053CDC0
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CFE78 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCommitHotPatchTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rdi
  __int64 result; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned int v11; // r15d
  unsigned __int64 v12; // r12
  unsigned int v13; // esi
  __int64 v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // rbx
  int v18; // r13d
  __int64 v19; // r8
  bool v20; // zf
  __int64 UsedPtesHandle; // [rsp+30h] [rbp-58h]
  unsigned __int64 v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v23; // [rsp+40h] [rbp-48h]
  unsigned __int8 v25; // [rsp+A8h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = (__int64)&Process[1].ActiveProcessorsPadding[6];
    v23 = &Process[1].ActiveProcessorsPadding[6];
    v9 = 0LL;
    v10 = a3 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | *(_DWORD *)(a1 + 52) & 0x7FFFFFFF);
    v11 = 0;
    UsedPtesHandle = 0LL;
    *(_DWORD *)(a1 + 52) ^= (v10 ^ *(_DWORD *)(a1 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(a1 + 34) = v10 >> 31;
    v12 = a2;
    v13 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
    v14 = MiSwizzleInvalidPte(32LL);
    v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v22 = v15 + 8 * (a3 - 1);
    v16 = MiLockWorkingSetShared(v8);
    v25 = v16;
    while ( v15 <= v22 )
    {
      if ( v12 == a2 || (v15 & 0xFFF) == 0 )
      {
        if ( v11 )
        {
          MiIncreaseUsedPtesCount(UsedPtesHandle, v11);
          v11 = 0;
        }
        if ( v9 )
          MiUnlockPageTableInternal(v8, v9);
        v9 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v15, 0LL, v13, v16, 0);
        UsedPtesHandle = MiGetUsedPtesHandle(v12);
      }
      v17 = v14;
      v18 = 0;
      if ( !MiPteInShadowRange(v15) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v20 = (v14 & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v20 = (v14 & 1) == 0;
LABEL_16:
        if ( !v20 )
          v17 = v14 | 0x8000000000000000uLL;
      }
LABEL_18:
      *(_QWORD *)v15 = v17;
      if ( v18 )
        MiWritePteShadow(v15, v17, v19);
      v8 = (__int64)v23;
      ++v11;
      v16 = v25;
      v15 += 8LL;
      v12 += 4096LL;
    }
    MiIncreaseUsedPtesCount(UsedPtesHandle, v11);
    MiUnlockPageTableInternal(v8, v9);
    MiUnlockWorkingSetShared(v8, v16);
    return 0LL;
  }
  return result;
}
