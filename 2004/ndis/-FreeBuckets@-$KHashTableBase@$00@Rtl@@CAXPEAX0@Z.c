/*
 * XREFs of ?FreeBuckets@?$KHashTableBase@$00@Rtl@@CAXPEAX0@Z @ 0x1C0123AB4
 * Callers:
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AE0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Rtl::KHashTableBase<1>::FreeBuckets(void *a1, __int64 a2)
{
  if ( (void *)(a2 + 16) != a1 )
    ExFreePoolWithTag(a1, 0x6873484Bu);
}
