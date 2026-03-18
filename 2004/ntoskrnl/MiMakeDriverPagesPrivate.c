/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1402E0360
 * Callers:
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1402627C8 (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x14076E404 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1408C17A4 (MiSplitDriverPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiDriverPageMustStayResident @ 0x1402E0040 (MiDriverPageMustStayResident.c)
 *     MiUnlockLoaderEntry @ 0x1402E095C (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402E0B94 (MiLockLoaderEntry.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1402E0D40 (MiUseSlabAllocatorForDriverPage.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiSessionLookupImage @ 0x14035CF98 (MiSessionLookupImage.c)
 *     MiCheckSlabPage @ 0x14037B010 (MiCheckSlabPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x140528984 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
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
  __int64 DriverPage; // r14
  unsigned __int8 v17; // al
  __int64 v18; // rax
  ULONG_PTR v19; // rbx
  __int64 v20; // rsi
  int v21; // eax
  int v22; // ebp
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // rbp
  unsigned __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  unsigned __int8 v39; // [rsp+30h] [rbp-98h]
  char v40; // [rsp+34h] [rbp-94h]
  unsigned int v41; // [rsp+38h] [rbp-90h] BYREF
  int v42; // [rsp+3Ch] [rbp-8Ch]
  int v43; // [rsp+40h] [rbp-88h]
  int v44; // [rsp+44h] [rbp-84h] BYREF
  int v45; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v46; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v47; // [rsp+50h] [rbp-78h]
  unsigned __int64 v48; // [rsp+58h] [rbp-70h]
  __int64 v49; // [rsp+60h] [rbp-68h]
  __int64 v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+70h] [rbp-58h]
  __int64 v52[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v41 = 0;
  v46 = 0;
  v6 = a4;
  v50 = 0LL;
  v40 = 0;
  v49 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v47 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    SessionVm = MiGetSessionVm();
  }
  else
  {
    v47 = 0LL;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  }
  v11 = SessionVm;
  v12 = a1 + 160;
  v13 = 0;
  v51 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  if ( (v6 & 3) == 0 && ((unsigned __int8)v10 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v13 = 2;
  v14 = v10 | v13;
  v42 = v6 & 4;
  v15 = a2;
  if ( (v6 & 4) == 0 )
    v14 = v13;
  v43 = v14;
  DriverPage = -1LL;
  v48 = 0LL;
  MiLockLoaderEntry(v12, 0LL);
  v17 = MiLockWorkingSetShared(v11);
  v39 = v17;
  if ( a2 > a3 )
    goto LABEL_75;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( (v15 & 0xFFF) != 0 )
        goto LABEL_15;
      MiUnlockPageTableInternal(v11, v4);
    }
    v4 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v11, v4, 0LL);
LABEL_15:
    v18 = MI_READ_PTE_LOCK_FREE(v15);
    v52[0] = v18;
    v19 = v18;
    if ( !v18 )
      goto LABEL_24;
    if ( (v18 & 1) == 0 )
    {
      if ( (v18 & 0x400) != 0 )
      {
        MiUnlockPageTableInternal(v11, v4);
        MiUnlockWorkingSetShared(v11, v39);
        MiUnlockLoaderEntry(v12, 0LL);
        v20 = (__int64)((v15 << 25) - v49) >> 16;
        v21 = MmAccessFault(0LL, v20, 0, 0LL);
        v22 = v21;
        if ( v21 < 0 && (v15 == a2 || (a4 & 8) == 0) )
          KeBugCheckEx(0x1Au, 0x3000uLL, v20, v19, v21);
        MiLockLoaderEntry(v12, 0LL);
        MiLockWorkingSetShared(v11);
        if ( v22 >= 0 )
        {
          MiLockPageTableInternal(v11, v4, 0LL);
          goto LABEL_25;
        }
        v4 = 0LL;
      }
      goto LABEL_24;
    }
    v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v52) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v23)
      || (*(_QWORD *)(v23 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v23 + 8) > 0
      || (v6 & 1) != 0 && ((v19 & 0x800) != 0 || (v19 & 0x200) == 0) )
    {
      goto LABEL_24;
    }
    v25 = (*(_DWORD *)(v23 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x10000) != 0 && (v47 || (v6 & 2) != 0) && ((*(_DWORD *)(v23 + 16) >> 5) & 2) != 0 )
    {
      v5 = -1073741755;
      goto LABEL_72;
    }
    if ( v42 && (*(_DWORD *)(v12 + 36) & 1) == 0 && (*(_BYTE *)(v23 + 35) & 8) != 0 )
      goto LABEL_24;
    if ( DriverPage != -1 )
    {
      v26 = v24 + 48 * DriverPage;
      if ( (unsigned int)MiUseSlabAllocatorForDriverPage(v51, v25, &v41) )
      {
        if ( !MiIsPfnFromSlabAllocation(v26) || !(unsigned int)MiCheckSlabPage(v26, v41, v25) )
          goto LABEL_46;
      }
      else if ( MiIsPfnFromSlabAllocation(v26) )
      {
LABEL_46:
        if ( v48 != v15 )
        {
          MiReleaseFreshPage(v26);
          DriverPage = -1LL;
          v48 = v15;
        }
      }
      if ( DriverPage != -1 )
      {
        v27 = (__int64)((v15 << 25) - v49) >> 16;
        MiCopyOnWrite(v27, (ULONG_PTR *)v15, DriverPage, v43);
        v29 = a1;
        if ( !v47 || v50 )
        {
          v31 = v40;
          LOBYTE(v30) = 1;
        }
        else
        {
          v50 = MiSessionLookupImage(*(_QWORD *)(a1 + 48), v28, a1);
          LOBYTE(v30) = 1;
          v31 = v40;
          if ( *(_BYTE *)(v50 + 64) )
            v31 = 1;
          v40 = v31;
        }
        if ( v31 && MiDriverPageMustStayResident(v29, v15) )
        {
          v44 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v44, v32, v33, v30);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v23, v32, v33, v30);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v37 = 48 * DriverPage - 0x58000000000LL;
          v45 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v45, v34, v35, v36);
            while ( *(__int64 *)(v37 + 24) < 0 );
          }
          MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1LL, v35);
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v30) = 1;
        }
        else
        {
          v37 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( ((unsigned __int8)v30 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v37 + 40) >> 60) & 7) == 3 )
          MiMakeDriverPageStayResident(a1, v11, v27);
LABEL_24:
        v15 += 8LL;
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v11, v4);
    MiUnlockWorkingSetShared(v11, v39);
    MiUnlockLoaderEntry(v12, 0LL);
    DriverPage = MiAllocateDriverPage(v51, v25, 0LL);
    MiLockLoaderEntry(v12, 0LL);
    MiLockWorkingSetShared(v11);
    MiLockPageTableInternal(v11, v4, 0LL);
    if ( DriverPage == -1 )
    {
      v5 = -1073741801;
      goto LABEL_72;
    }
LABEL_25:
    if ( v15 > a3 )
      break;
    v6 = a4;
  }
  v5 = v46;
LABEL_72:
  if ( v4 )
    MiUnlockPageTableInternal(v11, v4);
  v17 = v39;
LABEL_75:
  MiUnlockWorkingSetShared(v11, v17);
  MiUnlockLoaderEntry(v12, 0LL);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v5;
}
