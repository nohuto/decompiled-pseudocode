/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1402E6EF4
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1402E6818 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x140780C14 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1408C4DA4 (MiSplitDriverPage.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiDriverPageMustStayResident @ 0x14026DEEC (MiDriverPageMustStayResident.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiSessionLookupImage @ 0x1402CF668 (MiSessionLookupImage.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiUnlockLoaderEntry @ 0x1402E74F0 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402E7728 (MiLockLoaderEntry.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1402E7D54 (MiUseSlabAllocatorForDriverPage.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiCheckSlabPage @ 0x14037CFD0 (MiCheckSlabPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x14052DE54 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x1406D1A78 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // ebx
  char v6; // bp
  _KPROCESS *Process; // rcx
  __int64 SessionVm; // rax
  int v11; // r8d
  __int64 v12; // r15
  __int64 v13; // r13
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdi
  __int64 DriverPage; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned __int8 v21; // al
  __int64 v22; // rax
  ULONG_PTR v23; // rbx
  __int64 v24; // rsi
  int v25; // eax
  int v26; // ebp
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  unsigned int v32; // ebx
  __int64 v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // r8
  ULONG_PTR v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  __int64 v49; // r8
  unsigned __int8 v51; // [rsp+30h] [rbp-98h]
  char v52; // [rsp+34h] [rbp-94h]
  unsigned int v53; // [rsp+38h] [rbp-90h] BYREF
  int v54; // [rsp+3Ch] [rbp-8Ch]
  int v55; // [rsp+40h] [rbp-88h]
  int v56; // [rsp+44h] [rbp-84h] BYREF
  int v57; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v58; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v59; // [rsp+50h] [rbp-78h]
  unsigned __int64 v60; // [rsp+58h] [rbp-70h]
  __int64 v61; // [rsp+60h] [rbp-68h]
  _QWORD *v62; // [rsp+68h] [rbp-60h]
  __int64 v63; // [rsp+70h] [rbp-58h]
  __int64 v64[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v53 = 0;
  v58 = 0;
  v6 = a4;
  v62 = 0LL;
  v52 = 0;
  v61 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v59 = Process[1].AffinityPadding[5];
    SessionVm = MiGetSessionVm(Process, v59, 1LL);
  }
  else
  {
    v59 = 0LL;
    SessionVm = MiGetAnyMultiplexedVm(1LL);
  }
  v12 = SessionVm;
  v13 = a1 + 160;
  v14 = 0;
  v63 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  if ( (v6 & 3) == 0 && ((unsigned __int8)v11 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v14 = 2;
  v15 = v11 | v14;
  v54 = v6 & 4;
  v16 = a2;
  if ( (v6 & 4) == 0 )
    v15 = v14;
  v55 = v15;
  DriverPage = -1LL;
  v60 = 0LL;
  MiLockLoaderEntry(v13, 0LL);
  v21 = MiLockWorkingSetShared(v12, v18, v19, v20);
  v51 = v21;
  if ( a2 > a3 )
    goto LABEL_75;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( (v16 & 0xFFF) != 0 )
        goto LABEL_15;
      MiUnlockPageTableInternal(v12, v4);
    }
    v4 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v12, v4, 0LL);
LABEL_15:
    v22 = MI_READ_PTE_LOCK_FREE(v16);
    v64[0] = v22;
    v23 = v22;
    if ( !v22 )
      goto LABEL_24;
    if ( (v22 & 1) == 0 )
    {
      if ( (v22 & 0x400) != 0 )
      {
        MiUnlockPageTableInternal(v12, v4);
        MiUnlockWorkingSetShared(v12, v51);
        MiUnlockLoaderEntry(v13, 0LL);
        v24 = (__int64)((v16 << 25) - v61) >> 16;
        v25 = MmAccessFault(0LL, v24, 0, 0LL);
        v26 = v25;
        if ( v25 < 0 && (v16 == a2 || (a4 & 8) == 0) )
          KeBugCheckEx(0x1Au, 0x3000uLL, v24, v23, v25);
        MiLockLoaderEntry(v13, 0LL);
        MiLockWorkingSetShared(v12, v27, v28, v29);
        if ( v26 >= 0 )
        {
          MiLockPageTableInternal(v12, v4, 0LL);
          goto LABEL_25;
        }
        v4 = 0LL;
      }
      goto LABEL_24;
    }
    v30 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v64) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v30)
      || (*(_QWORD *)(v30 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v30 + 8) > 0
      || (v6 & 1) != 0 && ((v23 & 0x800) != 0 || (v23 & 0x200) == 0) )
    {
      goto LABEL_24;
    }
    v32 = (*(_DWORD *)(v30 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x10000) != 0 && (v59 || (v6 & 2) != 0) && ((*(_DWORD *)(v30 + 16) >> 5) & 2) != 0 )
    {
      v5 = -1073741755;
      goto LABEL_72;
    }
    if ( v54 && (*(_DWORD *)(v13 + 36) & 1) == 0 && (*(_BYTE *)(v30 + 35) & 8) != 0 )
      goto LABEL_24;
    if ( DriverPage != -1 )
    {
      v33 = v31 + 48 * DriverPage;
      if ( (unsigned int)MiUseSlabAllocatorForDriverPage(v63, v32, &v53) )
      {
        if ( !(unsigned int)MiIsPfnFromSlabAllocation(v33) || !(unsigned int)MiCheckSlabPage(v33, v53, v32) )
          goto LABEL_46;
      }
      else if ( (unsigned int)MiIsPfnFromSlabAllocation(v33) )
      {
LABEL_46:
        if ( v60 != v16 )
        {
          MiReleaseFreshPage(v33, v34, v35);
          DriverPage = -1LL;
          v60 = v16;
        }
      }
      if ( DriverPage != -1 )
      {
        v36 = (__int64)((v16 << 25) - v61) >> 16;
        MiCopyOnWrite(v36, (ULONG_PTR *)v16, DriverPage, v55);
        v37 = a1;
        if ( !v59 || v62 )
        {
          v39 = v52;
          LOBYTE(v38) = 1;
        }
        else
        {
          v62 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
          LOBYTE(v38) = 1;
          v39 = v52;
          if ( *((_BYTE *)v62 + 64) )
            v39 = 1;
          v52 = v39;
        }
        if ( v39 && MiDriverPageMustStayResident(v37, v16) )
        {
          v56 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v56, v40, v41, v38);
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v30);
          _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v45 = 48 * DriverPage - 0x58000000000LL;
          v57 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57, v42, v43, v44);
            while ( *(__int64 *)(v45 + 24) < 0 );
          }
          MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v38) = 1;
        }
        else
        {
          v45 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( ((unsigned __int8)v38 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v45 + 40) >> 60) & 7) == 3 )
          MiMakeDriverPageStayResident(a1, v12, v36);
LABEL_24:
        v16 += 8LL;
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v12, v4);
    MiUnlockWorkingSetShared(v12, v51);
    MiUnlockLoaderEntry(v13, 0LL);
    DriverPage = MiAllocateDriverPage(v63, v32, 0LL);
    MiLockLoaderEntry(v13, 0LL);
    MiLockWorkingSetShared(v12, v46, v47, v48);
    MiLockPageTableInternal(v12, v4, 0LL);
    if ( DriverPage == -1 )
    {
      v5 = -1073741801;
      goto LABEL_72;
    }
LABEL_25:
    if ( v16 > a3 )
      break;
    v6 = a4;
  }
  v5 = v58;
LABEL_72:
  if ( v4 )
    MiUnlockPageTableInternal(v12, v4);
  v21 = v51;
LABEL_75:
  MiUnlockWorkingSetShared(v12, v21);
  MiUnlockLoaderEntry(v13, 0LL);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL, 0xFFFFFA8000000000uLL, v49);
  return v5;
}
