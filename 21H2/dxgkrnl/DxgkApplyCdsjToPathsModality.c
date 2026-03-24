/*
 * XREFs of DxgkApplyCdsjToPathsModality @ 0x1C0295060
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01352C8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0136844 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02F0C8C (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall DxgkApplyCdsjToPathsModality(__int64 *a1, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+28h] [rbp-58h]
  __int64 v8; // [rsp+38h] [rbp-48h]
  __int16 v9; // [rsp+40h] [rbp-40h]
  __int128 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  bool v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]
  int v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+74h] [rbp-Ch]

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *a1;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v13 = v3 == 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v3;
  v14 = 0;
  v15 = 1;
  v16 = 0LL;
  CCD_BTL::Global((__int64)a1, 0LL);
  v4 = CDS_JOURNAL::ApplyCdsjToPathModality((struct CCD_TOPOLOGY *)&v6, a2);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v6);
  return v4;
}
