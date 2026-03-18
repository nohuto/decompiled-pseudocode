/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x140325460
 * Callers:
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1402BB7F8 (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x14076BC64 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1408C0454 (MiSplitDriverPage.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiSessionLookupImage @ 0x14031F488 (MiSessionLookupImage.c)
 *     MiDriverPageMustStayResident @ 0x140325140 (MiDriverPageMustStayResident.c)
 *     MiUnlockLoaderEntry @ 0x140325A5C (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140325C94 (MiLockLoaderEntry.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x140325E40 (MiUseSlabAllocatorForDriverPage.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiCheckSlabPage @ 0x14037A290 (MiCheckSlabPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x140528334 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x1406F0068 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // ebx
  char v6; // bp
  unsigned __int64 SessionVm; // rax
  int v10; // r8d
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // ecx
  int v14; // eax
  unsigned __int64 v15; // rdi
  ULONG_PTR DriverPage; // r14
  unsigned __int8 v17; // al
  __int64 v18; // r8
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  __int64 v21; // rsi
  int v22; // eax
  int v23; // ebp
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rbp
  unsigned __int64 v29; // rbp
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  unsigned __int8 v38; // [rsp+30h] [rbp-98h]
  char v39; // [rsp+34h] [rbp-94h]
  unsigned int v40; // [rsp+38h] [rbp-90h] BYREF
  int v41; // [rsp+3Ch] [rbp-8Ch]
  int v42; // [rsp+40h] [rbp-88h]
  int v43; // [rsp+44h] [rbp-84h] BYREF
  int v44; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v46; // [rsp+50h] [rbp-78h]
  unsigned __int64 v47; // [rsp+58h] [rbp-70h]
  __int64 v48; // [rsp+60h] [rbp-68h]
  _QWORD *v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+70h] [rbp-58h]
  __int64 v51[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v40 = 0;
  v45 = 0;
  v6 = a4;
  v49 = 0LL;
  v39 = 0;
  v48 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v46 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    SessionVm = MiGetSessionVm();
  }
  else
  {
    v46 = 0LL;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  }
  v11 = SessionVm;
  v12 = a1 + 160;
  v13 = 0;
  v50 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  if ( (v6 & 3) == 0 && ((unsigned __int8)v10 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v13 = 2;
  v14 = v10 | v13;
  v41 = v6 & 4;
  v15 = a2;
  if ( (v6 & 4) == 0 )
    v14 = v13;
  v42 = v14;
  DriverPage = -1LL;
  v47 = 0LL;
  MiLockLoaderEntry(v12, 0LL);
  v17 = MiLockWorkingSetShared(v11);
  v38 = v17;
  if ( a2 > a3 )
    goto LABEL_75;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( (v15 & 0xFFF) != 0 )
        goto LABEL_15;
      MiUnlockPageTableInternal(v11, v4, v18);
    }
    v4 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v11, v4, 0LL);
LABEL_15:
    v19 = MI_READ_PTE_LOCK_FREE(v15);
    v51[0] = v19;
    v20 = v19;
    if ( !v19 )
      goto LABEL_24;
    if ( (v19 & 1) == 0 )
    {
      if ( (v19 & 0x400) != 0 )
      {
        MiUnlockPageTableInternal(v11, v4, v18);
        MiUnlockWorkingSetShared(v11, v38);
        MiUnlockLoaderEntry(v12, 0LL);
        v21 = (__int64)((v15 << 25) - v48) >> 16;
        v22 = MmAccessFault(0LL, v21, 0, 0LL);
        v23 = v22;
        if ( v22 < 0 && (v15 == a2 || (a4 & 8) == 0) )
          KeBugCheckEx(0x1Au, 0x3000uLL, v21, v20, v22);
        MiLockLoaderEntry(v12, 0LL);
        MiLockWorkingSetShared(v11);
        if ( v23 >= 0 )
        {
          MiLockPageTableInternal(v11, v4, 0LL);
          goto LABEL_25;
        }
        v4 = 0LL;
      }
      goto LABEL_24;
    }
    v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v51) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v24, 0xFFFFFA8000000000uLL, v25)
      || (*(_QWORD *)(v24 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v24 + 8) > 0
      || (v6 & 1) != 0 && ((v20 & 0x800) != 0 || (v20 & 0x200) == 0) )
    {
      goto LABEL_24;
    }
    v27 = (*(_DWORD *)(v24 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x10000) != 0 && (v46 || (v6 & 2) != 0) && ((*(_DWORD *)(v24 + 16) >> 5) & 2) != 0 )
    {
      v5 = -1073741755;
      goto LABEL_72;
    }
    if ( v41 && (*(_DWORD *)(v12 + 36) & 1) == 0 && (*(_BYTE *)(v24 + 35) & 8) != 0 )
      goto LABEL_24;
    if ( DriverPage != -1LL )
    {
      v28 = v26 + 48 * DriverPage;
      if ( (unsigned int)MiUseSlabAllocatorForDriverPage(v50, v27, &v40) )
      {
        if ( !MiIsPfnFromSlabAllocation(v28) || !(unsigned int)MiCheckSlabPage(v28, v40, v27) )
          goto LABEL_46;
      }
      else if ( MiIsPfnFromSlabAllocation(v28) )
      {
LABEL_46:
        if ( v47 != v15 )
        {
          MiReleaseFreshPage(v28);
          DriverPage = -1LL;
          v47 = v15;
        }
      }
      if ( DriverPage != -1LL )
      {
        v29 = (__int64)((v15 << 25) - v48) >> 16;
        MiCopyOnWrite(v29, (ULONG_PTR *)v15, DriverPage, v42);
        v18 = a1;
        if ( !v46 || v49 )
        {
          v31 = v39;
          LOBYTE(v30) = 1;
        }
        else
        {
          v49 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
          LOBYTE(v30) = 1;
          v31 = v39;
          if ( *((_BYTE *)v49 + 64) )
            v31 = 1;
          v39 = v31;
        }
        if ( v31 && MiDriverPageMustStayResident(v18, v15) )
        {
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v43, v32, v18, v30);
            while ( *(__int64 *)(v24 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v24);
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v36 = 48 * DriverPage - 0x58000000000LL;
          v44 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v44, v33, v34, v35);
            while ( *(__int64 *)(v36 + 24) < 0 );
          }
          MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v30) = 1;
        }
        else
        {
          v36 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( ((unsigned __int8)v30 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v36 + 40) >> 60) & 7) == 3 )
          MiMakeDriverPageStayResident(a1, v11, v29);
LABEL_24:
        v15 += 8LL;
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v11, v4, v18);
    MiUnlockWorkingSetShared(v11, v38);
    MiUnlockLoaderEntry(v12, 0LL);
    DriverPage = MiAllocateDriverPage(v50, v27, 0LL);
    MiLockLoaderEntry(v12, 0LL);
    MiLockWorkingSetShared(v11);
    MiLockPageTableInternal(v11, v4, 0LL);
    if ( DriverPage == -1LL )
    {
      v5 = -1073741801;
      goto LABEL_72;
    }
LABEL_25:
    if ( v15 > a3 )
      break;
    v6 = a4;
  }
  v5 = v45;
LABEL_72:
  if ( v4 )
    MiUnlockPageTableInternal(v11, v4, v18);
  v17 = v38;
LABEL_75:
  MiUnlockWorkingSetShared(v11, v17);
  MiUnlockLoaderEntry(v12, 0LL);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v5;
}
