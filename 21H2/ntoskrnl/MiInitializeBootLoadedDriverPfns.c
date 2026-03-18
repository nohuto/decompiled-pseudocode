/*
 * XREFs of MiInitializeBootLoadedDriverPfns @ 0x140B1A054
 * Callers:
 *     MiInitializeDriverImages @ 0x140B05E40 (MiInitializeDriverImages.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x1403CA414 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiActOnLargeKernelHalPages @ 0x14082BA68 (MiActOnLargeKernelHalPages.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfns(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *i; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v10; // rbx

  v1 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); ; i = (__int64 *)*i )
  {
    if ( i == v1 )
    {
      MiFlags |= 0x800u;
      return 1LL;
    }
    v3 = i[6];
    v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((unsigned __int64)*((unsigned int *)i + 16) + 4095) >> 12;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
      break;
    if ( (MiFlags & 0x8000) != 0 )
      MiActOnLargeKernelHalPages(
        v3,
        (__int64 (__fastcall *)(unsigned __int64, __int64))MiValidateKernelHalLargePageRange);
    if ( (unsigned int)dword_140C4F478 >> 12 )
      MiInitializeBootLoadedDriverPfnRange(
        v4 + 8LL * (((_DWORD)v5 + 511) & 0xFFFFFE00),
        (unsigned int)dword_140C4F478 >> 12,
        1);
LABEL_14:
    ;
  }
  v6 = MiInitializeBootLoadedDriverPfnRange(v4, (unsigned int)v5, 0);
  v7 = v4 + 8LL * (unsigned int)v5;
  v8 = (unsigned int)dword_140C4F478 >> 12;
  if ( (unsigned int)dword_140C4F478 >> 12 )
  {
    LODWORD(v5) = v8 + v5;
    v10 = v8;
    MiInitializeBootLoadedDriverPfnRange(v7, v8, 1);
    v7 += 8 * v10;
  }
  if ( v3 != PsHalImageBase && v3 != PsNtosImageBase && dword_140C4F404 )
  {
    LODWORD(v5) = dword_140C4F404 + v5;
    MiInitializeBootLoadedDriverPfnRange(v7, (unsigned int)dword_140C4F404, 0);
  }
  if ( !v6 )
  {
LABEL_11:
    if ( v3 != PsHalImageBase && v3 != PsNtosImageBase )
    {
      _InterlockedExchangeAdd(&dword_140C53550, v5);
      qword_140C53528 -= (unsigned int)v5;
    }
    goto LABEL_14;
  }
  if ( (int)MiAcquireNonPagedResources((__int64)&MiSystemPartition, v6, 0LL, 0) >= 0 )
  {
    qword_140C53528 += v6;
    goto LABEL_11;
  }
  return 0LL;
}
