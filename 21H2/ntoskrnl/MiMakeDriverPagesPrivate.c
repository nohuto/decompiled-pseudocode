/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x14033F41C
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14033EF50 (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x14080F7F4 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x14096836C (MiSplitDriverPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiDriverPageMustStayResident @ 0x1402D925C (MiDriverPageMustStayResident.c)
 *     MiUnlockLoaderEntry @ 0x1402D94D8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402D96AC (MiLockLoaderEntry.c)
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1402EB398 (MiUseSlabAllocatorForDriverPage.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCheckSlabPage @ 0x1403B1DEC (MiCheckSlabPage.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x140582214 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // r13d
  unsigned __int64 SessionVm; // rax
  __int64 v10; // r15
  __int64 v11; // rbp
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  unsigned __int64 v15; // rdi
  ULONG_PTR DriverPage; // r14
  unsigned __int8 v17; // al
  __int64 v18; // r9
  __int64 v19; // rax
  ULONG_PTR v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rbp
  __int64 v27; // r9
  __int64 v28; // rsi
  int v29; // eax
  int v30; // ebp
  ULONG_PTR v31; // rbp
  __int64 v32; // r8
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int8 v39; // [rsp+30h] [rbp-98h]
  char v40; // [rsp+31h] [rbp-97h]
  __int64 v41; // [rsp+38h] [rbp-90h]
  unsigned __int64 v42; // [rsp+40h] [rbp-88h]
  int v43; // [rsp+48h] [rbp-80h]
  int v44; // [rsp+4Ch] [rbp-7Ch]
  int v45; // [rsp+50h] [rbp-78h] BYREF
  int v46; // [rsp+54h] [rbp-74h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-70h]
  _QWORD *v48; // [rsp+60h] [rbp-68h]
  __int64 v49; // [rsp+68h] [rbp-60h]
  __int64 v50; // [rsp+70h] [rbp-58h]
  __int64 v51[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v48 = 0LL;
  v40 = 0;
  v50 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v42 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    SessionVm = MiGetSessionVm();
  }
  else
  {
    v42 = 0LL;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  }
  v10 = SessionVm;
  v11 = a1 + 160;
  v41 = a1 + 160;
  v12 = 0;
  v49 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  if ( (a4 & 3) == 0 && (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 )
    v12 = 2;
  v13 = a4 & 4;
  v14 = v12 | 1;
  v43 = v13;
  v15 = a2;
  if ( !v13 )
    v14 = v12;
  v47 = 0LL;
  v44 = v14;
  DriverPage = -1LL;
  MiLockLoaderEntry(a1 + 160, 0LL);
  v17 = MiLockWorkingSetShared(v10);
  v39 = v17;
  if ( a2 > a3 )
    goto LABEL_18;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( (v15 & 0xFFF) != 0 )
        goto LABEL_10;
      MiUnlockPageTableInternal(v10, v4);
    }
    v4 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v10, v4, 0LL, v18);
LABEL_10:
    v19 = MI_READ_PTE_LOCK_FREE(v15);
    v51[0] = v19;
    v20 = v19;
    if ( !v19 )
      goto LABEL_13;
    if ( (v19 & 1) == 0 )
    {
      if ( (v19 & 0x400) == 0 )
      {
LABEL_13:
        v15 += 8LL;
        goto LABEL_14;
      }
      MiUnlockPageTableInternal(v10, v4);
      MiUnlockWorkingSetShared(v10, v39);
      MiUnlockLoaderEntry(v11, 0);
      v28 = (__int64)((v15 << 25) - v50) >> 16;
      v29 = MmAccessFault(0LL, v28, 0, 0LL);
      v30 = v29;
      if ( v29 < 0 && (v15 == a2 || (a4 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x3000uLL, v28, v20, v29);
      MiLockLoaderEntry(v41, 0LL);
      MiLockWorkingSetShared(v10);
      if ( v30 >= 0 )
      {
        MiLockPageTableInternal(v10, v4, 0LL, v18);
        v11 = v41;
        goto LABEL_14;
      }
      v4 = 0LL;
LABEL_50:
      v11 = v41;
      goto LABEL_13;
    }
    v21 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v51) >> 12) & 0xFFFFFFFFFFLL)
        - 0x220000000000LL;
    v22 = *(_QWORD *)(v21 + 40);
    if ( v22 >= 0 )
      goto LABEL_13;
    if ( (v22 & 0x10000000000LL) == 0 )
    {
      v24 = *(_QWORD *)(v21 + 8);
      if ( v24 >= 0 )
      {
        if ( v24 )
          goto LABEL_13;
      }
    }
    if ( (a4 & 1) != 0 && ((v20 & 0x800) != 0 || (v20 & 0x200) == 0) )
      goto LABEL_13;
    v25 = (*(_DWORD *)(v21 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x8000) != 0 && (v42 || (a4 & 2) != 0) && ((*(_DWORD *)(v21 + 16) >> 5) & 2) != 0 )
      break;
    if ( dword_140C4F478 && v42 && ((*(_DWORD *)(v21 + 16) >> 5) & 2) != 0 && (*(_DWORD *)(a1 + 104) & 0x8000000) != 0 )
      break;
    if ( v43 && (*(_DWORD *)(v11 + 36) & 1) == 0 && (*(_BYTE *)(v21 + 35) & 8) != 0 )
      goto LABEL_13;
    if ( DriverPage != -1LL )
    {
      v26 = 48 * DriverPage - 0x220000000000LL;
      if ( (unsigned int)MiUseSlabAllocatorForDriverPage(v49, v25) )
      {
        if ( MiIsPfnFromSlabAllocation(v26) && (unsigned int)MiCheckSlabPage(v26, 0LL) )
        {
LABEL_46:
          v31 = (__int64)((v15 << 25) - v50) >> 16;
          MiCopyOnWrite(v31, v15, DriverPage, v44);
          v32 = a1;
          if ( v42 && !v48 && (v48 = MiSessionLookupImage(*(_QWORD *)(a1 + 48)), *((_BYTE *)v48 + 64)) )
          {
            v40 = 1;
          }
          else if ( !v40 )
          {
            goto LABEL_48;
          }
          if ( MiDriverPageMustStayResident(v32, v15) )
          {
            v45 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v45, v34, v35, v18);
              while ( *(__int64 *)(v21 + 24) < 0 );
            }
            MiRemoveLockedPageChargeAndDecRef(v21);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v33 = 48 * DriverPage - 0x220000000000LL;
            v46 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v46, v36, v37, v38);
              while ( *(__int64 *)(v33 + 24) < 0 );
            }
            MiAddLockedPageCharge(48 * DriverPage - 0x220000000000LL, 1LL, v37);
            _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_49:
            DriverPage = -1LL;
            if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v33 + 40) >> 60) & 7) == 3 )
              MiMakeDriverPageStayResident(a1, v10, v31);
            goto LABEL_50;
          }
