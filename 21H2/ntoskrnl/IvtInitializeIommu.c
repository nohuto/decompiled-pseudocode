/*
 * XREFs of IvtInitializeIommu @ 0x1409AA880
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x1403AD060 (HalMapIoSpace.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     IvtBuildContextEntry @ 0x1404DFA60 (IvtBuildContextEntry.c)
 *     IvtBuildExtendedContextEntry @ 0x1404DFAAC (IvtBuildExtendedContextEntry.c)
 *     IvtFlushTbInternal @ 0x1404DFCE4 (IvtFlushTbInternal.c)
 *     IvtGetBlockedDomain @ 0x1404E015C (IvtGetBlockedDomain.c)
 *     IvtGetContextEntryType @ 0x1404E01B0 (IvtGetContextEntryType.c)
 *     IvtGetIdentityMappedDomain @ 0x1404E0264 (IvtGetIdentityMappedDomain.c)
 *     IvtInitializeIdentityMappings @ 0x1404E0430 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeMTRR @ 0x1404E06B4 (IvtInitializeMTRR.c)
 *     IvtInvalidateAllContextEntries @ 0x1404E08A0 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404E09FC (IvtInvalidateRemappingTableEntries.c)
 *     IvtUpdateGlobalCommand @ 0x1404E1290 (IvtUpdateGlobalCommand.c)
 *     IvtProcessDeviceExceptions @ 0x1409AB0B8 (IvtProcessDeviceExceptions.c)
 */

__int64 __fastcall IvtInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // r13d
  int v4; // eax
  char v5; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 result; // rax
  _DWORD *v11; // rax
  int v12; // eax
  LARGE_INTEGER v13; // rax
  PVOID v14; // rax
  LARGE_INTEGER v15; // rax
  PVOID v16; // rax
  char ContextEntryType; // r15
  __int64 IdentityMappedDomain; // rax
  _QWORD *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // r11
  unsigned __int64 v25; // rcx
  __int128 v26; // kr00_16
  __int64 v27; // rdx
  LARGE_INTEGER v28; // rax
  PVOID v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rax
  unsigned __int64 i; // rcx
  __int64 v33; // r8
  __int64 *v34; // rcx
  LARGE_INTEGER v35; // rax
  PVOID v36; // rax
  unsigned int v37; // r12d
  unsigned __int64 *v38; // r13
  _QWORD *v39; // r15
  __int64 v40; // rax
  PVOID v41; // rax
  unsigned int v42; // r15d
  LARGE_INTEGER v43; // rax
  PVOID v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v49; // ecx
  signed __int32 v50[8]; // [rsp+0h] [rbp-99h] BYREF
  __int64 v51; // [rsp+28h] [rbp-71h]
  unsigned int v52; // [rsp+50h] [rbp-49h]
  __int64 v53; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v54[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 v55; // [rsp+70h] [rbp-29h] BYREF
  __int128 v56; // [rsp+80h] [rbp-19h] BYREF
  __int128 v57; // [rsp+90h] [rbp-9h] BYREF
  __int128 v58; // [rsp+A0h] [rbp+7h]
  int v59; // [rsp+100h] [rbp+67h]
  unsigned int v60; // [rsp+108h] [rbp+6Fh]
  int v62; // [rsp+118h] [rbp+7Fh]

  v3 = *(_DWORD *)(a1 + 260);
  v60 = *(_DWORD *)(a1 + 256);
  v4 = *(_DWORD *)(a1 + 264);
  v62 = v4;
  v5 = a3;
  v52 = 0;
  v59 = v3;
  v7 = 0x10000LL;
  v53 = 0LL;
  v56 = 0LL;
  v55 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &IvtPhysicalMemoryApi);
    if ( (int)result < 0 )
      return result;
    v11 = *(_DWORD **)(a1 + 8);
    if ( !v11 )
    {
      v11 = HalMapIoSpace(*(LARGE_INTEGER *)a1, 0x220uLL, MmNonCached);
      *(_QWORD *)(a1 + 8) = v11;
      if ( !v11 )
        return 3221225473LL;
    }
    v11[14] = 0x80000000;
    _InterlockedOr(v50, 0);
    IvtUpdateGlobalCommand(a1, 0x4000000u, 0);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v12;
      _InterlockedOr(v50, 0);
    }
    IvtUpdateGlobalCommand(a1, 0x2000000u, 0);
    if ( !v3 )
      goto LABEL_65;
    if ( *(_BYTE *)(a1 + 270) && !*(_QWORD *)(a1 + 280) && (int)IvtInitializeIdentityMappings(a1) < 0 )
      return 3221225473LL;
    if ( *(_QWORD *)(a1 + 40) )
    {
LABEL_47:
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v28.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
        *(LARGE_INTEGER *)(a1 + 24) = v28;
        if ( !v28.QuadPart )
          return 3221225473LL;
        v29 = HalMapIoSpace(v28, 0x1000uLL, (MEMORY_CACHING_TYPE)((*(_BYTE *)(a1 + 184) & 1) != 0));
        *(_QWORD *)(a1 + 16) = v29;
        if ( !v29 )
          return 3221225473LL;
        v30 = *(__int64 **)(a1 + 16);
        v31 = ((*(_QWORD *)(a1 + 48) / 4096LL) << 12) | 1;
        for ( i = (unsigned __int64)(v30 + 512); (unsigned __int64)v30 < i; i = *(_QWORD *)(a1 + 16) + 4096LL )
        {
          *v30 = v31;
          v33 = *(_QWORD *)(a1 + 184) & 0x1000000LL;
          if ( (*(_QWORD *)(a1 + 184) & 0x1000000) == 0 )
            v30[1] = 0LL;
          v34 = v30 + 1;
          if ( v33 )
            v34 = v30;
          v30 = v34 + 1;
        }
      }
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v35.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
        if ( !v35.QuadPart )
          return 3221225473LL;
        v36 = HalMapIoSpace(v35, 0x1000uLL, MmCached);
        *(_QWORD *)(a1 + 32) = v36;
        if ( !v36 )
          return 3221225473LL;
        memset(v36, 0, 0x1000uLL);
      }
      if ( v3 == 2 && !v5 && (int)IvtProcessDeviceExceptions(a1) < 0 )
        return 3221225473LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = (*(_DWORD *)(a1 + 184) >> 13) & 0x800 | (unsigned __int64)((*(_QWORD *)(a1 + 24) / 4096LL) << 12);
      _InterlockedOr(v50, 0);
      IvtUpdateGlobalCommand(a1, 0x40000000u, 1);
