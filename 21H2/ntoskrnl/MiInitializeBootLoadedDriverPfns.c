/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140A66FFC
 * Callers:
 *     MiInitializeDriverImages @ 0x140A4F6F4 (MiInitializeDriverImages.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiAcquireNonPagedResources @ 0x140296FE0 (MiAcquireNonPagedResources.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiActOnLargeKernelHalPages @ 0x1407A1BEC (MiActOnLargeKernelHalPages.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r12
  __int64 *v2; // r14
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  int v5; // edx
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // r13
  BOOL v11; // r12d
  struct _LIST_ENTRY *Flink; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h]
  __int64 *v17; // [rsp+70h] [rbp+18h]

  v15 = 0LL;
  v1 = (__int64 *)(a1 + 16);
  v2 = *(__int64 **)(a1 + 16);
  v17 = (__int64 *)(a1 + 16);
  while ( 1 )
  {
    if ( v2 == v1 )
    {
      MiFlags |= 0x1000u;
      return 1LL;
    }
    v8 = v2[6];
    v6 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v8) )
      break;
    if ( (MiFlags & 0x10000) != 0 )
      MiActOnLargeKernelHalPages((char *)v8, (__int64 (__fastcall *)(char *, char *))MiValidateKernelHalLargePageRange);
LABEL_13:
    v2 = (__int64 *)*v2;
  }
  v9 = ((unsigned int)dword_140C4CCF0 >> 12)
     + (unsigned int)(((unsigned __int64)*((unsigned int *)v2 + 16) + 4095) >> 12);
  if ( (PVOID)v8 != PsHalImageBase && (PVOID)v8 != PsNtosImageBase )
    v9 = (unsigned int)(dword_140C4CC8C + v9);
  v10 = v6 + 8 * v9;
  v7 = (unsigned int)v9;
  v14 = 0LL;
  v16 = (unsigned int)v9;
  if ( v6 >= v10 )
  {
LABEL_10:
    if ( (PVOID)v8 != PsHalImageBase && (PVOID)v8 != PsNtosImageBase )
    {
      _InterlockedExchangeAdd(&dword_140C4F010, v9);
      qword_140C4EFF0 -= v7;
    }
    goto LABEL_13;
  }
  v11 = MiPteInShadowRange((unsigned __int64)&v15);
  do
  {
    v3 = MI_READ_PTE_LOCK_FREE(v6);
    v15 = v3;
    if ( v11
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v3 & 1) != 0
      && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v15 >> 3) & 0x1FF)) & 0x20) != 0 )
          v3 |= 0x20uLL;
      }
    }
    v4 = 48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( MiIsPfnFromSlabAllocation(v4) )
      ++v14;
    if ( v15 >= 0 )
    {
      v5 = BYTE2(MiFlags) & 1;
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)(v5 != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                           + 192);
      if ( v5 )
      {
        if ( ((*(_QWORD *)(v4 + 40) >> 60) & 7) != 3 )
          MiMarkPfnVerified(v4, 0);
      }
    }
    *(_BYTE *)(v4 + 35) |= 8u;
    v6 += 8LL;
  }
  while ( v6 < v10 );
  v1 = v17;
  if ( !v14 )
  {
LABEL_9:
    v7 = v16;
    goto LABEL_10;
  }
  if ( (int)MiAcquireNonPagedResources(&MiSystemPartition, v14, 0LL, 0) >= 0 )
  {
    qword_140C4EFF0 += v14;
    goto LABEL_9;
  }
  return 0LL;
}
