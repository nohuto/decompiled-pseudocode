/*
 * XREFs of ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C0149CEC
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0149E80 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C0146954 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C0149D80 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall CDS_JOURNAL::FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        struct DXGADAPTER *a3)
{
  char v4; // r11
  __int64 v5; // r8
  struct DXGADAPTER *v6; // r10
  _DWORD v7[9]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+54h] [rbp-54h]
  __int128 v9; // [rsp+5Ch] [rbp-4Ch]
  __int128 v10; // [rsp+6Ch] [rbp-3Ch]
  __int64 v11; // [rsp+7Ch] [rbp-2Ch]

  v8 = 0LL;
  v11 = 0LL;
  *(_OWORD *)v7 = 0LL;
  *(_OWORD *)&v7[5] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v7, a2, a3);
  LOBYTE(v5) = v4;
  CDS_JOURNAL::_FillPathDescriptor(a1, (const struct CDS_JOURNAL::_ENTRY *)v7, v5, 0, v6);
}
