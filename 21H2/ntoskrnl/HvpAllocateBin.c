/*
 * XREFs of HvpAllocateBin @ 0x14068D2B8
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x14091A928 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x14091AB6C (HvpMapHiveImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HvpAllocateNonPagedBin @ 0x140924648 (HvpAllocateNonPagedBin.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD); // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    return (unsigned int)HvpAllocateNonPagedBin(a1, a2, a5);
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24);
    v6 = 0;
    v7 = (unsigned int)a2;
    LOBYTE(a2) = a3 == 0;
    v8 = v5(v7, a2, a4);
    if ( v8 )
      *a5 = v8;
    else
      return (unsigned int)-1073741670;
  }
  return v6;
}
