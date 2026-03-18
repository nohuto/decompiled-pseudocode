/*
 * XREFs of ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C0146738
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0146870 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C012E764 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0131314 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0132350 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0133F54 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0146610 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 */

__int64 __fastcall CDS_JOURNAL::_FillTopology(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned __int16 v23; // [rsp+68h] [rbp+20h] BYREF

  CCD_TOPOLOGY::Clear(this);
  v8 = 0;
  while ( 1 )
  {
    v23 = v8 + 1;
    v9 = CCD_TOPOLOGY::Reserve(this, (unsigned __int16)(v8 + 1), v6, v7);
    if ( v9 < v23 )
      break;
    if ( a3 == 15 )
    {
      v14 = CCD_TOPOLOGY::RetrievePersisted(this, 0xFu, &v23);
    }
    else
    {
      if ( a3 != 64 )
      {
        LODWORD(v15) = -1073741811;
        goto LABEL_25;
      }
      v14 = CCD_TOPOLOGY::RetrieveActive(this, 0, 0, 0, &v23);
    }
    LODWORD(v15) = v14;
    if ( v14 >= 0
      && a2
      && ((v16 = *((_QWORD *)this + 8)) == 0 ? (v10 = 0LL) : (v10 = *(unsigned __int16 *)(v16 + 20)),
          !v16 ? (v11 = 0LL) : (v11 = *(unsigned __int16 *)(v16 + 22)),
          (unsigned __int16)v10 >= (unsigned __int16)v11) )
    {
      LODWORD(v15) = -1073741789;
      v8 = ++v23;
    }
    else
    {
      v8 = v23;
    }
    if ( (_DWORD)v15 != -1073741789 )
    {
      if ( (int)v15 >= 0 )
      {
        if ( !a2 )
          return (unsigned int)v15;
        if ( a3 != 64 )
          return (unsigned int)v15;
        v17 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 1);
        v15 = v17;
        if ( v17 >= 0 )
          return (unsigned int)v15;
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
        v21[3] = v15;
LABEL_27:
        v21[4] = this;
        v21[5] = *((_QWORD *)this + 8);
        v21[6] = a2;
        WdLogEvent5_WdError(v21);
        return (unsigned int)v15;
      }
LABEL_25:
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
      v21[3] = (int)v15;
      goto LABEL_27;
    }
  }
  v22 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
  *(_QWORD *)(v22 + 24) = v23;
  WdLogEvent5_WdLowResource(v22);
  return 3221225495LL;
}
