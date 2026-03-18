/*
 * XREFs of IvtInitializeIommu @ 0x140A63CE0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     HalSocRequestApi @ 0x1403B38C8 (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x1403BE7F0 (HalMapIoSpace.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IvtInvalidateRemappingTableEntries @ 0x1404598B2 (IvtInvalidateRemappingTableEntries.c)
 *     IvtBuildContextEntry @ 0x14052E1BC (IvtBuildContextEntry.c)
 *     IvtBuildScalableModeContextEntry @ 0x14052E208 (IvtBuildScalableModeContextEntry.c)
 *     IvtFlushTbInternal @ 0x14052E568 (IvtFlushTbInternal.c)
 *     IvtGetBlockedDomain @ 0x14052E940 (IvtGetBlockedDomain.c)
 *     IvtGetContextEntryType @ 0x14052E994 (IvtGetContextEntryType.c)
 *     IvtGetIdentityMappedDomain @ 0x14052EA24 (IvtGetIdentityMappedDomain.c)
 *     IvtGetPasidGranularTranslationType @ 0x14052EA40 (IvtGetPasidGranularTranslationType.c)
 *     IvtInitializeIdentityMappings @ 0x14052EC78 (IvtInitializeIdentityMappings.c)
 *     IvtInitializeMTRR @ 0x14052EEFC (IvtInitializeMTRR.c)
 *     IvtInvalidateAllContextEntries @ 0x14052F1C8 (IvtInvalidateAllContextEntries.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14052F29C (IvtInvalidateScalableModePasidCache.c)
 *     IvtSetScalableModeContextEntry @ 0x14052F7C0 (IvtSetScalableModeContextEntry.c)
 *     IvtUpdateGlobalCommand @ 0x14052FAA8 (IvtUpdateGlobalCommand.c)
 *     IvtProcessDeviceExceptions @ 0x140A64544 (IvtProcessDeviceExceptions.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140A64748 (IvtSetupScalableModeDefaultPasidTables.c)
 */

__int64 __fastcall IvtInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // r13d
  int v4; // eax
  char v5; // r15
  unsigned __int16 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 result; // rax
  _DWORD *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  LARGE_INTEGER v16; // rax
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  LARGE_INTEGER v20; // rax
  PVOID v21; // rax
  char v22; // r15
  unsigned __int16 IdentityMappedDomain; // ax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // r8
  _QWORD *v28; // r11
  __int64 v29; // r8
  char ContextEntryType; // al
  __int64 *v31; // rcx
  __int64 *v32; // r9
  __int64 v33; // r8
  __int64 v34; // rax
  LARGE_INTEGER v35; // rax
  __int64 *v36; // rax
  __int64 *v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rcx
  LARGE_INTEGER v41; // rax
  PVOID v42; // rax
  unsigned int v43; // r12d
  unsigned __int64 *v44; // r13
  _QWORD *v45; // r15
  __int64 v46; // rax
  PVOID v47; // rax
  __int64 v48; // rcx
  int v49; // r12d
  unsigned int v50; // r13d
  unsigned int v51; // r15d
  LARGE_INTEGER v52; // rax
  PVOID v53; // rax
  unsigned int v54; // ecx
  __int64 v55; // rbx
  __int64 v56; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v58; // ecx
  signed __int32 v59[8]; // [rsp+8h] [rbp-99h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-79h]
  __int64 v61; // [rsp+30h] [rbp-71h]
  __int64 v62; // [rsp+38h] [rbp-69h]
  char v63; // [rsp+58h] [rbp-49h]
  unsigned int v64; // [rsp+5Ch] [rbp-45h]
  int v65; // [rsp+60h] [rbp-41h]
  __int64 v66; // [rsp+68h] [rbp-39h] BYREF
  int v67; // [rsp+70h] [rbp-31h]
  unsigned int v68; // [rsp+74h] [rbp-2Dh]
  __int128 v69; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v70[2]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v71; // [rsp+98h] [rbp-9h] BYREF
  _OWORD v72[2]; // [rsp+A8h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 308);
  v64 = *(_DWORD *)(a1 + 304);
  v4 = *(_DWORD *)(a1 + 312);
  v67 = v4;
  v5 = a3;
  v63 = a3;
  v68 = 0;
  v7 = 0;
  v65 = v3;
  v66 = 0LL;
  v69 = 0LL;
  v71 = 0LL;
  memset(v72, 0, sizeof(v72));
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &IvtPhysicalMemoryApi);
    if ( (int)result < 0 )
      return result;
    v13 = *(_DWORD **)(a1 + 8);
    if ( !v13 )
    {
      v13 = HalMapIoSpace(*(LARGE_INTEGER *)a1, 0x220uLL, MmNonCached);
      *(_QWORD *)(a1 + 8) = v13;
      if ( !v13 )
        return 3221225473LL;
    }
    v13[14] = 0x80000000;
    _InterlockedOr(v59, 0);
    IvtUpdateGlobalCommand(a1, 0x4000000u, 0);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL);
    if ( v14 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v14;
      _InterlockedOr(v59, 0);
    }
    if ( *(_BYTE *)(a1 + 320) && (*(_DWORD *)(a1 + 224) & 0x20000000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 224LL) |= 0x80000000;
      _InterlockedOr(v59, 0);
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 220LL) |= 3u;
      _InterlockedOr(v59, 0);
    }
    IvtUpdateGlobalCommand(a1, 0x2000000u, 0);
    if ( *(_BYTE *)(a1 + 320) && *(int *)(*(_QWORD *)(a1 + 8) + 28LL) < 0 )
      IvtUpdateGlobalCommand(a1, 0x80000000, 0);
    if ( !v3 )
      goto LABEL_68;
    if ( *(_BYTE *)(a1 + 319) && !*(_QWORD *)(a1 + 336) && (int)IvtInitializeIdentityMappings(a1) < 0 )
      return 3221225473LL;
    if ( *(_QWORD *)(a1 + 40) )
    {
LABEL_50:
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v35.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
        *(LARGE_INTEGER *)(a1 + 24) = v35;
        if ( !v35.QuadPart )
          return 3221225473LL;
        v36 = (__int64 *)HalMapIoSpace(v35, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
        *(_QWORD *)(a1 + 16) = v36;
        v37 = v36;
        if ( !v36 )
          return 3221225473LL;
        v38 = (unsigned __int64)(v36 + 512);
        v15 = *(_QWORD *)(a1 + 48) % 4096LL;
        v39 = ((*(_QWORD *)(a1 + 48) / 4096LL) << 12) | 1;
        while ( (unsigned __int64)v37 < v38 )
        {
          *v37 = v39;
          LOBYTE(v15) = *(_BYTE *)(a1 + 320);
          if ( !(_BYTE)v15 )
            v37[1] = 0LL;
          v40 = v37 + 1;
          if ( (_BYTE)v15 )
            v40 = v37;
          v37 = v40 + 1;
          v38 = *(_QWORD *)(a1 + 16) + 4096LL;
        }
      }
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v41.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
        if ( !v41.QuadPart )
          return 3221225473LL;
        v42 = HalMapIoSpace(v41, 0x1000uLL, MmCached);
        *(_QWORD *)(a1 + 32) = v42;
        if ( !v42 )
          return 3221225473LL;
        memset(v42, 0, 0x1000uLL);
      }
      if ( v3 == 2 && !v5 && (int)IvtProcessDeviceExceptions(a1, v15) < 0 )
        return 3221225473LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = (*(_BYTE *)(a1 + 320) != 0 ? 0x400 : 0) | (unsigned __int64)((*(_QWORD *)(a1 + 24) / 4096LL) << 12);
      _InterlockedOr(v59, 0);
      IvtUpdateGlobalCommand(a1, 0x40000000u, 1);
