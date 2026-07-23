/*
 * XREFs of MiProtectPrivateMemory @ 0x140318750
 * Callers:
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiSetProtectionOnTransitionPte @ 0x140224A84 (MiSetProtectionOnTransitionPte.c)
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x14023B164 (MiMakeProtoLeafValid.c)
 *     MiMakeVaRangeNoAccess @ 0x1402470B4 (MiMakeVaRangeNoAccess.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14027C880 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiComputePageCommitment @ 0x1403178B0 (MiComputePageCommitment.c)
 *     MiUpdatePfnProtection @ 0x140319020 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MiSanitizePfnProtection @ 0x14033EFE0 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x14033F050 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiFaultInPagedPool @ 0x14052D354 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x140547C24 (MiMakeProtoPrivate.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
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
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  ULONG_PTR v24; // rsi
  __int64 v25; // rcx
  unsigned __int8 v26; // di
  unsigned __int64 v27; // r12
  int PageProtection; // eax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // r9
  __int64 v33; // rbx
  int v34; // eax
  int v35; // r9d
  int v36; // ecx
  unsigned __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // r9
  ULONG_PTR v41; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  struct _LIST_ENTRY *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdi
  int ProtoPrivate; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  _DWORD *v52; // r9
  unsigned int updated; // eax
  int v54; // eax
  __int64 UsedPtesHandle; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  ULONG_PTR v58; // rax
  __int64 v59; // rax
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+34h] [rbp-CCh]
  __int16 v68; // [rsp+44h] [rbp-BCh] BYREF
  int v69; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  _DWORD *v77; // [rsp+88h] [rbp-78h]
  _QWORD v78[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v79; // [rsp+B0h] [rbp-50h]
  __int128 v80; // [rsp+C0h] [rbp-40h]
  __int128 v81; // [rsp+D0h] [rbp-30h]
  __int128 v82; // [rsp+E0h] [rbp-20h]
  __int128 v83; // [rsp+F0h] [rbp-10h]
  __int128 v84; // [rsp+100h] [rbp+0h]
  __int128 v85; // [rsp+110h] [rbp+10h]
  __int128 v86; // [rsp+120h] [rbp+20h]
  __int128 v87; // [rsp+130h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+40h]

  v77 = a8;
  v78[0] = 1LL;
  v88 = 0LL;
  v79 = 0LL;
  v78[1] = 20LL;
  v80 = 0LL;
  v78[2] = 0LL;
  v81 = 0LL;
  v78[3] = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v75 = 0LL;
  v86 = 0LL;
  v68 = 0;
  v87 = 0LL;
  v69 = 0;
  v72 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_DWORD *)(a1 + 48);
  v13 = 3;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = 1LL;
  v70 = v14;
  if ( (v12 & 0x500000) == 0x500000 )
  {
    v15 = (v12 >> 18) & 3;
    v16 = MiVadPageSizes[v15];
    v13 = MiVadPageIndices[v15];
    v17 = 16LL;
    v71 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v73 = v17;
  }
  else
  {
    v71 = 1LL;
  }
  v18 = (v12 >> 12) & 0x3F;
  v65 = 0;
  v74 = (unsigned int)v18;
  v64 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v18, 0x140000000LL, (_DWORD *)1);
  if ( MiComputePageCommitment(a2, a3, a1, v64, 0, &v72) != ((__int64)(v14 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v10, v64);
    return 3221225517LL;
  }
  v20 = v72;
  if ( v72 )
  {
    MiUnlockWorkingSetShared(v10, v64);
    result = MiChargeFullProcessCommitment(Process, v20);
    if ( (int)result < 0 )
      return result;
    v64 = MiLockWorkingSetShared(v10, v21, v22, v23);
  }
  v24 = v11;
  if ( v13 <= 1 )
  {
    v25 = 2 - v13;
    do
    {
      v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v25;
    }
    while ( v25 );
    v70 = v14;
  }
  v26 = v64;
  v27 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeSystemAddressValid(v24, 0);
  if ( MI_READ_PTE_LOCK_FREE(v24) )
  {
    while ( 1 )
    {
      PageProtection = MiGetPageProtection(a1, v24, (__int64)&v68);
      v29 = v75;
      if ( !v75 )
        break;
      MiUnlockPageTableInternal(v10, v27);
      MiUnlockWorkingSetShared(v10, v64);
      MiFaultInPagedPool(v29);
      MiLockWorkingSetShared(v10, v30, v31, v32);
      MiMakeSystemAddressValid(v24, 0);
      if ( !MI_READ_PTE_LOCK_FREE(v24) )
        goto LABEL_18;
    }
    v33 = a1;
    v35 = MmProtectToValue[PageProtection];
    v36 = 1;
    v34 = v69;
    v65 = 1;
  }
  else
  {
LABEL_18:
    v33 = a1;
    v34 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1);
    v36 = 0;
    v69 = v34;
  }
  *a7 = v34 | v35;
  v37 = v70;
  while ( v24 <= v37 )
  {
    if ( (v24 & 0xFFF) == 0 || v36 == 1 )
    {
      v65 = 0;
      if ( v27 )
      {
        MiFlushTbList(v78);
        MiUnlockPageTableInternal(v10, v27);
      }
      if ( MiWorkingSetIsContended(v10) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v10, v26);
        MiLockWorkingSetShared(v10, v38, v39, v40);
      }
      v27 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v24, 0);
    }
    v41 = *(_QWORD *)v24;
    if ( v24 >= 0xFFFFF6FB7DBED000uLL
      && v24 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v41 & 1) != 0
      && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v43 = *((_QWORD *)&Flink->Flink + ((v24 >> 3) & 0x1FF));
        v44 = v41 | 0x20;
        if ( (v43 & 0x20) == 0 )
          v44 = v41;
        v41 = v44;
        if ( (v43 & 0x42) != 0 )
          v41 = v44 | 0x42;
      }
    }
    v70 = v41;
    if ( (v41 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v70)
        && (unsigned int)MiPteHasShadow()
        && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
      {
        v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v45 )
        {
          v46 = *((_QWORD *)&v45->Flink + (((unsigned __int64)&v70 >> 3) & 0x1FF));
          v47 = v41 | 0x20;
          if ( (v46 & 0x20) == 0 )
            v47 = v41;
          v41 = v47;
          if ( (v46 & 0x42) != 0 )
            v41 = v47 | 0x42;
        }
      }
      v48 = (v41 >> 12) & 0xFFFFFFFFFLL;
      if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v24) )
      {
        v33 = a1;
        updated = a4;
      }
      else
      {
        if ( (unsigned int)MI_PFN_IS_PROTO(48 * v48 - 0x58000000000LL) )
        {
          MiFlushTbList(v78);
          v26 = v64;
          ProtoPrivate = MiMakeProtoPrivate(v10, v64, v24);
          if ( ProtoPrivate )
          {
            if ( ProtoPrivate == 1 )
            {
              --v72;
            }
            else
            {
              v27 = 0LL;
              v65 = 1;
              MiLockWorkingSetShared(v10, v50, v51, v52);
            }
          }
          v33 = a1;
          goto LABEL_56;
        }
        if ( (a5 & 0x101) != 0 )
        {
          v33 = a1;
          v26 = v64;
          if ( (unsigned int)MiMakeVaRangeNoAccess(a1, v24, v37, (__int64)v78, BugCheckParameter4, v77) )
          {
            v11 += 8 * v71;
            v24 += 8 * v73;
          }
          goto LABEL_56;
        }
        v33 = a1;
        updated = MiUpdatePfnProtection(a1, 48 * v48 - 0x58000000000LL, a4);
        a4 = updated;
      }
      MiRevertValidPte(v33, v24, updated, v48, (__int64)v78);
      v11 += 8 * v71;
      v24 += 8 * v73;
    }
    else
    {
      if ( (v41 & 0x400) != 0 )
      {
        MiFlushTbList(v78);
        v26 = v64;
        if ( (int)MiMakeProtoLeafValid(v24, 1LL, v64) < 0 )
        {
          v11 += 8LL;
          v24 += 8LL;
        }
        v36 = 1;
        v65 = 1;
        continue;
      }
      if ( (v41 & 0x800) == 0 )
      {
        if ( v71 != 1 )
          KeBugCheckEx(0x1Au, 0x44000uLL, v11, v41, 0LL);
        if ( v41 )
        {
          v58 = v41 >> 5;
        }
        else
        {
          UsedPtesHandle = MiGetUsedPtesHandle(v11 << 25 >> 16);
          MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v56, v57);
          LODWORD(v58) = *(_DWORD *)(v33 + 48) >> 7;
        }
        a4 = MiSanitizePfnProtection(v33, v58 & 0x1F, a4);
        v59 = 32LL * (a4 & 0x1F);
        if ( v41 )
          v60 = v59 | v41 & 0xFFFFFFFFFFFFFC1FuLL;
        else
          v60 = MiSwizzleInvalidPte(v59);
        v70 = v60;
        v61 = v60;
        if ( (unsigned int)MiPteInShadowRange(v11) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v62 = v60;
            if ( !HIBYTE(word_140C4E048) && (v60 & 1) != 0 )
              v62 = v60 | 0x8000000000000000uLL;
            *(_QWORD *)v11 = v62;
            MiWritePteShadow(v11, v62);
            goto LABEL_100;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            *(_QWORD *)v11 = v60;
LABEL_100:
            v33 = a1;
            v11 += 8LL;
            v26 = v64;
            v24 += 8LL;
            goto LABEL_56;
          }
          if ( (v60 & 1) != 0 )
            v61 = v60 | 0x8000000000000000uLL;
        }
        *(_QWORD *)v11 = v61;
        goto LABEL_100;
      }
      v54 = MiSetProtectionOnTransitionPte(v33, (_QWORD *)v24, a4, 1);
      if ( v71 != 1 )
      {
        v11 += 8 * v71;
        v26 = v64;
        v24 += 8 * v73;
        goto LABEL_56;
      }
      if ( !v54 )
      {
        v26 = v64;
        v11 += 8LL;
        v24 += 8LL;
        goto LABEL_56;
      }
    }
    v26 = v64;
LABEL_56:
    v36 = v65;
  }
  MiFlushTbList(v78);
  if ( v27 )
    MiUnlockPageTableInternal(v10, v27);
  MiUnlockWorkingSetShared(v10, v26);
  if ( v72 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