LABEL_48:
          v33 = 48 * DriverPage - 0x220000000000LL;
          goto LABEL_49;
        }
      }
      else if ( !MiIsPfnFromSlabAllocation(v26) )
      {
        goto LABEL_46;
      }
      if ( v47 == v15 )
        goto LABEL_46;
      MiReleaseFreshPage(v26);
      v11 = v41;
      v47 = v15;
    }
    MiUnlockPageTableInternal(v10, v4);
    MiUnlockWorkingSetShared(v10, v39);
    MiUnlockLoaderEntry(v11, 0);
    DriverPage = MiAllocateDriverPage(v49, v25, 0LL);
    MiLockLoaderEntry(v11, 0LL);
    MiLockWorkingSetShared(v10);
    MiLockPageTableInternal(v10, v4, 0LL, v27);
    if ( DriverPage == -1LL )
    {
      v5 = -1073741801;
      goto LABEL_15;
    }
LABEL_14:
    if ( v15 > a3 )
      goto LABEL_15;
  }
  v5 = -1073741755;
LABEL_15:
  if ( v4 )
    MiUnlockPageTableInternal(v10, v4);
  v17 = v39;
LABEL_18:
  MiUnlockWorkingSetShared(v10, v17);
  MiUnlockLoaderEntry(v11, 0);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL);
  return v5;
}
