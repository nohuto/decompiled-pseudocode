/*
 * XREFs of ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D5B10
 * Callers:
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C01D44BC (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01D6840 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C03AC838 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0019B4C (-_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C01D3BFC (ConvertGdiScalingToDMMScaling.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01D5E50 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C01D5F70 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C01D6044 (_EnforceDriverModelScalingPolicy.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C039B040 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 */

void __fastcall CDS_JOURNAL::_FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct CDS_JOURNAL::_ENTRY *a2,
        char a3,
        char a4,
        struct DXGADAPTER *a5)
{
  unsigned int *v5; // r14
  unsigned __int64 v6; // r10
  __int64 v9; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // r11
  int v19; // r9d
  __int64 v20; // r11
  int v21; // r9d
  __int64 v22; // r10
  struct DXGADAPTER *v23; // rdi
  _DWORD *v24; // rsi
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rcx
  int v29; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // ecx

  v5 = (unsigned int *)((char *)a2 + 44);
  v6 = *(_QWORD *)a1 & 0xFFFFFFFFFF7DFE78uLL;
  *(_QWORD *)a1 = v6;
  v9 = *((unsigned int *)a2 + 11);
  v12 = v9;
  if ( (v9 & 0x80u) != 0LL )
  {
    v13 = v5[3];
    if ( v13 )
    {
      v31 = v13 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            *((_DWORD *)a1 + 33) = 4;
          }
          else
          {
            WdLogSingleEntry3(3LL, v5, v9, v5[3]);
            *((_DWORD *)a1 + 33) = 1;
            v6 = *(_QWORD *)a1;
          }
        }
        else
        {
          *((_DWORD *)a1 + 33) = 3;
        }
      }
      else
      {
        *((_DWORD *)a1 + 33) = 2;
      }
    }
    else
    {
      *((_DWORD *)a1 + 33) = 1;
    }
    v6 |= 0x200uLL;
    *((_QWORD *)a1 + 1) |= 0x200uLL;
    *(_QWORD *)a1 = v6;
    LODWORD(v9) = *v5;
    v12 = *v5;
  }
  v14 = 0x20000LL;
  if ( (v9 & 0x80000) != 0 )
  {
    v15 = *((_DWORD *)a2 + 17);
    v6 |= 0x20000uLL;
    *(_QWORD *)a1 = v6;
    *((_DWORD *)a1 + 38) = v15;
    LODWORD(v9) = *v5;
    v12 = *v5;
  }
  if ( (v9 & 0x100000) != 0 )
  {
    v16 = *((_DWORD *)a2 + 18);
    v6 |= 0x20000uLL;
    *(_QWORD *)a1 = v6;
    *((_DWORD *)a1 + 39) = v16;
    v12 = *v5;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 )
  {
    v17 = v12;
    v18 = v6;
    if ( (v12 & 0x80000) != 0 )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 25) = v19;
      else
        *((_DWORD *)a1 + 24) = v19;
      v18 = v20 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v18;
      v12 = *v5;
      v17 = *v5;
    }
    v6 = v18;
    if ( (v17 & 0x100000) != 0 )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 24) = v21;
      else
        *((_DWORD *)a1 + 25) = v21;
      v6 = v22 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v6;
      v12 = *v5;
    }
  }
  if ( (v12 & 0x20) != 0 )
  {
    v6 |= 0x800uLL;
    *((_QWORD *)a1 + 18) = *((_QWORD *)a2 + 6);
    *(_QWORD *)a1 = v6;
    v12 = *v5;
  }
  if ( (v12 & 0x20000000) != 0 )
  {
    v33 = *((_DWORD *)a2 + 15);
    if ( v33 )
    {
      ConvertGdiScalingToDMMScaling(v33, (_DWORD *)a1 + 35);
LABEL_22:
      v23 = a5;
      v24 = (_DWORD *)((char *)a1 + 140);
      if ( !a5 )
      {
LABEL_23:
        EnforceDriverModelScalingPolicy((char *)a2 + 20, v24, v14);
        goto LABEL_24;
      }
      goto LABEL_52;
    }
  }
  if ( (v6 & 0x10000) != 0 )
    goto LABEL_22;
  v23 = a5;
  v30 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
  if ( !a5 )
  {
    DxgkGetAdapterDefaultScaling((char *)a2 + 20, v30);
    v24 = (_DWORD *)((char *)a1 + 140);
    goto LABEL_23;
  }
  DmmGetDefaultScaling(a5, v30);
  v24 = (_DWORD *)((char *)a1 + 140);
LABEL_52:
  EnforceDriverModelScalingPolicy(v23, v24, v14);
LABEL_24:
  *((_DWORD *)a1 + 34) = *v24;
  *(_QWORD *)a1 |= 0x40000010000uLL;
  if ( (*v5 & 0x40000) != 0 )
  {
    v25 = v5[5];
    switch ( v25 )
    {
      case 0x20u:
        *((_DWORD *)a1 + 29) = 0;
        break;
      case 8u:
        *((_DWORD *)a1 + 29) = 41;
        break;
      case 0x10u:
        *((_DWORD *)a1 + 29) = 23;
        break;
      case 0x18u:
        *((_DWORD *)a1 + 29) = 20;
        break;
      default:
        WdLogSingleEntry3(3LL, v5, *v5, v5[5]);
        *((_DWORD *)a1 + 29) = 21;
        break;
    }
  }
  v26 = *v5;
  if ( (*v5 & 0x200000) != 0 )
  {
    v27 = *((_DWORD *)a1 + 20) & 0xFFFFFFF8 | (((*((_DWORD *)a2 + 20) & 2) != 0) + 1);
    *(_QWORD *)a1 |= 4uLL;
    *((_DWORD *)a1 + 20) = v27;
    v26 = *v5;
  }
  if ( (v26 & 0x400000) != 0 )
  {
    v28 = *(_QWORD *)a1;
    if ( (*(_QWORD *)a1 & 4) != 0 && (unsigned int)(((int)(*((_DWORD *)a1 + 20) << 29) >> 29) - 2) <= 1 )
      v29 = 2 * *((_DWORD *)a2 + 19);
    else
      v29 = *((_DWORD *)a2 + 19);
    *((_DWORD *)a1 + 56) = v29;
    *(_QWORD *)a1 = v28 | 0x1000000;
    *((_DWORD *)a1 + 57) = 1;
    *((_DWORD *)a1 + 60) = 1;
  }
  if ( !a4 && !a3 )
  {
    *((_DWORD *)a1 + 33) = 0;
    *(_QWORD *)a1 &= ~0x200uLL;
  }
}
