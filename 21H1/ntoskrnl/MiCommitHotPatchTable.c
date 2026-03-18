/*
 * XREFs of MiCommitHotPatchTable @ 0x140538DA0
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408C8CE8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rbx
  int v20; // r13d
  bool v21; // zf
  __int64 v22; // r8
  __int64 UsedPtesHandle; // [rsp+30h] [rbp-58h]
  unsigned __int64 v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 *v25; // [rsp+40h] [rbp-48h]
  unsigned __int8 v27; // [rsp+A8h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  result = MiChargeFullProcessCommitment(Process, a3);
  if ( (int)result >= 0 )
  {
    v8 = (__int64)&Process[1].ActiveProcessorsPadding[6];
    v25 = &Process[1].ActiveProcessorsPadding[6];
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
    v24 = v15 + 8 * (a3 - 1);
    v16 = MiLockWorkingSetShared(v8);
    v27 = v16;
    while ( v15 <= v24 )
    {
      if ( v12 == a2 || (v15 & 0xFFF) == 0 )
      {
        if ( v11 )
        {
          MiIncreaseUsedPtesCount(UsedPtesHandle, v11, v17, v18);
          v11 = 0;
        }
        if ( v9 )
          MiUnlockPageTableInternal(v8, v9, v17);
        v9 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v15, 0LL, v13, v16, 0);
        UsedPtesHandle = MiGetUsedPtesHandle(v12);
      }
      v19 = v14;
      v20 = 0;
      if ( !MiPteInShadowRange(v15) )
        goto LABEL_18;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C4DF48) )
        {
          v21 = (v14 & 1) == 0;
          goto LABEL_16;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v21 = (v14 & 1) == 0;
LABEL_16:
        if ( !v21 )
          v19 = v14 | 0x8000000000000000uLL;
      }
LABEL_18:
      *(_QWORD *)v15 = v19;
      if ( v20 )
        MiWritePteShadow(v15, v19);
      v8 = (__int64)v25;
      ++v11;
      v16 = v27;
      v15 += 8LL;
      v12 += 4096LL;
    }
    MiIncreaseUsedPtesCount(UsedPtesHandle, v11, v17, v18);
    MiUnlockPageTableInternal(v8, v9, v22);
    MiUnlockWorkingSetShared(v8, v16);
    return 0LL;
  }
  return result;
}