LABEL_68:
      v43 = 0;
      v44 = (unsigned __int64 *)&v69;
      v45 = (_QWORD *)(a1 + 112);
      do
      {
        if ( v43 != 1 || v65 && *(_BYTE *)(a1 + 320) )
        {
          v45[2] = 4096LL;
          if ( !*v45 )
          {
            v46 = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
            v45[1] = v46;
            if ( !v46 )
              return 3221225473LL;
            v47 = HalMapIoSpace(*(LARGE_INTEGER *)(32LL * v43 + a1 + 120), 0x1000uLL, MmCached);
            *v45 = v47;
            if ( !v47 )
              return 3221225473LL;
            memset(v47, 0, 0x1000uLL);
          }
          *v44 = *(_DWORD *)v44 & 0xFF8 | (unsigned __int64)((v45[1] / 4096LL) << 12);
        }
        ++v43;
        v45 += 4;
        ++v44;
      }
      while ( v43 < 2 );
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) = 0LL;
      _InterlockedOr(v59, 0);
      v48 = v69;
      if ( *(_BYTE *)(a1 + 320) )
      {
        v48 = v69 | 0x800;
        *(_QWORD *)&v69 = v69 | 0x800;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 144LL) = v48;
      _InterlockedOr(v59, 0);
      v49 = v67;
      if ( v67 )
      {
        if ( v67 == 1 )
        {
          *(_QWORD *)(a1 + 288) = IvtSharedRemappingTable;
          *(_QWORD *)(a1 + 296) = IvtSharedRemappingTablePhysical;
        }
        v50 = v64;
        if ( !*(_QWORD *)(a1 + 288) )
        {
          v51 = (16 * v64 + 4095) & 0xFFFFF000;
          v52.QuadPart = ((__int64 (__fastcall *)(__int64, _QWORD))IvtPhysicalMemoryApi)(-1LL, v51 >> 12);
          *(LARGE_INTEGER *)(a1 + 296) = v52;
          if ( !v52.QuadPart )
            return 3221225473LL;
          v53 = HalMapIoSpace(v52, v51, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
          *(_QWORD *)(a1 + 288) = v53;
          if ( !v53 )
            return 3221225473LL;
          memset(v53, 0, v51);
          *(_DWORD *)(a1 + 304) = v50;
          if ( v49 == 1 && !IvtSharedRemappingTable )
          {
            IvtSharedRemappingTable = *(_QWORD *)(a1 + 288);
            IvtSharedRemappingTablePhysical = *(_QWORD *)(a1 + 296);
          }
        }
        _BitScanReverse(&v54, v50);
        v55 = (*(_QWORD *)(a1 + 296) / 4096LL) << 12;
        v68 = v54;
        v56 = ((_BYTE)v54 - 1) & 0xF | (unsigned __int64)v55 | 0x800;
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) = v56;
        _InterlockedOr(v59, 0);
        KeStallExecutionProcessor(0x64u);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) != v56 )
          KeBugCheckEx(0x5Cu, 0x7000uLL, 0LL, 0LL, 0LL);
        IvtUpdateGlobalCommand(a1, 0x1000000u, 1);
      }
      if ( v65 )
      {
        if ( *(_BYTE *)(a1 + 320) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) = 0LL;
          _InterlockedOr(v59, 0);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 200LL) = 0LL;
          _InterlockedOr(v59, 0);
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 208LL) = *((_QWORD *)&v69 + 1);
          _InterlockedOr(v59, 0);
        }
        IvtInitializeMTRR(a1);
      }
      if ( !*(_QWORD *)(a1 + 184) )
      {
        PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 176));
        v58 = *(_DWORD *)(a1 + 200);
        *(PHYSICAL_ADDRESS *)(a1 + 184) = PhysicalAddress;
        *(_QWORD *)(a1 + 200) = v58 & 3 | PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFFCuLL;
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 192) & 0xFFFFFFFFFFFFFF90uLL | 0x65;
      }
      v11 = 0x4000000;
      goto LABEL_100;
    }
    v16.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
    *(LARGE_INTEGER *)(a1 + 48) = v16;
    if ( !v16.QuadPart )
      return 3221225473LL;
    v17 = HalMapIoSpace(v16, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
    *(_QWORD *)(a1 + 40) = v17;
    if ( !v17 )
      return 3221225473LL;
    if ( !IvtBlockedPageTable )
    {
      v20.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))IvtPhysicalMemoryApi)(-1LL, 1LL);
      IvtBlockedPageTablePhysical = v20.QuadPart;
      if ( !v20.QuadPart )
        return 3221225473LL;
      v21 = HalMapIoSpace(v20, 0x1000uLL, (MEMORY_CACHING_TYPE)*(_DWORD *)(a1 + 272));
      IvtBlockedPageTable = (__int64)v21;
      if ( !v21 )
        return 3221225473LL;
      memset(v21, 0, 0x1000uLL);
    }
    v22 = 0;
    if ( v3 == 1 )
    {
      if ( *(_BYTE *)(a1 + 319) )
      {
        v22 = 1;
        IdentityMappedDomain = IvtGetIdentityMappedDomain(a1, &v66);
LABEL_36:
        v7 = IdentityMappedDomain;
      }
    }
    else if ( v3 == 2 )
    {
      v22 = 1;
      IdentityMappedDomain = IvtGetBlockedDomain(a1, 0LL, (unsigned __int64 *)&v66);
      goto LABEL_36;
    }
    if ( *(_BYTE *)(a1 + 320) )
    {
      IvtGetPasidGranularTranslationType(v19, 0, v22);
      result = IvtSetupScalableModeDefaultPasidTables(a1);
      if ( (int)result < 0 )
        return result;
      IvtBuildScalableModeContextEntry(v24, *(_QWORD *)(a1 + 104), 0, v25, BugCheckParameter4, (__int64 *)v72);
      v27 = *(_QWORD **)(a1 + 40);
      v28 = v27 + 512;
      while ( v27 < v28 )
      {
        IvtSetScalableModeContextEntry(v26, v72, v27);
        v27 = (_QWORD *)(v29 + 32);
      }
    }
    else
    {
      ContextEntryType = IvtGetContextEntryType(v19, v18, v22);
      IvtBuildContextEntry(a1, ContextEntryType, v7, v66, (__int64 *)&v71);
      v31 = *(__int64 **)(a1 + 40);
      v32 = v31 + 512;
      if ( v31 < v31 + 512 )
      {
        v33 = *((_QWORD *)&v71 + 1);
        v15 = v71;
        v34 = v71 & 1;
        do
        {
          if ( v34 )
          {
            v31[1] = v33;
            *v31 = v15;
          }
          else
          {
            *v31 = 0LL;
            v31[1] = 0LL;
          }
          v31 += 2;
        }
        while ( v31 < v32 );
      }
    }
    v5 = v63;
    goto LABEL_50;
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
  if ( *(_BYTE *)(a1 + 320) )
    IvtInvalidateScalableModePasidCache(a1, 0xFFFFu, v9, v10, 0, 0, 0);
  v70[1] = v70;
  v70[0] = v70;
  IvtFlushTbInternal(a1, v8, 0LL, 1, BugCheckParameter4, v61, v62, 0, 0LL);
  v11 = 0x80000000;
LABEL_100:
  IvtUpdateGlobalCommand(a1, v11, 1);
  return 0LL;
}
