/*
 * XREFs of ACPIGetConvertToHardwareIDWide @ 0x1C000C34C
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C000C130 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToHardwareID @ 0x1C0055918 (ACPIGetConvertToHardwareID.c)
 * Callees:
 *     ACPIAmliDoubleToName @ 0x1C000C0B8 (ACPIAmliDoubleToName.c)
 *     RtlStringCchPrintfA @ 0x1C000C588 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C000C604 (ACPIAnsiStringToWideHelper.c)
 *     ACPIGetProcessorIDWide @ 0x1C0027480 (ACPIGetProcessorIDWide.c)
 *     RtlStringCchCopyNA @ 0x1C0028668 (RtlStringCchCopyNA.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  char *v6; // rdi
  char v7; // r15
  __int64 v10; // rax
  int v11; // esi
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  int v14; // ebp
  unsigned int v15; // r12d
  char *v16; // rax
  char *v17; // rsi
  int v18; // ebx
  __int64 v20; // rbx
  char *PoolWithTag; // rax
  int v22; // eax
  __int64 v23; // rbx
  char *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 0;
  v24 = 0LL;
  v25 = 0;
  if ( (a4 & 0x4000000) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( (v10 & 0x1000000000LL) != 0 )
    {
      v18 = ACPIGetProcessorIDWide(0, a2, a3, a4, (__int64)&v24, (__int64)&v25);
      if ( v18 >= 0 )
      {
        v17 = v24;
        v14 = v25;
        goto LABEL_10;
      }
      return (unsigned int)v18;
    }
    if ( (v10 & 0x800000000000LL) != 0 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 568) + v20) );
      v12 = v20 - 4;
      v11 = a4 & 0x8000000;
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                              v12,
                              0x53706341u);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v12);
        v7 = 1;
        RtlStringCchCopyNA(v6, v12, (STRSAFE_PCNZCH)(*(_QWORD *)(a1 + 568) + 5LL), v12 - 1);
        goto LABEL_8;
      }
      return (unsigned int)-1073741670;
    }
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 )
  {
    v11 = a4 & 0x8000000;
    v12 = 8;
    v6 = (char *)ExAllocatePoolWithTag(
                   (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                   8uLL,
                   0x53706341u);
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      v7 = 1;
      ACPIAmliDoubleToName(v6, *(_DWORD *)(a3 + 16));
LABEL_8:
      v13 = 2 * v12 + 7;
      v14 = 2 * v13;
      v15 = 2 * v13;
      v16 = (char *)ExAllocatePoolWithTag((POOL_TYPE)(v11 != 0 ? NonPagedPoolNx : PagedPool), 2 * v13, 0x53706341u);
      v17 = v16;
      if ( !v16 )
      {
        v18 = -1073741670;
LABEL_13:
        if ( v7 == 1 )
          ExFreePoolWithTag(v6, 0);
        return (unsigned int)v18;
      }
      memset(v16, 0, v15);
      RtlStringCchPrintfA(v17, v13, "ACPI\\%s", v6);
      RtlStringCchPrintfA(&v17[v12 + 5], v13 - (v12 + 5), "*%s", v6);
      ACPIAnsiStringToWideHelper(v17, v15);
LABEL_10:
      *a5 = v17;
      if ( a6 )
        *a6 = v14;
      v18 = 0;
      goto LABEL_13;
    }
    return (unsigned int)-1073741670;
  }
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v22 = *(_DWORD *)(a3 + 24);
  v6 = *(char **)(a3 + 32);
  if ( v22 )
  {
    if ( *v6 == 42 )
    {
      ++v6;
      --v22;
    }
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v6[v23] );
      v12 = v23 + 1;
      v11 = a4 & 0x8000000;
      goto LABEL_8;
    }
  }
  return 3221225485LL;
}
