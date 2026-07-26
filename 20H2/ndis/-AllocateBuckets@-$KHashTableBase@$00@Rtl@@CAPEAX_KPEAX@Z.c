/*
 * XREFs of ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x1C01084E0
 * Callers:
 *     ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x1C0108448 (--0-$KHashTableBase@$00@Rtl@@QEAA@_K@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AE0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall Rtl::KHashTableBase<1>::AllocateBuckets(SIZE_T NumberOfBytes, __int64 a2)
{
  if ( NumberOfBytes <= 8 )
    return (PVOID)(a2 + 16);
  else
    return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6873484Bu);
}
