/*
 * XREFs of HvpAllocateBin @ 0x1406FC9B8
 * Callers:
 *     HvpAddBin @ 0x1406FAA84 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140720D7C (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x14079F928 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140873DA8 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140873FF4 (HvpMapHiveImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD); // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax

  v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24);
  v6 = 0;
  v7 = (unsigned int)a2;
  LOBYTE(a2) = a3 == 0;
  v8 = v5(v7, a2, a4);
  if ( v8 )
    *a5 = v8;
  else
    return (unsigned int)-1073741670;
  return v6;
}
