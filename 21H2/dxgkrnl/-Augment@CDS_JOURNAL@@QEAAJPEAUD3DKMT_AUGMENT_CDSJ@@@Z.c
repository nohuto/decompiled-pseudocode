/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01D3EC0
 * Callers:
 *     DxgkAugmentCdsj @ 0x1C01D3E90 (DxgkAugmentCdsj.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C2A0C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C01C2D34 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01D400C (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C01D4080 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C01D43BC (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01D5D78 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01D6840 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C01E8B00 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x1C03ACD90 (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v5; // rbx
  struct DXGADAPTER *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rsi
  _OWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  struct DXGADAPTER *v12; // r8
  __int64 v13; // rcx
  __int64 *v14; // rax
  bool v15; // r8
  int v16; // eax
  int v17; // eax
  struct D3DKMT_GETPATHSMODALITY *v18[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v19[64]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD *v20; // [rsp+D0h] [rbp-30h]
  _DWORD v21[9]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v22; // [rsp+124h] [rbp+24h]
  __int128 v23; // [rsp+12Ch] [rbp+2Ch]
  __int128 v24; // [rsp+13Ch] [rbp+3Ch]
  __int64 v25; // [rsp+14Ch] [rbp+4Ch]

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v19, 8u, 0);
  LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v19, a2, 0x40u);
  if ( (int)v5 >= 0 )
  {
    if ( *((_DWORD *)a2 + 4) == -1 )
    {
      LODWORD(v5) = -1071774974;
    }
    else
    {
      v8 = (_QWORD *)((char *)this + 24);
      if ( (_QWORD *)*v8 != v8 && *(_DWORD *)this == 1 )
      {
        LODWORD(v5) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)v19, this);
        if ( (_DWORD)v5 == -1073741266 )
        {
          WdLogSingleEntry3(3LL, this, v19, v20);
          LODWORD(v5) = CDS_JOURNAL::Purge(this);
        }
      }
      v9 = v20;
      *(_OWORD *)this = *v20;
      *((_DWORD *)this + 4) = *((_DWORD *)v9 + 4);
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        v22 = 0LL;
        *(_OWORD *)v21 = 0LL;
        v25 = 0LL;
        *(_OWORD *)&v21[5] = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v21, a2, v6);
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v18, 8u, 0);
        LODWORD(v5) = CDS_JOURNAL::_FillTopology((struct CCD_TOPOLOGY *)v18, a2, 0xFu);
        if ( (int)v5 >= 0 )
        {
          v16 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v21, (struct CCD_TOPOLOGY *)v18, v15);
          v5 = v16;
          if ( v16 < 0
            || (CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)v18),
                v17 = CCD_TOPOLOGY::Persist(v18, 1LL),
                v5 = v17,
                v17 < 0) )
          {
            WdLogSingleEntry3(2LL, v5, v18, v18[8]);
          }
          else
          {
            LODWORD(v5) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v21);
          }
        }
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v18);
        goto LABEL_12;
      }
      v10 = (_QWORD *)*v8;
      if ( (_QWORD *)*v8 == v8 )
        goto LABEL_8;
      v12 = (struct DXGADAPTER *)*((unsigned int *)a2 + 4);
      do
      {
        v13 = (__int64)v10;
        if ( *((_DWORD *)v10 + 8) == (_DWORD)v12
          && *((_DWORD *)v10 + 5) == *((_DWORD *)a2 + 1)
          && *((_DWORD *)v10 + 6) == *((_DWORD *)a2 + 2) )
        {
          break;
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v8 );
      if ( v10 == v8 )
      {
LABEL_8:
        v11 = operator new[](0x58uLL, 0x63644356u, 256LL, v7);
        v13 = v11;
        if ( !v11 )
        {
          WdLogSingleEntry1(6LL, 88LL);
          LODWORD(v5) = -1073741801;
          goto LABEL_12;
        }
        *(_OWORD *)v11 = 0LL;
        *(_OWORD *)(v11 + 20) = 0LL;
        *(_QWORD *)(v11 + 36) = 0LL;
        *(_OWORD *)(v11 + 44) = 0LL;
        *(_OWORD *)(v11 + 60) = 0LL;
        *(_QWORD *)(v11 + 76) = 0LL;
        v14 = (__int64 *)*((_QWORD *)this + 4);
        if ( (_QWORD *)*v14 != v8 )
          __fastfail(3u);
        *(_QWORD *)v13 = v8;
        *(_QWORD *)(v13 + 8) = v14;
        *v14 = v13;
        *((_QWORD *)this + 4) = v13;
      }
      CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v13, a2, v12);
    }
  }
LABEL_12:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v19);
  return (unsigned int)v5;
}
