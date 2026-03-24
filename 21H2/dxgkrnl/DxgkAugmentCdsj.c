/*
 * XREFs of DxgkAugmentCdsj @ 0x1C014A0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01352C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C014A0E0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkAugmentCdsj(struct D3DKMT_AUGMENT_CDSJ *a1, __int64 a2)
{
  struct CCD_BTL *v3; // rax
  __int64 v5; // rax

  if ( a1 )
  {
    v3 = CCD_BTL::Global((__int64)a1, a2);
    return CDS_JOURNAL::Augment((struct CCD_BTL *)((char *)v3 + 104), a1);
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v5 + 24) = 0LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
