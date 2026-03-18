/*
 * XREFs of HsaUpdateDeviceTableEntry @ 0x1404DF388
 * Callers:
 *     HalpHsapInitializeReservedDomain @ 0x1404DC714 (HalpHsapInitializeReservedDomain.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404DD4A8 (HsaAttachDeviceDomainInternal.c)
 *     HsaProcessDeviceExceptions @ 0x1404DEF68 (HsaProcessDeviceExceptions.c)
 *     HsaSetDevicePasidTable @ 0x1404DF2A0 (HsaSetDevicePasidTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1403617D0 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     HsaBuildDeviceTableEntry @ 0x1404DD6B4 (HsaBuildDeviceTableEntry.c)
 *     HsaGetBlockedDomain @ 0x1404DE6B4 (HsaGetBlockedDomain.c)
 *     HsaInvalidateDTE @ 0x1404DEBFC (HsaInvalidateDTE.c)
 */

__int64 __fastcall HsaUpdateDeviceTableEntry(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v11; // r14
  __int128 v12; // xmm0
  char v13; // r15
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // edi
  __int16 BlockedDomain; // ax
  __int128 v19; // rax
  __int128 v20; // rt0
  unsigned __int8 v21; // tt
  char v23; // [rsp+50h] [rbp-59h]
  unsigned int v24; // [rsp+58h] [rbp-51h] BYREF
  __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  __int128 v27; // [rsp+70h] [rbp-39h]
  __int128 v28; // [rsp+80h] [rbp-29h] BYREF
  __int128 v29; // [rsp+90h] [rbp-19h] BYREF

  v11 = *(_QWORD *)(a1 + 24) + 32LL * a2;
  v24 = a2;
  v23 = 0;
  v26 = 0x10000LL;
  v12 = *(_OWORD *)(v11 + 16);
  v28 = *(_OWORD *)v11;
  v29 = v12;
  if ( (v28 & 1) != 0 && !a7 )
  {
    v26 = WORD4(v28);
    v23 = 1;
  }
  v13 = 0;
  v14 = 0LL;
  if ( a4 )
  {
    if ( (v28 & 0x80000000000000LL) != 0 )
    {
      v13 = 1;
      v14 = (DWORD2(v28) & 0xFFFF0000 | ((*((_QWORD *)&v28 + 1) & 0xFFFFF80000FFFFFFuLL | ((unsigned __int64)v28 >> 34) & 0x7000000) >> 11)) >> 13;
    }
  }
  else if ( a3 )
  {
    v13 = 1;
    v14 = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a3 + 40)).QuadPart >> 12;
  }
  v15 = 0LL;
  v25 = 0LL;
  if ( a5 )
  {
    v17 = *(_DWORD *)(a5 + 4);
    if ( v17 == 1 )
    {
      BlockedDomain = HsaGetBlockedDomain(a1, (int *)&v24, (unsigned __int64 *)&v25);
      v15 = v25;
      LOWORD(v16) = BlockedDomain;
    }
    else
    {
      v16 = *(_DWORD *)(a5 + 24);
      if ( v17 == 2 )
      {
        v15 = *(_QWORD *)(a5 + 16) >> 12;
        goto LABEL_17;
      }
    }
  }
  else
  {
    LOWORD(v16) = WORD4(v28);
    if ( (v28 & 0xE00) == 0x800 )
    {
      v17 = 2;
      v15 = (__int64)((_QWORD)v28 << 12) >> 24;
LABEL_17:
      v25 = v15;
      goto LABEL_18;
    }
    v17 = 0;
  }
LABEL_18:
  HsaBuildDeviceTableEntry(a1, v14, v13, v16, v17, v15, &v29, 0LL, (__int64)&v28);
  *((_QWORD *)&v19 + 1) = *(_QWORD *)(v11 + 8);
  *(_QWORD *)&v27 = *(_QWORD *)v11;
  *(_QWORD *)&v19 = v27;
  *((_QWORD *)&v27 + 1) = *((_QWORD *)&v19 + 1);
  do
  {
    v20 = v19;
    v21 = _InterlockedCompareExchange128(
            (volatile signed __int64 *)v11,
            *((signed __int64 *)&v28 + 1),
            v28,
            (signed __int64 *)&v20);
    v19 = v20;
    v27 = v20;
  }
  while ( !v21 );
  if ( v23 )
    *(_QWORD *)&v19 = HsaInvalidateDTE(a1, v24, a6);
  if ( a10 )
  {
    *(_QWORD *)&v19 = v26;
    *a10 = v26;
  }
  return v19;
}
