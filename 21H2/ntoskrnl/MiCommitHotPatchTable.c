/*
 * XREFs of MiCommitHotPatchTable @ 0x14053EB00
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408CD798 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  unsigned __int8 v19; // bl
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  int v23; // r13d
  bool v24; // zf
  __int64 UsedPtesHandle; // [rsp+30h] [rbp-58h]
  unsigned __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v27; // [rsp+40h] [rbp-48h]
  unsigned __int8 v29; // [rsp+A8h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = (__int64)&Process[1].ActiveProcessorsPadding[6];
    v27 = &Process[1].ActiveProcessorsPadding[6];
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
    v26 = v15 + 8 * (a3 - 1);
    v19 = MiLockWorkingSetShared(v8, v16, v17, v18);
    v29 = v19;
    while ( v15 <= v26 )
    {
      if ( v12 == a2 || (v15 & 0xFFF) == 0 )
      {
        if ( v11 )
        {
          MiIncreaseUsedPtesCount(UsedPtesHandle, v11, v20, v21);
          v11 = 0;
        }
        if ( v9 )
          MiUnlockPageTableInternal(v8, v9);
        v9 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v15, 0LL, v13, v19, 0);
        UsedPtesHandle = MiGetUsedPtesHandle(v12);
      }
      v22 = v14;
      v23 = 0;
      if ( !MiPteInShadowRange(v15) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v23 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
          v24 = (v14 & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v24 = (v14 & 1) == 0;
LABEL_16:
        if ( !v24 )
          v22 = v14 | 0x8000000000000000uLL;
      }
LABEL_18:
      *(_QWORD *)v15 = v22;
      if ( v23 )
        MiWritePteShadow(v15, v22);
      v8 = (__int64)v27;
      ++v11;
      v19 = v29;
      v15 += 8LL;
      v12 += 4096LL;
    }
    MiIncreaseUsedPtesCount(UsedPtesHandle, v11, v20, v21);
    MiUnlockPageTableInternal(v8, v9);
    MiUnlockWorkingSetShared(v8, v19);
    return 0LL;
  }
  return result;
}
