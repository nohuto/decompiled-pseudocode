/*
 * XREFs of MiProtectPrivateMemory @ 0x1402ADD80
 * Callers:
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiSanitizePfnProtection @ 0x14021C790 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x1402A4660 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402ACC58 (MiSetProtectionOnTransitionPte.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiUpdatePfnProtection @ 0x1402AE650 (MiUpdatePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiMakeProtoLeafValid @ 0x14030BB74 (MiMakeProtoLeafValid.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiFaultInPagedPool @ 0x1405275F4 (MiFaultInPagedPool.c)
 *     MiMakeProtoPrivate @ 0x140541EC4 (MiMakeProtoPrivate.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        int a6,
        int *a7,
        __int64 a8)
{
  __int64 v10; // r13
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
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // eax
  int v29; // r9d
  __int64 v30; // rcx
  ULONG_PTR v31; // r14
  ULONG_PTR v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  _KPROCESS *v40; // rdx
  int ProtoPrivate; // eax
  int updated; // eax
  int v43; // eax
  __int64 UsedPtesHandle; // rax
  ULONG_PTR v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v53; // [rsp+30h] [rbp-D0h]
  unsigned int v54; // [rsp+34h] [rbp-CCh]
  __int16 v57; // [rsp+44h] [rbp-BCh] BYREF
  int v58; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  _QWORD v67[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-50h]
  __int128 v69; // [rsp+C0h] [rbp-40h]
  __int128 v70; // [rsp+D0h] [rbp-30h]
  __int128 v71; // [rsp+E0h] [rbp-20h]
  __int128 v72; // [rsp+F0h] [rbp-10h]
  __int128 v73; // [rsp+100h] [rbp+0h]
  __int128 v74; // [rsp+110h] [rbp+10h]
  __int128 v75; // [rsp+120h] [rbp+20h]
  __int128 v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+40h]

  v66 = a8;
  v67[0] = 1LL;
  v77 = 0LL;
  v68 = 0LL;
  v67[1] = 20LL;
  v69 = 0LL;
  v67[2] = 0LL;
  v70 = 0LL;
  v67[3] = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v64 = 0LL;
  v75 = 0LL;
  v57 = 0;
  v76 = 0LL;
  v58 = 0;
  v61 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_DWORD *)(a1 + 48);
  v13 = 3;
  v14 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v62 = 1LL;
  v59 = v14;
  if ( (v12 & 0x500000) == 0x500000 )
  {
    v15 = (v12 >> 18) & 3;
    v16 = MiVadPageSizes[v15];
    v13 = MiVadPageIndices[v15];
    v17 = 16LL;
    v60 = v16;
    if ( v16 != 16 )
      v17 = 1LL;
    v62 = v17;
  }
  else
  {
    v60 = 1LL;
  }
  v54 = 0;
  v63 = (v12 >> 12) & 0x3F;
  v53 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  if ( MiComputePageCommitment(a2, a3, a1, v53, 0, &v61) != ((__int64)(v14 - v11) >> 3) + 1 )
  {
    MiUnlockWorkingSetShared(v10, v53);
    return 3221225517LL;
  }
  v19 = v61;
  if ( v61 )
  {
    MiUnlockWorkingSetShared(v10, v53);
    result = MiChargeFullProcessCommitment(Process, v19);
    if ( (int)result < 0 )
      return result;
    v53 = MiLockWorkingSetShared(v10);
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
    v59 = v14;
  }
  v22 = v53;
  v23 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeSystemAddressValid(v20, 0);
  if ( MI_READ_PTE_LOCK_FREE(v20) )
  {
    while ( 1 )
    {
      PageProtection = MiGetPageProtection(a1, v20, &v64, &v58, &v57);
      v26 = v64;
      if ( !v64 )
        break;
      MiUnlockPageTableInternal(v10, v23);
      MiUnlockWorkingSetShared(v10, v53);
      MiFaultInPagedPool(v26);
      MiLockWorkingSetShared(v10);
      MiMakeSystemAddressValid(v20, 0);
      if ( !MI_READ_PTE_LOCK_FREE(v20) )
        goto LABEL_18;
    }
    v27 = a1;
    v29 = MmProtectToValue[PageProtection];
    v30 = 1LL;
    v28 = v58;
    v54 = 1;
  }
  else
  {
LABEL_18:
    v27 = a1;
    v28 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(a1);
    v30 = 0LL;
    v58 = v28;
  }
  *a7 = v28 | v29;
  v31 = v59;
  if ( v20 <= v59 )
  {
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    do
    {
      if ( (v20 & 0xFFF) == 0 || (_DWORD)v30 == 1 )
      {
        v54 = 0;
        if ( v23 )
        {
          MiFlushTbList((__int64)v67, (_KPROCESS *)0xFFFFF6FB7DBED7F8LL);
          MiUnlockPageTableInternal(v10, v23);
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
      v32 = *(_QWORD *)v20;
      if ( v20 >= 0xFFFFF6FB7DBED000uLL
        && v20 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v30, 0xFFFFF6FB7DBED7F8uLL)
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v33 = *(_QWORD *)(Flink + 8 * ((v20 >> 3) & 0x1FF));
          Flink = v32 | 0x20;
          if ( (v33 & 0x20) == 0 )
            Flink = v32;
          v32 = Flink;
          if ( (v33 & 0x42) != 0 )
            v32 = Flink | 0x42;
        }
      }
      v59 = v32;
      if ( (v32 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v59)
          && (unsigned int)MiPteHasShadow(v35, v34)
          && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
        {
          v34 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v34 )
          {
            v38 = *(_QWORD *)(v34 + 8 * (((unsigned __int64)&v59 >> 3) & 0x1FF));
            v34 = v32 | 0x20;
            if ( (v38 & 0x20) == 0 )
              v34 = v32;
            v32 = v34;
            if ( (v38 & 0x42) != 0 )
              v32 = v34 | 0x42;
          }
        }
        v39 = (v32 >> 12) & 0xFFFFFFFFFLL;
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v20, v34, v36, v37) == 1 )
        {
          v27 = a1;
          updated = a4;
        }
        else
        {
          if ( (unsigned int)MI_PFN_IS_PROTO(48 * v39 - 0x58000000000LL, v34, v36) )
          {
            MiFlushTbList((__int64)v67, v40);
            v22 = v53;
            ProtoPrivate = MiMakeProtoPrivate(v10, v53, v20);
            if ( ProtoPrivate )
            {
              if ( ProtoPrivate == 1 )
              {
                --v61;
              }
              else
              {
                v23 = 0LL;
                v54 = 1;
                MiLockWorkingSetShared(v10);
              }
            }
            v27 = a1;
            goto LABEL_57;
          }
          if ( (a5 & 0x101) != 0 )
          {
            v27 = a1;
            v22 = v53;
            if ( (unsigned int)MiMakeVaRangeNoAccess(a1, v20, v31, (unsigned int)v67, BugCheckParameter4, v66) )
            {
              v11 += 8 * v60;
              v20 += 8 * v62;
            }
            goto LABEL_57;
          }
          v27 = a1;
          updated = MiUpdatePfnProtection(a1, 48 * v39 - 0x58000000000LL, a4);
          a4 = updated;
        }
        MiRevertValidPte(v27, v20, updated, v39, (__int64)v67);
        v11 += 8 * v60;
        v20 += 8 * v62;
      }
      else
      {
        if ( (v32 & 0x400) != 0 )
        {
          MiFlushTbList((__int64)v67, (_KPROCESS *)Flink);
          v22 = v53;
          if ( (int)MiMakeProtoLeafValid(v20) < 0 )
          {
            v11 += 8LL;
            v20 += 8LL;
          }
          v30 = 1LL;
          v54 = 1;
          goto LABEL_58;
        }
        if ( (v32 & 0x800) == 0 )
        {
          if ( v60 != 1 )
            KeBugCheckEx(0x1Au, 0x44000uLL, v11, v32, 0LL);
          if ( v32 )
          {
            v45 = v32 >> 5;
          }
          else
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
            LODWORD(v45) = *(_DWORD *)(v27 + 48) >> 7;
          }
          a4 = MiSanitizePfnProtection(v27, v45 & 0x1F, a4);
          v46 = 32LL * (a4 & 0x1F);
          if ( v32 )
            v47 = v46 | v32 & 0xFFFFFFFFFFFFFC1FuLL;
          else
            v47 = MiSwizzleInvalidPte(v46);
          v59 = v47;
          v48 = v47;
          if ( MiPteInShadowRange(v11) )
          {
            if ( (unsigned int)MiPteHasShadow(v50, v49) )
            {
              v51 = v47;
              if ( !HIBYTE(word_140C4DF48) && (v47 & 1) != 0 )
                v51 = v47 | 0x8000000000000000uLL;
              *(_QWORD *)v11 = v51;
              MiWritePteShadow(v11, v51);
              goto LABEL_101;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            {
              *(_QWORD *)v11 = v47;
LABEL_101:
              v27 = a1;
              v11 += 8LL;
              v22 = v53;
              v20 += 8LL;
              goto LABEL_57;
            }
            if ( (v47 & 1) != 0 )
              v48 = v47 | 0x8000000000000000uLL;
          }
          *(_QWORD *)v11 = v48;
          goto LABEL_101;
        }
        v43 = MiSetProtectionOnTransitionPte(v27, (unsigned __int64 *)v20, a4, 1LL);
        if ( v60 != 1 )
        {
          v11 += 8 * v60;
          v22 = v53;
          v20 += 8 * v62;
          goto LABEL_57;
        }
        if ( !v43 )
        {
          v22 = v53;
          v11 += 8LL;
          v20 += 8LL;
          goto LABEL_57;
        }
      }
      v22 = v53;
LABEL_57:
      v30 = v54;
LABEL_58:
      Flink = 0xFFFFF6FB7DBED7F8uLL;
    }
    while ( v20 <= v31 );
  }
  MiFlushTbList((__int64)v67, (_KPROCESS *)Flink);
  if ( v23 )
    MiUnlockPageTableInternal(v10, v23);
  MiUnlockWorkingSetShared(v10, v22);
  if ( v61 )
    MiReturnFullProcessCommitment(Process, v61);
  return 0LL;
}