LABEL_65:
      v37 = 0;
      v38 = (unsigned __int64 *)&v56;
      v39 = (_QWORD *)(a1 + 72);
      do
      {
        if ( v37 != 1 || v59 )
        {
          v39[2] = 4096LL;
          if ( !*v39 )
          {
            v40 = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
            v39[1] = v40;
            if ( !v40 )
              return 3221225473LL;
            v41 = HalMapIoSpace(*(LARGE_INTEGER *)(32LL * v37 + a1 + 80), 0x1000uLL, MmCached);
            *v39 = v41;
            if ( !v41 )
              return 3221225473LL;
            memset(v41, 0, 0x1000uLL);
          }
          *v38 = *(_DWORD *)v38 & 0xFF8 | (unsigned __int64)((v39[1] / 4096LL) << 12);
        }
        ++v37;
        v39 += 4;
        ++v38;
      }
      while ( v37 < 2 );
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
      _InterlockedOr(v50, 0);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = v56;
      _InterlockedOr(v50, 0);
      if ( v62 )
      {
        if ( v62 == 1 )
        {
          *(_QWORD *)(a1 + 240) = IvtSharedRemappingTable;
          *(_QWORD *)(a1 + 248) = IvtSharedRemappingTablePhysical;
        }
        if ( !*(_QWORD *)(a1 + 240) )
        {
          v42 = (16 * v60 + 4095) & 0xFFFFF000;
          v43.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD))IvtPhysicalMemoryApi)(-1LL, v42 >> 12);
          *(LARGE_INTEGER *)(a1 + 248) = v43;
          if ( !v43.QuadPart )
            return 3221225473LL;
          v44 = HalMapIoSpace(v43, v42, (MEMORY_CACHING_TYPE)((*(_BYTE *)(a1 + 184) & 1) != 0));
          *(_QWORD *)(a1 + 240) = v44;
          if ( !v44 )
            return 3221225473LL;
          memset(v44, 0, v42);
          *(_DWORD *)(a1 + 256) = v60;
          if ( v62 == 1 && !IvtSharedRemappingTable )
          {
            IvtSharedRemappingTable = *(_QWORD *)(a1 + 240);
            IvtSharedRemappingTablePhysical = *(_QWORD *)(a1 + 248);
          }
        }
        _BitScanReverse(&v45, v60);
        v46 = (*(_QWORD *)(a1 + 248) / 4096LL) << 12;
        v52 = v45;
        v47 = ((_BYTE)v45 - 1) & 0xF | (unsigned __int64)v46 | 0x800;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) = v47;
        _InterlockedOr(v50, 0);
        KeStallExecutionProcessor(0x64u);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) != v47 )
          KeBugCheckEx(0x5Cu, 0x7000uLL, 0LL, 0LL, 0LL);
        IvtUpdateGlobalCommand(a1, 0x1000000u, 1);
      }
      if ( v59 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) = 0LL;
        _InterlockedOr(v50, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
        _InterlockedOr(v50, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = *((_QWORD *)&v56 + 1);
        _InterlockedOr(v50, 0);
        IvtInitializeMTRR(a1);
      }
      if ( !*(_QWORD *)(a1 + 144) )
      {
        PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 136));
        v49 = *(_DWORD *)(a1 + 160);
        *(PHYSICAL_ADDRESS *)(a1 + 144) = PhysicalAddress;
        *(_QWORD *)(a1 + 160) = v49 & 3 | PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)(a1 + 152) = *(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFF90uLL | 0x65;
      }
      v9 = 0x4000000;
      goto LABEL_92;
    }
    v13.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
    *(LARGE_INTEGER *)(a1 + 48) = v13;
    if ( !v13.QuadPart )
      return 3221225473LL;
    v14 = HalMapIoSpace(v13, 0x1000uLL, (MEMORY_CACHING_TYPE)((*(_BYTE *)(a1 + 184) & 1) != 0));
    *(_QWORD *)(a1 + 40) = v14;
    if ( !v14 )
      return 3221225473LL;
    if ( !IvtBlockedPageTable )
    {
      v15.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
      IvtBlockedPageTablePhysical = v15.QuadPart;
      if ( !v15.QuadPart )
        return 3221225473LL;
      v16 = HalMapIoSpace(v15, 0x1000uLL, (MEMORY_CACHING_TYPE)(*(_DWORD *)(a1 + 184) & 1));
      IvtBlockedPageTable = (__int64)v16;
      if ( !v16 )
        return 3221225473LL;
      memset(v16, 0, 0x1000uLL);
    }
    ContextEntryType = 0;
    if ( v3 == 1 )
    {
      if ( *(_BYTE *)(a1 + 270) )
      {
        ContextEntryType = IvtGetContextEntryType(0, 1);
        IdentityMappedDomain = IvtGetIdentityMappedDomain(a1, &v53);
        goto LABEL_31;
      }
      ContextEntryType = IvtGetContextEntryType(0, 0);
    }
    if ( v3 != 2 )
    {
LABEL_32:
      if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
      {
        IvtBuildExtendedContextEntry(a1, ContextEntryType, 0LL, 0, 0, v7, v53, (__int64)&v57);
        v19 = *(_QWORD **)(a1 + 40);
        if ( v19 < v19 + 512 )
        {
          v20 = v57;
          v21 = *((_QWORD *)&v58 + 1);
          v22 = v58;
          v23 = v57 & 1;
          v24 = *((_QWORD *)&v57 + 1);
          do
          {
            if ( v23 )
            {
              v19[3] = v21;
              v19[2] = v22;
              v19[1] = v24;
              *v19 = v20;
            }
            else
            {
              *v19 = 0LL;
              v19[1] = 0LL;
              v19[2] = 0LL;
              v19[3] = 0LL;
            }
            v19 += 4;
          }
          while ( (unsigned __int64)v19 < *(_QWORD *)(a1 + 40) + 4096LL );
        }
      }
      else
      {
        IvtBuildContextEntry(a1, ContextEntryType, v7, v53, (__int64 *)&v55);
        v25 = *(_QWORD *)(a1 + 40);
        if ( v25 < v25 + 4096 )
        {
          v26 = v55;
          v27 = v55 & 1;
          do
          {
            if ( v27 )
            {
              *(_OWORD *)v25 = v26;
            }
            else
            {
              *(_QWORD *)v25 = 0LL;
              *(_QWORD *)(v25 + 8) = 0LL;
            }
            v25 += 16LL;
          }
          while ( v25 < *(_QWORD *)(a1 + 40) + 4096LL );
        }
      }
      v5 = a3;
      goto LABEL_47;
    }
    ContextEntryType = IvtGetContextEntryType(0, 1);
    IdentityMappedDomain = IvtGetBlockedDomain(a1, 0LL, (unsigned __int64 *)&v53);
LABEL_31:
    v7 = IdentityMappedDomain;
    goto LABEL_32;
  }
  if ( a2 != 1 )
    return 3221225473LL;
  if ( v4 )
  {
    IvtInvalidateRemappingTableEntries(a1, 0LL);
    IvtUpdateGlobalCommand(a1, 0x2000000u, 1);
  }
  if ( !v3 )
    return 0LL;
  IvtInvalidateAllContextEntries(a1);
  v54[1] = v54;
  v54[0] = v54;
  if ( (*(_DWORD *)(a1 + 184) & 0x1000000) != 0 )
    IvtFlushTbInternal(a1, v8, 0LL, 1, 0, v51, v54, 0, 0LL);
  IvtFlushTbInternal(a1, v8, 0LL, 1, 1, v51, v54, 0, 0LL);
  v9 = 0x80000000;
LABEL_92:
  IvtUpdateGlobalCommand(a1, v9, 1);
  return 0LL;
}
