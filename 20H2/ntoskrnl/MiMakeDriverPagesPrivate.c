/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x14025290C
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140252230 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x14077CE34 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1408C75E4 (MiSplitDriverPage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockLoaderEntry @ 0x140252F08 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140253140 (MiLockLoaderEntry.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiDriverPageMustStayResident @ 0x14030D294 (MiDriverPageMustStayResident.c)
 *     MiSessionLookupImage @ 0x14032DA58 (MiSessionLookupImage.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x140332E58 (MiUseSlabAllocatorForDriverPage.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiCheckSlabPage @ 0x14037CD40 (MiCheckSlabPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x14052C354 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  char v6; // bp
  _KPROCESS *Process; // rcx
  char *SessionVm; // rax
  int v11; // r8d
  char *v12; // r15
  __int64 v13; // r13
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdi
  __int64 DriverPage; // r14
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rax
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  ULONG_PTR v23; // rsi
  int v24; // eax
  int v25; // ebp
  unsigned __int64 v26; // rsi
  unsigned int v27; // ebx
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // r8
  char v32; // r9
  char v33; // al
  __int64 v34; // rbx
  __int64 v35; // rdx
  char v37; // [rsp+30h] [rbp-98h]
  char v38; // [rsp+34h] [rbp-94h]
  unsigned int v39; // [rsp+38h] [rbp-90h] BYREF
  int v40; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v41; // [rsp+40h] [rbp-88h]
  int v42; // [rsp+44h] [rbp-84h] BYREF
  int v43; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v44; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v45; // [rsp+50h] [rbp-78h]
  unsigned __int64 v46; // [rsp+58h] [rbp-70h]
  __int64 v47; // [rsp+60h] [rbp-68h]
  __int64 v48; // [rsp+68h] [rbp-60h]
  __int64 v49; // [rsp+70h] [rbp-58h]
  __int64 v50[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v39 = 0;
  v44 = 0;
  v6 = a4;
  v48 = 0LL;
  v38 = 0;
  v47 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v45 = Process[1].AffinityPadding[5];
    SessionVm = (char *)MiGetSessionVm(Process, v45);
  }
  else
  {
    v45 = 0LL;
    SessionVm = MiGetAnyMultiplexedVm(1);
  }
  v12 = SessionVm;
  v13 = a1 + 160;
  v14 = 0;
  v49 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *((unsigned __int16 *)SessionVm + 87));
  if ( (v6 & 3) == 0 && ((unsigned __int8)v11 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v14 = 2;
  v15 = v11 | v14;
  v40 = v6 & 4;
  v16 = a2;
  if ( (v6 & 4) == 0 )
    v15 = v14;
  v41 = v15;
  DriverPage = -1LL;
  v46 = 0LL;
  MiLockLoaderEntry(v13, 0LL);
  v18 = MiLockWorkingSetShared(v12);
  v37 = v18;
  if ( a2 > a3 )
    goto LABEL_75;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( (v16 & 0xFFF) != 0 )
        goto LABEL_15;
      MiUnlockPageTableInternal(v12);
    }
    v4 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v12, v4, 0LL);
LABEL_15:
    v20 = MI_READ_PTE_LOCK_FREE(v16);
    v50[0] = v20;
    v21 = v20;
    if ( !v20 )
      goto LABEL_24;
    if ( (v20 & 1) == 0 )
    {
      if ( (v20 & 0x400) != 0 )
      {
        MiUnlockPageTableInternal(v12);
        LOBYTE(v22) = v37;
        MiUnlockWorkingSetShared(v12, v22);
        MiUnlockLoaderEntry(v13, 0LL);
        v23 = (__int64)((v16 << 25) - v47) >> 16;
        v24 = MmAccessFault(0LL, v23);
        v25 = v24;
        if ( v24 < 0 && (v16 == a2 || (a4 & 8) == 0) )
          KeBugCheckEx(0x1Au, 0x3000uLL, v23, v21, v24);
        MiLockLoaderEntry(v13, 0LL);
        MiLockWorkingSetShared(v12);
        if ( v25 >= 0 )
        {
          MiLockPageTableInternal(v12, v4, 0LL);
          goto LABEL_25;
        }
        v4 = 0LL;
      }
      goto LABEL_24;
    }
    v26 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v50) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v26)
      || (*(_QWORD *)(v26 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v26 + 8) > 0
      || (v6 & 1) != 0 && ((v21 & 0x800) != 0 || (v21 & 0x200) == 0) )
    {
      goto LABEL_24;
    }
    v27 = (*(_DWORD *)(v26 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x10000) != 0 && (v45 || (v6 & 2) != 0) && ((*(_DWORD *)(v26 + 16) >> 5) & 2) != 0 )
    {
      v5 = -1073741755;
      goto LABEL_72;
    }
    if ( v40 && (*(_DWORD *)(v13 + 36) & 1) == 0 && (*(_BYTE *)(v26 + 35) & 8) != 0 )
      goto LABEL_24;
    if ( DriverPage != -1 )
    {
      v28 = v19 + 48 * DriverPage;
      if ( (unsigned int)MiUseSlabAllocatorForDriverPage(v49, v27, &v39) )
      {
        if ( !(unsigned int)MiIsPfnFromSlabAllocation(v28) || !(unsigned int)MiCheckSlabPage(v28, v39, v27) )
          goto LABEL_46;
      }
      else if ( (unsigned int)MiIsPfnFromSlabAllocation(v28) )
      {
LABEL_46:
        if ( v46 != v16 )
        {
          MiReleaseFreshPage(v28, v29);
          DriverPage = -1LL;
          v46 = v16;
        }
      }
      if ( DriverPage != -1 )
      {
        v30 = (__int64)((v16 << 25) - v47) >> 16;
        MiCopyOnWrite(v30, v16, DriverPage, v41);
        v31 = a1;
        if ( !v45 || v48 )
        {
          v33 = v38;
          v32 = 1;
        }
        else
        {
          v48 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
          v32 = 1;
          v33 = v38;
          if ( *(_BYTE *)(v48 + 64) )
            v33 = 1;
          v38 = v33;
        }
        if ( v33 && (unsigned __int8)MiDriverPageMustStayResident(v31, v16) )
        {
          v42 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v42);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v26);
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v34 = 48 * DriverPage - 0x58000000000LL;
          v43 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v43);
            while ( *(__int64 *)(v34 + 24) < 0 );
          }
          MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v32 = 1;
        }
        else
        {
          v34 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( ((unsigned __int8)v32 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v34 + 40) >> 60) & 7) == 3 )
          MiMakeDriverPageStayResident(a1, v12, v30);
LABEL_24:
        v16 += 8LL;
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v12);
    LOBYTE(v35) = v37;
    MiUnlockWorkingSetShared(v12, v35);
    MiUnlockLoaderEntry(v13, 0LL);
    DriverPage = MiAllocateDriverPage(v49, v27, 0LL);
    MiLockLoaderEntry(v13, 0LL);
    MiLockWorkingSetShared(v12);
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
  v5 = v44;
LABEL_72:
  if ( v4 )
    MiUnlockPageTableInternal(v12);
  v18 = v37;
LABEL_75:
  LOBYTE(v19) = v18;
  MiUnlockWorkingSetShared(v12, v19);
  MiUnlockLoaderEntry(v13, 0LL);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL, 0xFFFFFA8000000000uLL);
  return v5;
}
