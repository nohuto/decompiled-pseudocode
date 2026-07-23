/*
 * XREFs of IommupHvInitializeLibrary @ 0x140A8E764
 * Callers:
 *     IommuInitializeLibrary @ 0x1403AD4B8 (IommuInitializeLibrary.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140216B60 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     HalpInterruptSetIdtEntry @ 0x1403A27FC (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 IommupHvInitializeLibrary()
{
  int v0; // r14d
  int v1; // ebp
  __int64 v2; // rsi
  char *PoolWithTag; // rax
  char *v4; // r15
  __int64 v6; // r9
  unsigned int v7; // r13d
  _QWORD *v8; // r12
  char *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char *v11; // rax
  __int64 v12; // rdx
  unsigned int i; // edi
  PVOID *v14; // rdi
  unsigned int v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h]

  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v0 = 0;
  if ( !qword_140C4A298 )
    return 3221225659LL;
  qword_140C4A298(&v16);
  if ( (v16 & 1) == 0 )
    return 3221225659LL;
  v1 = DWORD2(v16);
  if ( HIDWORD(v17) && HIDWORD(v17) < DWORD2(v16) )
    v1 = HIDWORD(v17);
  v2 = v17;
  if ( !(_DWORD)v17 )
    v2 = 1LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)((_DWORD)v2 << 6), 0x496C6148u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, (unsigned int)((_DWORD)v2 << 6));
  v7 = 0;
  if ( (_DWORD)v2 )
  {
    v8 = v4 + 16;
    while ( 1 )
    {
      *((_DWORD *)v8 - 4) = v7;
      ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000, 0LL, -1LL, 0, 4u, 0x80000000);
      *(v8 - 1) = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      *v8 = ContiguousNodeMemory + 4096;
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      v0 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_140C4A2E8)(
             v7,
             102LL,
             (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
             206LL,
             0);
      if ( v0 < 0 )
        goto LABEL_20;
      ++v15;
      ++v7;
      v8 += 8;
      if ( v7 >= (unsigned int)v2 )
        goto LABEL_15;
    }
    v0 = -1073741670;
LABEL_20:
    for ( i = 0; i < v15; ++i )
      ((void (__fastcall *)(_QWORD))qword_140C4A2F0)(i);
    v14 = (PVOID *)(v4 + 8);
    do
    {
      if ( *v14 )
        MmFreeContiguousMemory(*v14);
      v14 += 8;
      --v2;
    }
    while ( v2 );
    ExFreePoolWithTag(v4, 0x496C6148u);
  }
  else
  {
LABEL_15:
    IommupHvSvmEnabled = 1;
    IommupHvMaximumAsids = v1;
    IommupHvPageRequestQueueCount = v2;
    IommupHvPageRequestQueues = (__int64)v4;
    if ( (_DWORD)v2 )
    {
      v11 = v4 + 32;
      v12 = (unsigned int)v2;
      do
      {
        *((_QWORD *)v11 - 1) = 0LL;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
        *((_QWORD *)v11 + 2) = IommupHvGetPageFault;
        *((_QWORD *)v11 + 3) = IommupHvDismissPageFault;
        *((_DWORD *)v11 + 3) = 40;
        v11 += 64;
        --v12;
      }
      while ( v12 );
    }
    HalpInterruptSetIdtEntry(0xCEu, (int)IommupHvInterruptRoutine, 12, v6, -1LL);
  }
  return (unsigned int)v0;
}
