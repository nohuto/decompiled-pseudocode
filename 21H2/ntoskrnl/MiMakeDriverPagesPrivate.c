/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x140298244
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140297B68 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x140780DD4 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1408C4F04 (MiSplitDriverPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiSessionLookupImage @ 0x14024D9E8 (MiSessionLookupImage.c)
 *     MiDriverPageMustStayResident @ 0x14025BE8C (MiDriverPageMustStayResident.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiUnlockLoaderEntry @ 0x140298840 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140298A78 (MiLockLoaderEntry.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1402990A4 (MiUseSlabAllocatorForDriverPage.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiCheckSlabPage @ 0x14037CB20 (MiCheckSlabPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x14052E094 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
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
  __int64 v29; // rbp
  __int64 v30; // r8
  char v31; // r9
  char v32; // al
  __int64 v33; // rbx
  __int64 v34; // rdx
  char v36; // [rsp+30h] [rbp-98h]
  char v37; // [rsp+34h] [rbp-94h]
  unsigned int v38; // [rsp+38h] [rbp-90h] BYREF
  int v39; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v40; // [rsp+40h] [rbp-88h]
  int v41; // [rsp+44h] [rbp-84h] BYREF
  int v42; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v44; // [rsp+50h] [rbp-78h]
  unsigned __int64 v45; // [rsp+58h] [rbp-70h]
  __int64 v46; // [rsp+60h] [rbp-68h]
  _QWORD *v47; // [rsp+68h] [rbp-60h]
  __int64 v48; // [rsp+70h] [rbp-58h]
  __int64 v49[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v38 = 0;
  v43 = 0;
  v6 = a4;
  v47 = 0LL;
  v37 = 0;
  v46 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v44 = Process[1].AffinityPadding[5];
    SessionVm = MiGetSessionVm(Process, v44, 1LL);
  }
  else
  {
    v44 = 0LL;
    SessionVm = MiGetAnyMultiplexedVm(1LL);
  }
  v12 = SessionVm;
  v13 = a1 + 160;
  v14 = 0;
  v48 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  if ( (v6 & 3) == 0 && ((unsigned __int8)v11 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v14 = 2;
  v15 = v11 | v14;
  v39 = v6 & 4;
  v16 = a2;
  if ( (v6 & 4) == 0 )
    v15 = v14;
  v40 = v15;
  DriverPage = -1LL;
  v45 = 0LL;
  MiLockLoaderEntry(v13, 0LL);
  v18 = MiLockWorkingSetShared(v12);
  v36 = v18;
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
    v20 = MI_READ_PTE_LOCK_FREE(v16);
    v49[0] = v20;
    v21 = v20;
    if ( !v20 )
      goto LABEL_24;
    if ( (v20 & 1) == 0 )
    {
      if ( (v20 & 0x400) != 0 )
      {
        MiUnlockPageTableInternal(v12, v4);
        LOBYTE(v22) = v36;
        MiUnlockWorkingSetShared(v12, v22);
        MiUnlockLoaderEntry(v13, 0LL);
        v23 = (__int64)((v16 << 25) - v46) >> 16;
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
    v26 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v49) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v26)
      || (*(_QWORD *)(v26 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v26 + 8) > 0
      || (v6 & 1) != 0 && ((v21 & 0x800) != 0 || (v21 & 0x200) == 0) )
    {
      goto LABEL_24;
    }
    v27 = (*(_DWORD *)(v26 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x10000) != 0 && (v44 || (v6 & 2) != 0) && ((*(_DWORD *)(v26 + 16) >> 5) & 2) != 0 )
    {
      v5 = -1073741755;
      goto LABEL_72;
    }
    if ( v39 && (*(_DWORD *)(v13 + 36) & 1) == 0 && (*(_BYTE *)(v26 + 35) & 8) != 0 )
      goto LABEL_24;
    if ( DriverPage != -1 )
    {
      v28 = v19 + 48 * DriverPage;
      if ( (unsigned int)MiUseSlabAllocatorForDriverPage(v48, v27, &v38) )
      {
        if ( !(unsigned int)MiIsPfnFromSlabAllocation(v28) || !(unsigned int)MiCheckSlabPage(v28, v38, v27) )
          goto LABEL_46;
      }
      else if ( (unsigned int)MiIsPfnFromSlabAllocation(v28) )
      {
LABEL_46:
        if ( v45 != v16 )
        {
          MiReleaseFreshPage(v28);
          DriverPage = -1LL;
          v45 = v16;
        }
      }
      if ( DriverPage != -1 )
      {
        v29 = (__int64)((v16 << 25) - v46) >> 16;
        MiCopyOnWrite(v29, v16, DriverPage, v40);
        v30 = a1;
        if ( !v44 || v47 )
        {
          v32 = v37;
          v31 = 1;
        }
        else
        {
          v47 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
          v31 = 1;
          v32 = v37;
          if ( *((_BYTE *)v47 + 64) )
            v32 = 1;
          v37 = v32;
        }
        if ( v32 && MiDriverPageMustStayResident(v30, v16) )
        {
          v41 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v41);
            while ( *(__int64 *)(v26 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v26);
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v33 = 48 * DriverPage - 0x58000000000LL;
          v42 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v42);
            while ( *(__int64 *)(v33 + 24) < 0 );
          }
          MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v31 = 1;
        }
        else
        {
          v33 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( ((unsigned __int8)v31 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v33 + 40) >> 60) & 7) == 3 )
          MiMakeDriverPageStayResident(a1, v12, v29);
LABEL_24:
        v16 += 8LL;
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v12, v4);
    LOBYTE(v34) = v36;
    MiUnlockWorkingSetShared(v12, v34);
    MiUnlockLoaderEntry(v13, 0LL);
    DriverPage = MiAllocateDriverPage(v48, v27, 0LL);
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
  v5 = v43;
LABEL_72:
  if ( v4 )
    MiUnlockPageTableInternal(v12, v4);
  v18 = v36;
LABEL_75:
  LOBYTE(v19) = v18;
  MiUnlockWorkingSetShared(v12, v19);
  MiUnlockLoaderEntry(v13, 0LL);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v5;
}
