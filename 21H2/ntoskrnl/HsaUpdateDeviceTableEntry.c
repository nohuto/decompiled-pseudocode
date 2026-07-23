/*
 * XREFs of HsaUpdateDeviceTableEntry @ 0x1404E4638
 * Callers:
 *     HalpHsapInitializeReservedDomain @ 0x1404E1934 (HalpHsapInitializeReservedDomain.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404E2738 (HsaAttachDeviceDomainInternal.c)
 *     HsaProcessDeviceExceptions @ 0x1404E41EC (HsaProcessDeviceExceptions.c)
 *     HsaSetDevicePasidTable @ 0x1404E4540 (HsaSetDevicePasidTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HsaBuildDeviceTableEntry @ 0x1404E2940 (HsaBuildDeviceTableEntry.c)
 *     HsaGetBlockedDomain @ 0x1404E3970 (HsaGetBlockedDomain.c)
 *     HsaIommuSendCommand @ 0x1404E3F48 (HsaIommuSendCommand.c)
 *     HsaIommuWaitCommand @ 0x1404E41B8 (HsaIommuWaitCommand.c)
 */

__int64 *__fastcall HsaUpdateDeviceTableEntry(
        unsigned __int64 *a1,
        int *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v12; // rsi
  __int128 v13; // xmm0
  char v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // edi
  __int16 BlockedDomain; // ax
  unsigned int v20; // eax
  unsigned int i; // r8d
  __int128 v22; // rax
  __int128 v23; // rt0
  unsigned __int8 v24; // tt
  int v25; // ebx
  unsigned int v26; // edi
  __int64 *result; // rax
  char v28; // [rsp+50h] [rbp-69h]
  __int64 v29; // [rsp+58h] [rbp-61h] BYREF
  __int64 v30; // [rsp+60h] [rbp-59h]
  __int128 v31; // [rsp+68h] [rbp-51h]
  __int64 *v32; // [rsp+78h] [rbp-41h]
  unsigned __int64 v33[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v34; // [rsp+90h] [rbp-29h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-19h] BYREF

  v12 = a1[3] + 32LL * (unsigned int)*a2;
  v32 = a10;
  v28 = 0;
  v30 = 0x10000LL;
  v13 = *(_OWORD *)(v12 + 16);
  v34 = *(_OWORD *)v12;
  v35 = v13;
  if ( (v34 & 1) != 0 && !a7 )
  {
    v30 = WORD4(v34);
    v28 = 1;
  }
  v14 = 0;
  v15 = 0LL;
  if ( a4 )
  {
    if ( (v34 & 0x80000000000000LL) != 0 )
    {
      v14 = 1;
      v15 = (DWORD2(v34) & 0xFFFF0000 | ((*((_QWORD *)&v34 + 1) & 0xFFFFF80000FFFFFFuLL | ((unsigned __int64)v34 >> 34) & 0x7000000) >> 11)) >> 13;
    }
  }
  else if ( a3 )
  {
    v14 = 1;
    v15 = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a3 + 40)).QuadPart >> 12;
  }
  v16 = 0LL;
  v29 = 0LL;
  if ( !a5 )
  {
    LOWORD(v17) = WORD4(v34);
    if ( (v34 & 0xE00) != 0x800 )
    {
      v18 = 0;
      goto LABEL_18;
    }
    v18 = 2;
    v16 = (__int64)((_QWORD)v34 << 12) >> 24;
    goto LABEL_17;
  }
  v18 = *(_DWORD *)(a5 + 4);
  if ( v18 == 1 )
  {
    BlockedDomain = HsaGetBlockedDomain((__int64)a1, a2, (unsigned __int64 *)&v29);
    v16 = v29;
    LOWORD(v17) = BlockedDomain;
    goto LABEL_18;
  }
  v17 = *(_DWORD *)(a5 + 24);
  if ( v18 == 2 )
  {
    v16 = *(_QWORD *)(a5 + 16) >> 12;
LABEL_17:
    v29 = v16;
  }
LABEL_18:
  HsaBuildDeviceTableEntry((__int64)a1, v15, v14, v17, v18, v16, &v35, 0LL, (__int64)&v34);
  v20 = a2[1];
  for ( i = 0; i < v20; v20 = a2[1] )
  {
    *((_QWORD *)&v22 + 1) = *(_QWORD *)(v12 + 8);
    *(_QWORD *)&v31 = *(_QWORD *)v12;
    *(_QWORD *)&v22 = v31;
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&v22 + 1);
    do
    {
      v23 = v22;
      v24 = _InterlockedCompareExchange128(
              (volatile signed __int64 *)v12,
              *((signed __int64 *)&v34 + 1),
              v34,
              (signed __int64 *)&v23);
      v22 = v23;
      v31 = v23;
    }
    while ( !v24 );
    ++i;
    v12 += 32LL * (unsigned int)a2[2];
  }
  if ( v28 )
  {
    v25 = *a2;
    v26 = 0;
    if ( v20 )
    {
      do
      {
        v33[1] = 0LL;
        v33[0] = (unsigned __int16)v25 | 0x2000000000000000LL;
        HsaIommuSendCommand(a1, v33, a6);
        HsaIommuWaitCommand(a1, a6);
        v25 += a2[2];
        ++v26;
      }
      while ( v26 < a2[1] );
    }
  }
  result = v32;
  if ( v32 )
    *v32 = v30;
  return result;
}
