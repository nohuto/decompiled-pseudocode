/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0146870
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C0146840 (DxgkAugmentCdsj.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C00DFC28 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00E02F8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00E0620 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01322E0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01331A4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01456EC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0145A50 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C0146510 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0146738 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01469C0 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x1C02F1414 (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v5; // rbx
  struct DXGADAPTER *v6; // r8
  char *v7; // rdi
  _OWORD *v8; // rax
  char *v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  struct DXGADAPTER *v12; // r8
  __int64 v13; // r9
  char *v14; // rcx
  char **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  struct D3DKMT_GETPATHSMODALITY *v27[12]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v28[64]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD *v29; // [rsp+C0h] [rbp-40h]
  _DWORD v30[9]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+104h] [rbp+4h]
  __int128 v32; // [rsp+10Ch] [rbp+Ch]
  __int128 v33; // [rsp+11Ch] [rbp+1Ch]
  __int64 v34; // [rsp+12Ch] [rbp+2Ch]

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v28, 8u, 0);
  LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v28, a2, 64);
  if ( (int)v5 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v5) = -1071774974;
    }
    else
    {
      v7 = (char *)this + 24;
      if ( *(char **)v7 != v7 && *(_DWORD *)this == 1 )
      {
        LODWORD(v5) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v28, this, (__int64)v6);
        if ( (_DWORD)v5 == -1073741266 )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v6);
          v18[4] = v28;
          v18[3] = this;
          v18[5] = v29;
          WdLogEvent5_WdWarning(v18);
          LODWORD(v5) = CDS_JOURNAL::Purge(this);
        }
      }
      v8 = v29;
      *(_OWORD *)this = *v29;
      *((_DWORD *)this + 4) = *((_DWORD *)v8 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v31 = 0LL;
        *(_OWORD *)v30 = 0LL;
        v34 = 0LL;
        *(_OWORD *)&v30[5] = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v30, a2, v6);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v27, 8u, 0);
        LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v27, a2, 15);
        if ( (int)v5 >= 0 )
        {
          v19 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v30, (struct CCD_TOPOLOGY *)v27);
          v5 = v19;
          if ( v19 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v27),
                v24 = CCD_TOPOLOGY::Persist(v27, 1LL, v22, v23),
                v5 = v24,
                v24 < 0) )
          {
            v25 = WdLogNewEntry5_WdError(v21, v20);
            *(_QWORD *)(v25 + 24) = v5;
            *(_QWORD *)(v25 + 32) = v27;
            *(struct D3DKMT_GETPATHSMODALITY **)(v25 + 40) = v27[8];
            WdLogEvent5_WdError(v25);
          }
          else
          {
            LODWORD(v5) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v30);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v27);
        goto LABEL_14;
      }
      v9 = *(char **)v7;
      if ( *(char **)v7 == v7 )
        goto LABEL_8;
      v12 = (struct DXGADAPTER *)*((unsigned int *)a2 + 4);
      do
      {
        v14 = v9;
        if ( *((_DWORD *)v9 + 8) == (_DWORD)v12
          && *((_DWORD *)v9 + 5) == *((_DWORD *)a2 + 1)
          && *((_DWORD *)v9 + 6) == *((_DWORD *)a2 + 2) )
        {
          break;
        }
        v9 = *(char **)v9;
      }
      while ( v9 != v7 );
      if ( v9 == v7 )
      {
LABEL_8:
        v10 = (char *)operator new[](0x58uLL, 0x63644356u, PagedPool);
        v14 = v10;
        if ( v10 )
        {
          *(_OWORD *)v10 = 0LL;
          *(_OWORD *)(v10 + 20) = 0LL;
          *(_QWORD *)(v10 + 36) = 0LL;
          *(_OWORD *)(v10 + 44) = 0LL;
          *(_OWORD *)(v10 + 60) = 0LL;
          *(_QWORD *)(v10 + 76) = 0LL;
        }
        else
        {
          v14 = 0LL;
        }
        if ( !v14 )
        {
          v26 = WdLogNewEntry5_WdLowResource(0LL, v11, v12, v13);
          *(_QWORD *)(v26 + 24) = 88LL;
          WdLogEvent5_WdLowResource(v26);
          LODWORD(v5) = -1073741801;
          goto LABEL_14;
        }
        v15 = (char **)*((_QWORD *)this + 4);
        if ( *v15 != v7 )
          __fastfail(3u);
        *(_QWORD *)v14 = v7;
        *((_QWORD *)v14 + 1) = v15;
        *v15 = v14;
        *((_QWORD *)this + 4) = v14;
      }
      CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v14, a2, v12);
    }
  }
LABEL_14:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v28);
  return (unsigned int)v5;
}
