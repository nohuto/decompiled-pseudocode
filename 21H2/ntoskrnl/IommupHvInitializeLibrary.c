/*
 * XREFs of IommupHvInitializeLibrary @ 0x140B4D2C4
 * Callers:
 *     IommuInitializeLibrary @ 0x1403BB76C (IommuInitializeLibrary.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HalpInterruptSetIdtEntry @ 0x1403AEF08 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 IommupHvInitializeLibrary()
{
  unsigned int v0; // r12d
  int v1; // r14d
  int v2; // ebp
  __int64 v3; // rsi
  __int64 Pool2; // rax
  __int64 v5; // r9
  PVOID *v6; // r15
  unsigned int v8; // r13d
  _QWORD *v9; // rax
  char *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  char *v12; // rax
  __int64 v13; // rdx
  unsigned int i; // edi
  PVOID *v15; // rdi
  _QWORD *v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h]

  v17 = 0LL;
  v18 = 0LL;
  v0 = 0;
  v1 = 0;
  if ( !qword_140C4C558 )
    return 3221225659LL;
  qword_140C4C558(&v17);
  if ( (v17 & 1) == 0 )
    return 3221225659LL;
  v2 = DWORD2(v17);
  if ( HIDWORD(v18) && HIDWORD(v18) < DWORD2(v17) )
    v2 = HIDWORD(v18);
  v3 = v18;
  if ( !(_DWORD)v18 )
    v3 = 1LL;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)((_DWORD)v3 << 6), 0x496C6148u);
  v6 = (PVOID *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v8 = 0;
  if ( (_DWORD)v3 )
  {
    v9 = (_QWORD *)(Pool2 + 16);
    v16 = v9;
    while ( 1 )
    {
      *((_DWORD *)v9 - 4) = v8;
      ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000LL, 0, -1, 0, 4, 0x80000000);
      *(v16 - 1) = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      *v16 = ContiguousNodeMemory + 4096;
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      v1 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))qword_140C4C5A8)(
             v8,
             85LL,
             (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
             206LL,
             0);
      if ( v1 < 0 )
        goto LABEL_21;
      ++v0;
      v9 = v16 + 8;
      ++v8;
      v16 += 8;
      if ( v8 >= (unsigned int)v3 )
        goto LABEL_15;
    }
    v1 = -1073741670;
LABEL_21:
    for ( i = 0; i < v0; ++i )
      ((void (__fastcall *)(_QWORD))qword_140C4C5B0)(i);
    v15 = v6 + 1;
    do
    {
      if ( *v15 )
        MmFreeContiguousMemory(*v15);
      v15 += 8;
      --v3;
    }
    while ( v3 );
    ExFreePoolWithTag(v6, 0x496C6148u);
  }
  else
  {
LABEL_15:
    IommupHvSvmEnabled = 1;
    IommupHvMaximumAsids = v2;
    IommupHvPageRequestQueueCount = v3;
    IommupHvPageRequestQueues = (__int64)v6;
    if ( (_DWORD)v3 )
    {
      v12 = (char *)(v6 + 4);
      v13 = (unsigned int)v3;
      do
      {
        *((_QWORD *)v12 - 1) = 0LL;
        *(_QWORD *)v12 = 0LL;
        *((_DWORD *)v12 + 2) = 0;
        *((_QWORD *)v12 + 2) = IommupHvGetPageFault;
        *((_QWORD *)v12 + 3) = IommupHvDismissPageFault;
        *((_DWORD *)v12 + 3) = 48;
        v12 += 64;
        --v13;
      }
      while ( v13 );
    }
    HalpInterruptSetIdtEntry(0xCEu, (int)IommupHvInterruptRoutine, 12, v5, -1LL);
  }
  return (unsigned int)v1;
}
