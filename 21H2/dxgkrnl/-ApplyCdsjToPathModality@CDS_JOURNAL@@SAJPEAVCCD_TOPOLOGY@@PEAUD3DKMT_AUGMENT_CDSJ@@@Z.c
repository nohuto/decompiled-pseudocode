/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01EE858
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1C01EE7C0 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C01D43BC (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01D5D78 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01D6840 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::ApplyCdsjToPathModality(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  struct DXGADAPTER *v5; // r8
  __int64 v6; // rdi
  int v7; // eax
  _DWORD v9[9]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+54h] [rbp-54h]
  __int128 v11; // [rsp+5Ch] [rbp-4Ch]
  __int128 v12; // [rsp+6Ch] [rbp-3Ch]
  __int64 v13; // [rsp+7Ch] [rbp-2Ch]

  *(_OWORD *)v9 = 0LL;
  *(_OWORD *)&v9[5] = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v6 = v4;
  if ( v4 < 0
    || (CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v9, a2, v5),
        v7 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v9, this),
        v6 = v7,
        v7 < 0) )
  {
    WdLogSingleEntry4(2LL, v6, this, *((_QWORD *)this + 8), a2);
  }
  else
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
  }
  return (unsigned int)v6;
}
