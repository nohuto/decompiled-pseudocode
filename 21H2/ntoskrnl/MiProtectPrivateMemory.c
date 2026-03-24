/*
 * XREFs of MiProtectPrivateMemory @ 0x14030DA00
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14025B310 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiRotatedToFrameBuffer @ 0x1402B0538 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeProtoLeafValid @ 0x1402BCAB4 (MiMakeProtoLeafValid.c)
 *     MiMakeVaRangeNoAccess @ 0x1402C8854 (MiMakeVaRangeNoAccess.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiUpdatePfnProtection @ 0x14030E2D0 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MiSanitizePfnProtection @ 0x140334290 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x140334300 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiSetProtectionOnTransitionPte @ 0x140364614 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiFaultInPagedPool @ 0x14052D114 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x1405479E4 (MiMakeProtoPrivate.c)
 *     MiChargeFullProcessCommitment @ 0x1405F90D0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
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
  ULONG_PTR v33; // rbx
  int v34; // eax
  int v35; // r9d
  int v36; // ecx
  unsigned __int64 v37; // r14
  unsigned __int64 Flink; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  _DWORD *v41; // r9
  ULONG_PTR v42; // rdi
  __int64 v43; // rax
  struct _LIST_ENTRY *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdi
  int ProtoPrivate; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  _DWORD *v51; // r9
  unsigned int updated; // eax
  int v53; // eax
  __int64 UsedPtesHandle; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  ULONG_PTR v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rbx
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+34h] [rbp-CCh]
  __int16 v69; // [rsp+44h] [rbp-BCh] BYREF
  int v70; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v71; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+70h] [rbp-90h]
  __int64 v76; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  _DWORD *v78; // [rsp+88h] [rbp-78h]
  _QWORD v79[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v80; // [rsp+B0h] [rbp-50h]
  __int128 v81; // [rsp+C0h] [rbp-40h]
  __int128 v82; // [rsp+D0h] [rbp-30h]
  __int128 v83; // [rsp+E0h] [rbp-20h]
  __int128 v84; // [rsp+F0h] [rbp-10h]
  __int128 v85; // [rsp+100h] [rbp+0h]
  __int128 v86; // [rsp+110h] [rbp+10h]
  __int128 v87; // [rsp+120h] [rbp+20h]
  __int128 v88; // [rsp+130h] [rbp+30h]
  __int64 v89; // [rsp+140h] [rbp+40h]

  v78 = a8;
  v79[0] = 1LL;
  v89 = 0LL;
  v80 = 0LL;
  v79[1] = 20LL;
  v81 = 0LL;
  v79[2] = 0LL;
  v82 = 0LL;
  v79[3] = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v76 = 0LL;
  v87 = 0LL;
  v69 = 0;
  v88 = 0LL;
  v70 = 0;
  v73 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_DWORD *)(a1 + 48);
  v13 = 3;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v74 = 1LL;
  v71 = v14;
  if ( (v12 & 0x500000) == 0x500000 )
  {
    v15 = (v12 >> 18) & 3;
    v16 = MiVadPageSizes[v15];
    v13 = MiVadPageIndices[v15];
    v17 = 16LL;
    v72 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v74 = v17;
  }
  else
  {
    v72 = 1LL;
  }
  v18 = (v12 >> 12) & 0x3F;
  v66 = 0;
  v75 = (unsigned int)v18;
  v65 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v18, 0x140000000LL, (_DWORD *)1);
  if ( MiComputePageCommitment(a2, a3, a1, v65, 0, &v73) != ((__int64)(v14 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v10, v65);
    return 3221225517LL;
  }
  v20 = v73;
  if ( v73 )
  {
    MiUnlockWorkingSetShared(v10, v65);
    result = MiChargeFullProcessCommitment(Process, v20);
    if ( (int)result < 0 )
      return result;
    v65 = MiLockWorkingSetShared(v10, v21, v22, v23);
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
    v71 = v14;
  }
  v26 = v65;
  v27 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeSystemAddressValid(v24, 0);
  if ( MI_READ_PTE_LOCK_FREE(v24) )
  {
    while ( 1 )
    {
      PageProtection = MiGetPageProtection(a1, v24, (__int64)&v69);
      v29 = v76;
      if ( !v76 )
        break;
      MiUnlockPageTableInternal(v10, v27);
      MiUnlockWorkingSetShared(v10, v65);
      MiFaultInPagedPool(v29);
      MiLockWorkingSetShared(v10, v30, v31, v32);
      MiMakeSystemAddressValid(v24, 0);
      if ( !MI_READ_PTE_LOCK_FREE(v24) )
        goto LABEL_18;
    }
    v33 = a1;
    v35 = MmProtectToValue[PageProtection];
    v36 = 1;
    v34 = v70;
    v66 = 1;
  }
  else
  {
LABEL_18:
    v33 = a1;
    v34 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1);
    v36 = 0;
    v70 = v34;
  }
  *a7 = v34 | v35;
  v37 = v71;
  if ( v24 <= v71 )
  {
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      if ( (v24 & 0xFFF) == 0 || v36 == 1 )
      {
        v66 = 0;
        if ( v27 )
        {
          MiFlushTbList(v79);
          MiUnlockPageTableInternal(v10, v27);
        }
        if ( MiWorkingSetIsContended(v10) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v10, v26);
          MiLockWorkingSetShared(v10, v39, v40, v41);
        }
        v27 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v24, 0);
        Flink = 0xFFFFF6FB7DBED7F8uLL;
      }
      v42 = *(_QWORD *)v24;
      if ( v24 >= 0xFFFFF6FB7DBED000uLL
        && v24 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v42 & 1) != 0
        && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v43 = *(_QWORD *)(Flink + 8 * ((v24 >> 3) & 0x1FF));
          Flink = v42 | 0x20;
          if ( (v43 & 0x20) == 0 )
            Flink = v42;
          v42 = Flink;
          if ( (v43 & 0x42) != 0 )
            v42 = Flink | 0x42;
        }
      }
      v71 = v42;
      if ( (v42 & 1) != 0 )
      {
        if ( (unsigned int)MiPteInShadowRange(&v71, Flink)
          && (unsigned int)MiPteHasShadow()
          && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
        {
          v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v44 )
          {
            v45 = *((_QWORD *)&v44->Flink + (((unsigned __int64)&v71 >> 3) & 0x1FF));
            v46 = v42 | 0x20;
            if ( (v45 & 0x20) == 0 )
              v46 = v42;
            v42 = v46;
            if ( (v45 & 0x42) != 0 )
              v42 = v46 | 0x42;
          }
        }
        v47 = (v42 >> 12) & 0xFFFFFFFFFLL;
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && MiRotatedToFrameBuffer(v24) )
        {
          v33 = a1;
          updated = a4;
        }
        else
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(48 * v47 - 0x58000000000LL) )
          {
            MiFlushTbList(v79);
            v26 = v65;
            ProtoPrivate = MiMakeProtoPrivate(v10, v65, v24);
            if ( ProtoPrivate )
            {
              if ( ProtoPrivate == 1 )
              {
                --v73;
              }
              else
              {
                v27 = 0LL;
                v66 = 1;
                MiLockWorkingSetShared(v10, v49, v50, v51);
              }
            }
            v33 = a1;
            goto LABEL_57;
          }
          if ( (a5 & 0x101) != 0 )
          {
            v33 = a1;
            v26 = v65;
            if ( (unsigned int)MiMakeVaRangeNoAccess(a1, v24, v37, (__int64)v79, BugCheckParameter4, v78) )
            {
              v11 += 8 * v72;
              v24 += 8 * v74;
            }
            goto LABEL_57;
          }
          v33 = a1;
          updated = MiUpdatePfnProtection(a1, 48 * v47 - 0x58000000000LL, a4);
          a4 = updated;
        }
        MiRevertValidPte(v33, v24, updated, v47, (__int64)v79);
        v11 += 8 * v72;
        v24 += 8 * v74;
      }
      else
      {
        if ( (v42 & 0x400) != 0 )
        {
          MiFlushTbList(v79);
          v26 = v65;
          if ( (int)MiMakeProtoLeafValid(v24, 1LL, v65) < 0 )
          {
            v11 += 8LL;
            v24 += 8LL;
          }
          v36 = 1;
          v66 = 1;
          goto LABEL_58;
        }
        if ( (v42 & 0x800) == 0 )
        {
          if ( v72 != 1 )
            KeBugCheckEx(0x1Au, 0x44000uLL, v11, v42, 0LL);
          if ( v42 )
          {
            v57 = v42 >> 5;
          }
          else
          {
            UsedPtesHandle = MiGetUsedPtesHandle(v11 << 25 >> 16, Flink);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL, v55, v56);
            LODWORD(v57) = *(_DWORD *)(v33 + 48) >> 7;
          }
          a4 = MiSanitizePfnProtection(v33, v57 & 0x1F, a4);
          v59 = 32LL * (a4 & 0x1F);
          if ( v42 )
            v60 = v59 | v42 & 0xFFFFFFFFFFFFFC1FuLL;
          else
            v60 = MiSwizzleInvalidPte(v59);
          v71 = v60;
          v61 = v60;
          if ( (unsigned int)MiPteInShadowRange(v11, v58) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v63 = v60;
              if ( !HIBYTE(word_140C4E008) && (v60 & 1) != 0 )
                v63 = v60 | 0x8000000000000000uLL;
              *(_QWORD *)v11 = v63;
              MiWritePteShadow(v11, v63, v62);
              goto LABEL_101;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v11 = v60;
LABEL_101:
              v33 = a1;
              v11 += 8LL;
              v26 = v65;
              v24 += 8LL;
              goto LABEL_57;
            }
            if ( (v60 & 1) != 0 )
              v61 = v60 | 0x8000000000000000uLL;
          }
          *(_QWORD *)v11 = v61;
          goto LABEL_101;
        }
        v53 = MiSetProtectionOnTransitionPte(v33, v24, a4, 1LL);
        if ( v72 != 1 )
        {
          v11 += 8 * v72;
          v26 = v65;
          v24 += 8 * v74;
          goto LABEL_57;
        }
        if ( !v53 )
        {
          v26 = v65;
          v11 += 8LL;
          v24 += 8LL;
          goto LABEL_57;
        }
      }
      v26 = v65;
LABEL_57:
      v36 = v66;
LABEL_58:
      Flink = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( v24 <= v37 );
  }
  MiFlushTbList(v79);
  if ( v27 )
    MiUnlockPageTableInternal(v10, v27);
  MiUnlockWorkingSetShared(v10, v26);
  if ( v73 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
