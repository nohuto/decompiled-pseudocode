/*
 * XREFs of MiProtectPrivateMemory @ 0x1402349C0
 * Callers:
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14022C130 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiComputePageCommitment @ 0x1402340F0 (MiComputePageCommitment.c)
 *     MiUpdatePfnProtection @ 0x140235290 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x14023672C (MiSetProtectionOnTransitionPte.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     MiSanitizePfnProtection @ 0x1402B74E0 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x1402B7550 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiRotatedToFrameBuffer @ 0x14030F8A8 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14031A4F4 (MiMakeProtoLeafValid.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiFaultInPagedPool @ 0x14052B614 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x140545EE4 (MiMakeProtoPrivate.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned __int64 *v10; // r13
  ULONG_PTR v11; // r15
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rbx
  ULONG_PTR v20; // rsi
  __int64 v21; // rcx
  unsigned __int8 v22; // di
  __int64 v23; // r12
  int PageProtection; // eax
  unsigned __int64 Flink; // rdx
  __int64 v26; // r8
  __int64 v27; // rbx
  ULONG_PTR v28; // rbx
  int v29; // eax
  int v30; // r9d
  __int64 v31; // rcx
  __int64 v32; // r9
  ULONG_PTR v33; // r14
  ULONG_PTR v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct _LIST_ENTRY *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rdx
  int ProtoPrivate; // eax
  unsigned int updated; // eax
  int v47; // eax
  __int64 UsedPtesHandle; // rax
  ULONG_PTR v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v57; // [rsp+30h] [rbp-D0h]
  unsigned int v58; // [rsp+34h] [rbp-CCh]
  __int16 v61; // [rsp+44h] [rbp-BCh] BYREF
  int v62; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+68h] [rbp-98h]
  __int64 v67; // [rsp+70h] [rbp-90h]
  __int64 v68; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h]
  _QWORD v71[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v72; // [rsp+B0h] [rbp-50h]
  __int128 v73; // [rsp+C0h] [rbp-40h]
  __int128 v74; // [rsp+D0h] [rbp-30h]
  __int128 v75; // [rsp+E0h] [rbp-20h]
  __int128 v76; // [rsp+F0h] [rbp-10h]
  __int128 v77; // [rsp+100h] [rbp+0h]
  __int128 v78; // [rsp+110h] [rbp+10h]
  __int128 v79; // [rsp+120h] [rbp+20h]
  __int128 v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+40h]

  v70 = a8;
  v71[0] = 1LL;
  v81 = 0LL;
  v72 = 0LL;
  v71[1] = 20LL;
  v73 = 0LL;
  v71[2] = 0LL;
  v74 = 0LL;
  v71[3] = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v68 = 0LL;
  v79 = 0LL;
  v61 = 0;
  v80 = 0LL;
  v62 = 0;
  v65 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = &Process[1].ActiveProcessorsPadding[6];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_DWORD *)(a1 + 48);
  v13 = 3;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v66 = 1LL;
  v63 = v14;
  if ( (v12 & 0x500000) == 0x500000 )
  {
    v15 = (v12 >> 18) & 3;
    v16 = MiVadPageSizes[v15];
    v13 = MiVadPageIndices[v15];
    v17 = 16LL;
    v64 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v66 = v17;
  }
  else
  {
    v64 = 1LL;
  }
  v58 = 0;
  v67 = (v12 >> 12) & 0x3F;
  v57 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
  if ( MiComputePageCommitment(a2, a3, a1, v57, 0, &v65) != ((__int64)(v14 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v10, v57);
    return 3221225517LL;
  }
  v19 = v65;
  if ( v65 )
  {
    MiUnlockWorkingSetShared(v10, v57);
    result = MiChargeFullProcessCommitment(Process, v19);
    if ( (int)result < 0 )
      return result;
    v57 = MiLockWorkingSetShared(v10);
  }
  v20 = v11;
  if ( v13 <= 1 )
  {
    v21 = 2 - v13;
    do
    {
      v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v21;
    }
    while ( v21 );
    v63 = v14;
  }
  v22 = v57;
  v23 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeSystemAddressValid(v20, 0);
  if ( MI_READ_PTE_LOCK_FREE(v20) )
  {
    while ( 1 )
    {
      PageProtection = MiGetPageProtection(a1, v20, (__int64)&v61);
      v27 = v68;
      if ( !v68 )
        break;
      MiUnlockPageTableInternal(v10);
      MiUnlockWorkingSetShared(v10, v57);
      MiFaultInPagedPool(v27);
      MiLockWorkingSetShared(v10);
      MiMakeSystemAddressValid(v20, 0);
      if ( !MI_READ_PTE_LOCK_FREE(v20) )
        goto LABEL_18;
    }
    v28 = a1;
    v30 = MmProtectToValue[PageProtection];
    v31 = 1LL;
    v29 = v62;
    v58 = 1;
  }
  else
  {
LABEL_18:
    v28 = a1;
    v29 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1);
    v31 = 0LL;
    v62 = v29;
  }
  v32 = v29 | (unsigned int)v30;
  *a7 = v32;
  v33 = v63;
  if ( v20 <= v63 )
  {
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      if ( (v20 & 0xFFF) == 0 || (_DWORD)v31 == 1 )
      {
        v58 = 0;
        if ( v23 )
        {
          MiFlushTbList(v71, 0xFFFFF6FB7DBED7F8uLL);
          MiUnlockPageTableInternal(v10);
        }
        if ( (unsigned int)MiWorkingSetIsContended(v10) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v10, v22);
          MiLockWorkingSetShared(v10);
        }
        v23 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v20, 0);
        Flink = 0xFFFFF6FB7DBED7F8uLL;
      }
      v34 = *(_QWORD *)v20;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v31, 0xFFFFF6FB7DBED7F8uLL, v26, v32)
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v35 = *(_QWORD *)(Flink + 8 * ((v20 >> 3) & 0x1FF));
          Flink = v34 | 0x20;
          if ( (v35 & 0x20) == 0 )
            Flink = v34;
          v34 = Flink;
          if ( (v35 & 0x42) != 0 )
            v34 = Flink | 0x42;
        }
      }
      v63 = v34;
      if ( (v34 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v63)
          && (unsigned int)MiPteHasShadow(v37, v36, v38, v39)
          && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
        {
          v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v40 )
          {
            v41 = *((_QWORD *)&v40->Flink + (((unsigned __int64)&v63 >> 3) & 0x1FF));
            v42 = v34 | 0x20;
            if ( (v41 & 0x20) == 0 )
              v42 = v34;
            v34 = v42;
            if ( (v41 & 0x42) != 0 )
              v34 = v42 | 0x42;
          }
        }
        v43 = (v34 >> 12) & 0xFFFFFFFFFLL;
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v20) == 1 )
        {
          v28 = a1;
          updated = a4;
        }
        else
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(48 * v43 - 0x58000000000LL) )
          {
            MiFlushTbList(v71, v44);
            v22 = v57;
            ProtoPrivate = MiMakeProtoPrivate(v10, v57, v20);
            if ( ProtoPrivate )
            {
              if ( ProtoPrivate == 1 )
              {
                --v65;
              }
              else
              {
                v23 = 0LL;
                v58 = 1;
                MiLockWorkingSetShared(v10);
              }
            }
            v28 = a1;
            goto LABEL_57;
          }
          if ( (a5 & 0x101) != 0 )
          {
            v28 = a1;
            v22 = v57;
            if ( (unsigned int)MiMakeVaRangeNoAccess(a1, v20, v33, (unsigned int)v71, BugCheckParameter4, v70) )
            {
              v11 += 8 * v64;
              v20 += 8 * v66;
            }
            goto LABEL_57;
          }
          v28 = a1;
          updated = MiUpdatePfnProtection(a1, 48 * v43 - 0x58000000000LL, a4);
          a4 = updated;
        }
        MiRevertValidPte(v28, v20, updated, v43, (__int64)v71);
        v11 += 8 * v64;
        v20 += 8 * v66;
      }
      else
      {
        if ( (v34 & 0x400) != 0 )
        {
          MiFlushTbList(v71, Flink);
          v22 = v57;
          if ( (int)MiMakeProtoLeafValid(v20) < 0 )
          {
            v11 += 8LL;
            v20 += 8LL;
          }
          v31 = 1LL;
          v58 = 1;
          goto LABEL_58;
        }
        if ( (v34 & 0x800) == 0 )
        {
          if ( v64 != 1 )
            KeBugCheckEx(0x1Au, 0x44000uLL, v11, v34, 0LL);
          if ( v34 )
          {
            v49 = v34 >> 5;
          }
          else
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16, Flink);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
            LODWORD(v49) = *(_DWORD *)(v28 + 48) >> 7;
          }
          a4 = MiSanitizePfnProtection(v28, v49 & 0x1F, a4);
          v50 = 32LL * (a4 & 0x1F);
          if ( v34 )
            v51 = v50 | v34 & 0xFFFFFFFFFFFFFC1FuLL;
          else
            v51 = MiSwizzleInvalidPte(v50);
          v63 = v51;
          v52 = v51;
          if ( MiPteInShadowRange(v11) )
          {
            if ( (unsigned int)MiPteHasShadow(v54, v53, v26, v32) )
            {
              v55 = v51;
              if ( !HIBYTE(word_140C4DE88) && (v51 & 1) != 0 )
                v55 = v51 | 0x8000000000000000uLL;
              *(_QWORD *)v11 = v55;
              MiWritePteShadow(v11, v55);
              goto LABEL_101;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v11 = v51;
LABEL_101:
              v28 = a1;
              v11 += 8LL;
              v22 = v57;
              v20 += 8LL;
              goto LABEL_57;
            }
            if ( (v51 & 1) != 0 )
              v52 = v51 | 0x8000000000000000uLL;
          }
          *(_QWORD *)v11 = v52;
          goto LABEL_101;
        }
        v47 = MiSetProtectionOnTransitionPte(v28, v20, a4, 1LL);
        if ( v64 != 1 )
        {
          v11 += 8 * v64;
          v22 = v57;
          v20 += 8 * v66;
          goto LABEL_57;
        }
        if ( !v47 )
        {
          v22 = v57;
          v11 += 8LL;
          v20 += 8LL;
          goto LABEL_57;
        }
      }
      v22 = v57;
LABEL_57:
      v31 = v58;
LABEL_58:
      Flink = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( v20 <= v33 );
  }
  MiFlushTbList(v71, Flink);
  if ( v23 )
    MiUnlockPageTableInternal(v10);
  MiUnlockWorkingSetShared(v10, v22);
  if ( v65 )
    MiReturnFullProcessCommitment(Process, v65);
  return 0LL;
}
