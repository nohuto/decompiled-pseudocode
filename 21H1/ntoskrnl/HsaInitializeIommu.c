/*
 * XREFs of HsaInitializeIommu @ 0x1409A6950
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x14033BB60 (MmGetPhysicalAddress.c)
 *     HalSocRequestApi @ 0x14039EB7C (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x1403A8C70 (HalMapIoSpace.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HsaBuildDeviceTableEntry @ 0x1404DD0F4 (HsaBuildDeviceTableEntry.c)
 *     HsaGetBlockedDomain @ 0x1404DE0F4 (HsaGetBlockedDomain.c)
 *     HsaProcessDeviceExceptions @ 0x1404DE9A8 (HsaProcessDeviceExceptions.c)
 *     HsaInitializeInterruptRemapping @ 0x1409A67A8 (HsaInitializeInterruptRemapping.c)
 */

__int64 __fastcall HsaInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // esi
  int v4; // r12d
  __int64 result; // rax
  LARGE_INTEGER v7; // rax
  PVOID v8; // rax
  PVOID v9; // rax
  unsigned int v10; // esi
  _QWORD *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rdx
  SIZE_T v14; // r15
  bool v15; // zf
  __int64 v16; // rax
  PVOID v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int16 v21; // r8
  __int16 BlockedDomain; // ax
  int v23; // edx
  __int64 v24; // rax
  __int64 *v25; // rdx
  _QWORD *v26; // r9
  unsigned __int64 v27; // r8
  unsigned int i; // ecx
  __int64 v29; // rdx
  char v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v37; // rcx
  signed __int32 v38[8]; // [rsp+8h] [rbp-89h] BYREF
  char v39; // [rsp+58h] [rbp-39h]
  unsigned int v40; // [rsp+5Ch] [rbp-35h] BYREF
  __int64 v41; // [rsp+60h] [rbp-31h] BYREF
  int v42; // [rsp+68h] [rbp-29h]
  __int64 *v43; // [rsp+70h] [rbp-21h]
  __int128 v44; // [rsp+78h] [rbp-19h]
  __int128 v45; // [rsp+88h] [rbp-9h]
  _QWORD v46[4]; // [rsp+98h] [rbp+7h] BYREF

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 172);
  v39 = a3;
  v40 = 0;
  v41 = 0LL;
  v42 = v3;
  v44 = 0LL;
  v45 = 0LL;
  if ( a2 )
    return 0LL;
  result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HsaPhysicalMemoryApi);
  if ( (int)result >= 0 )
  {
    if ( !v4 && !v3 )
    {
LABEL_39:
      **(_QWORD **)a1 = ((v46[0] & 0xFFFFFFFFFFLL) << 12) | ((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 12)
                                                           + ((*(_QWORD *)(a1 + 40) & 0xFFFLL) != 0)
                                                           - 1) & 0x1FF;
      _InterlockedOr(v38, 0);
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *((_QWORD *)&v44 + 1);
      _InterlockedOr(v38, 0);
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v45;
      _InterlockedOr(v38, 0);
      *(_QWORD *)(*(_QWORD *)a1 + 0x2000LL) = 0LL;
      _InterlockedOr(v38, 0);
      *(_QWORD *)(*(_QWORD *)a1 + 8200LL) = 0LL;
      _InterlockedOr(v38, 0);
      *(_QWORD *)(*(_QWORD *)a1 + 8208LL) = 0LL;
      _InterlockedOr(v38, 0);
      *(_QWORD *)(*(_QWORD *)a1 + 8216LL) = 0LL;
      _InterlockedOr(v38, 0);
      *(_QWORD *)(*(_QWORD *)a1 + 56LL) = *((_QWORD *)&v45 + 1);
      _InterlockedOr(v38, 0);
      v30 = *(_BYTE *)(a1 + 16);
      v31 = (2LL * (v30 & 1) + 69637) | 0x100;
      if ( (v30 & 2) == 0 )
        v31 = 2LL * (*(_BYTE *)(a1 + 16) & 1) + 69637;
      v32 = v31 | 0x200;
      if ( (*(_BYTE *)(a1 + 16) & 4) == 0 )
        v32 = v31;
      v33 = v32 | 0x400;
      if ( (v30 & 0x20) == 0 )
        v33 = v32;
      v34 = v33 | 0x800;
      if ( (v30 & 8) == 0 )
        v34 = v33;
      v35 = v34 | 0x800000A060LL;
      if ( !*(_QWORD *)(a1 + 128) )
      {
        PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 120));
        *(PHYSICAL_ADDRESS *)(a1 + 128) = PhysicalAddress;
        *(_QWORD *)(a1 + 136) = *(_QWORD *)(a1 + 136) & 0xFF0000000000002LL | (8
                                                                             * ((PhysicalAddress.QuadPart >> 3) & 0x1FFFFFFFFFFFFLL)) | 0x1000000000000005LL;
      }
      v37 = v35 | 0xC000000020000LL;
      if ( !v3 )
        v37 = v35;
      *(_QWORD *)(*(_QWORD *)a1 + 24LL) = v37;
      _InterlockedOr(v38, 0);
      *(_DWORD *)(*(_QWORD *)a1 + 364LL) = 0x2000;
      _InterlockedOr(v38, 0);
      return 0LL;
    }
    if ( v4 == 2 && !HsaBlockedPageTable )
    {
      v7.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))HsaPhysicalMemoryApi)(-1LL, 1LL);
      HsaBlockedPageTablePhysical = v7.QuadPart;
      if ( !v7.QuadPart )
        return 3221225473LL;
      v8 = HalMapIoSpace(v7, 0x1000uLL, (MEMORY_CACHING_TYPE)((*(unsigned __int8 *)(a1 + 16) >> 5) & 1));
      HsaBlockedPageTable = (__int64)v8;
      if ( !v8 )
        return 3221225473LL;
      memset(v8, 0, 0x1000uLL);
    }
    result = HsaInitializeInterruptRemapping(a1);
    if ( (int)result < 0 )
      return result;
    if ( *(_QWORD *)a1
      || (v9 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 8), 0x2040uLL, MmNonCached), (*(_QWORD *)a1 = v9) != 0LL) )
    {
      v10 = 0;
      v43 = v46;
      v11 = (_QWORD *)(a1 + 24);
      v12 = 3LL;
      do
      {
        if ( v10 )
        {
          if ( v10 == 3 )
          {
            v13 = 2LL;
            v14 = 0x2000LL;
          }
          else
          {
            v13 = 1LL;
            v14 = 4096LL;
          }
        }
        else
        {
          v13 = 512LL;
          v14 = 0x200000LL;
        }
        v15 = *v11 == 0LL;
        v11[2] = v14;
        if ( v15 )
        {
          v16 = ((__int64 (__fastcall *)(__int64, __int64))HsaPhysicalMemoryApi)(-1LL, v13);
          v11[1] = v16;
          if ( !v16 )
            return 3221225473LL;
          v17 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 24LL * v10 + 32), v14, MmNonCached);
          *v11 = v17;
          if ( !v17 )
            return 3221225473LL;
          memset(v17, 0, v14);
          v18 = 0;
          if ( !v10 )
          {
            v19 = *(_QWORD *)(a1 + 24);
            v40 = 0;
            do
            {
              v20 = 0LL;
              v21 = 0;
              v41 = 0LL;
              if ( v4 == 2 )
              {
                BlockedDomain = HsaGetBlockedDomain(a1, (int *)&v40, (unsigned __int64 *)&v41);
                v20 = v41;
                v21 = BlockedDomain;
                v23 = 2;
              }
              else
              {
                v23 = 0;
              }
              HsaBuildDeviceTableEntry(
                a1,
                0LL,
                0,
                v21,
                v23,
                v20,
                0LL,
                (__int64)&HsaSharedRemappingTable,
                v19 + 32LL * v18++);
              v40 = v18;
            }
            while ( v18 < 0x10000 );
          }
        }
        ++v10;
        v24 = v11[1] / 4096LL;
        v25 = v43;
        v11 += 3;
        *v43 = v24;
        v43 = v25 + 1;
      }
      while ( v10 < 4 );
      if ( v4 != 2 || v39 || (int)HsaProcessDeviceExceptions(a1) >= 0 )
      {
        v26 = (_QWORD *)(a1 + 64);
        v27 = 0LL;
        do
        {
          for ( i = 15; i > 8; --i )
          {
            if ( (unsigned __int64)(1LL << i) <= *v26 >> 4 )
              break;
          }
          v26 += 3;
          v29 = *(_QWORD *)((char *)&v44 + v27 + 8) ^ (*(_QWORD *)((char *)&v44 + v27 + 8) ^ (v46[v27 / 8 + 1] << 12)) & 0xFFFFFFFFFF000LL;
          *(_QWORD *)((char *)&v44 + v27 + 8) = v29 ^ (v29 ^ ((unsigned __int64)i << 56)) & 0xF00000000000000LL;
          v27 += 8LL;
          --v12;
        }
        while ( v12 );
        v3 = v42;
        goto LABEL_39;
      }
    }
    return 3221225473LL;
  }
  return result;
}
