/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02EC3BC
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1C02906A0 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0135F0C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C013BFB0 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C013C270 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C013C42C (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::ApplyCdsjToPathModality(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGADAPTER *v7; // r8
  __int64 v8; // rdi
  _QWORD *v9; // rax
  int v10; // eax
  _DWORD v12[9]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+44h] [rbp-54h]
  __int128 v14; // [rsp+4Ch] [rbp-4Ch]
  __int128 v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+6Ch] [rbp-2Ch]

  *(_OWORD *)v12 = 0LL;
  *(_OWORD *)&v12[5] = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v4 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v8 = v4;
  if ( v4 < 0
    || (CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v12, a2, v7),
        v10 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v12, this),
        v8 = v10,
        v10 < 0) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v9[3] = v8;
    v9[4] = this;
    v9[5] = *((_QWORD *)this + 8);
    v9[6] = a2;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
  }
  return (unsigned int)v8;
}
