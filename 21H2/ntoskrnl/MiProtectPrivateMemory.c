/*
 * XREFs of MiProtectPrivateMemory @ 0x14032EA60
 * Callers:
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeProtoPrivate @ 0x1402011DC (MiMakeProtoPrivate.c)
 *     MiFaultInPagedPool @ 0x1402019FC (MiFaultInPagedPool.c)
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiMakeProtoLeafValid @ 0x140240C38 (MiMakeProtoLeafValid.c)
 *     MiRotatedToFrameBuffer @ 0x1402433D0 (MiRotatedToFrameBuffer.c)
 *     MiMakeVaRangeNoAccess @ 0x14024D7F4 (MiMakeVaRangeNoAccess.c)
 *     MiComputePageCommitment @ 0x14028EDD0 (MiComputePageCommitment.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030EBD0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x140319160 (MiGetPageProtection.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiRevertValidPte @ 0x14032E130 (MiRevertValidPte.c)
 *     MiSanitizePfnProtection @ 0x14032E680 (MiSanitizePfnProtection.c)
 *     MiSetProtectionOnTransitionPte @ 0x14032E970 (MiSetProtectionOnTransitionPte.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiReturnFullProcessCommitment @ 0x1406FEC50 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        int *a7,
        _DWORD *a8)
{
  ULONG_PTR v11; // r12
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r13d
  __int64 v19; // rbx
  unsigned __int8 v20; // cl
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  int PageProtection; // eax
  __int64 *v24; // rdi
  ULONG_PTR v25; // rdi
  int v26; // r8d
  int v27; // eax
  ULONG_PTR v28; // r9
  int v29; // eax
  __int64 result; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  ULONG_PTR v35; // r14
  __int64 v36; // rdi
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r9
  unsigned __int64 UsedPtesHandle; // rax
  int ProtoPrivate; // eax
  __int64 v44; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v49; // [rsp+40h] [rbp-C0h]
  __int64 v50; // [rsp+48h] [rbp-B8h]
  __int16 v52; // [rsp+58h] [rbp-A8h] BYREF
  int v53; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  int v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v61; // [rsp+98h] [rbp-68h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-60h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-58h]
  _DWORD *v64; // [rsp+B0h] [rbp-50h]
  int v65; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v66; // [rsp+C4h] [rbp-3Ch]
  __int16 v67; // [rsp+C6h] [rbp-3Ah]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  __int64 v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  _BYTE v71[152]; // [rsp+E0h] [rbp-20h] BYREF

  v64 = a8;
  BugCheckParameter2 = a1;
  v67 = 0;
  v61 = 0LL;
  v52 = 0;
  v53 = 0;
  memset(v71, 0, sizeof(v71));
  v68 = 20LL;
  v65 = 1;
  v66 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v56 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v50 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_DWORD *)(a1 + 48);
  v13 = 3;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57 = 1LL;
  if ( (v12 & 0xA00000) == 0xA00000 )
  {
    v15 = (v12 >> 19) & 3;
    v16 = MiVadPageSizes[v15];
    v13 = MiVadPageIndices[v15];
    v17 = 16LL;
    v55 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v57 = v17;
  }
  else
  {
    v55 = 1LL;
  }
  v18 = 0;
  v62 = (v12 >> 12) & 0x7F;
  v49 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  if ( MiComputePageCommitment(a2, a3, BugCheckParameter2, v49, 0, (__int64)&v56, 0LL) != ((__int64)(v14 - v11) >> 3)
                                                                                        + 1 )
  {
    MiUnlockWorkingSetShared(v50, v49);
    return 3221225517LL;
  }
  v19 = v56;
  if ( v56 )
  {
    MiUnlockWorkingSetShared(v50, v49);
    result = MiChargeFullProcessCommitment(Process, v19);
    if ( (int)result < 0 )
      return result;
    v20 = MiLockWorkingSetShared(v50);
    v49 = v20;
  }
  else
  {
    v20 = v49;
  }
  v21 = v11;
  if ( v13 <= 1 )
  {
    v44 = 2 - v13;
    do
    {
      v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v44;
    }
    while ( v44 );
    v20 = v49;
  }
  v22 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = v22;
  while ( 1 )
  {
    MiMakeSystemAddressValid(v21, 0LL, v62, v20, 0);
    if ( !MI_READ_PTE_LOCK_FREE(v21) )
      break;
    PageProtection = MiGetPageProtection(BugCheckParameter2, v21, &v61, &v53, &v52);
    v24 = v61;
    if ( !v61 )
    {
      v18 = 1;
      v25 = BugCheckParameter2;
      v26 = MmProtectToValue[PageProtection];
      v27 = v53;
      goto LABEL_13;
    }
    MiUnlockPageTableInternal(v50, v22);
    MiUnlockWorkingSetShared(v50, v49);
    MiFaultInPagedPool((ULONG_PTR)v24);
    MiLockWorkingSetShared(v50);
    v20 = v49;
  }
  v25 = BugCheckParameter2;
  v27 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(BugCheckParameter2);
  v53 = v27;
LABEL_13:
  *a7 = v27 | v26;
  if ( v21 <= v14 )
  {
    while ( 1 )
    {
      if ( (v21 & 0xFFF) == 0 || v18 )
      {
        v18 = 0;
        if ( v22 )
        {
          MiFlushTbList(&v65);
          v39 = v22;
          v40 = v50;
          MiUnlockPageTableInternal(v50, v39);
        }
        else
        {
          v40 = v50;
        }
        if ( (unsigned int)MiWorkingSetIsContended(v40) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v40, v49);
          MiLockWorkingSetShared(v40);
        }
        v58 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v21, (__int64)&v65, v62, v49, 0);
      }
      v28 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v28 & 1) != 0
        && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v46 = *((_QWORD *)&Flink->Flink + ((v21 >> 3) & 0x1FF));
          v47 = v28 | 0x20;
          if ( (v46 & 0x20) == 0 )
            v47 = *(_QWORD *)v21;
          v28 = v47;
          if ( (v46 & 0x42) != 0 )
            v28 = v47 | 0x42;
        }
      }
      v60 = v28;
      if ( (v28 & 1) != 0 )
      {
        v32 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v60) >> 12) & 0xFFFFFFFFFFLL;
        v35 = BugCheckParameter2;
        v36 = 48 * v32 - 0x220000000000LL;
        if ( (*(_DWORD *)(BugCheckParameter2 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v21) )
          goto LABEL_37;
        if ( *(__int64 *)(v36 + 40) < 0 )
        {
          MiFlushTbList(&v65);
          ProtoPrivate = MiMakeProtoPrivate(v50, v49, v21);
          if ( ProtoPrivate )
          {
            if ( ProtoPrivate == 1 )
            {
              --v56;
            }
            else
            {
              v58 = 0LL;
              v18 = 1;
              MiLockWorkingSetShared(v50);
            }
          }
          goto LABEL_23;
        }
        if ( (a5 & 0x101) != 0 )
        {
          if ( !(unsigned int)MiMakeVaRangeNoAccess(v35, v21, v14, (__int64)&v65, BugCheckParameter4, v64) )
            goto LABEL_23;
        }
        else
        {
          v59 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v59, v31, v33, v34);
            while ( *(__int64 *)(v36 + 24) < 0 );
          }
          a4 = MiSanitizePfnProtection(v35, (*(_QWORD *)(v36 + 16) >> 5) & 0x1F, a4);
          v38 = 32LL * (a4 & 0x1F);
          if ( v37 )
            *(_QWORD *)(v36 + 16) = v38 | v37 & 0xFFFFFFFFFFFFFC1FuLL;
          else
            *(_QWORD *)(v36 + 16) = MiSwizzleInvalidPte(v38);
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
          MiRevertValidPte(v35, v21, a4, v32, (__int64)&v65);
        }
        v11 += 8 * v55;
        v21 += 8 * v57;
        goto LABEL_23;
      }
      if ( (v28 & 0x400) != 0 )
      {
        MiFlushTbList(&v65);
        if ( (int)MiMakeProtoLeafValid(v21, 1LL, v49) < 0 )
        {
          v11 += 8LL;
          v21 += 8LL;
        }
        v18 = 1;
        goto LABEL_23;
      }
      if ( (v28 & 0x800) == 0 )
        break;
      v29 = MiSetProtectionOnTransitionPte(v25, v21, a4, 1);
      if ( v55 != 1 )
      {
        v11 += 8 * v55;
        v21 += 8 * v57;
        goto LABEL_23;
      }
      if ( !v29 )
        goto LABEL_22;
LABEL_23:
      v22 = v58;
      v25 = BugCheckParameter2;
      if ( v21 > v14 )
        goto LABEL_24;
    }
    if ( v55 != 1 )
      KeBugCheckEx(0x1Au, 0x44000uLL, v11, v28, 0LL);
    if ( v28 )
    {
      a4 = MiSanitizePfnProtection(v25, (v28 >> 5) & 0x1F, a4);
      v60 = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)(32 * a4)) & 0x3E0;
    }
    else
    {
      UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      a4 = MiSanitizePfnProtection(v25, (*(_DWORD *)(v25 + 48) >> 7) & 0x1F, a4);
      v60 = MiSwizzleInvalidPte(32LL * (a4 & 0x1F));
    }
    *(_QWORD *)v11 = v60;
LABEL_22:
    v11 += 8LL;
    v21 += 8LL;
    goto LABEL_23;
  }
LABEL_24:
  MiFlushTbList(&v65);
  if ( v22 )
    MiUnlockPageTableInternal(v50, v22);
  MiUnlockWorkingSetShared(v50, v49);
  if ( v56 )
    MiReturnFullProcessCommitment(Process, v56);
  return 0LL;
}
