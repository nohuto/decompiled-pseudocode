/*
 * XREFs of ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00E1334
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01375F4 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C0001D40 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C00E1810 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01492C0 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::CommitTo(CDS_JOURNAL *this, struct CCD_TOPOLOGY *a2, __int64 a3, unsigned __int16 *a4)
{
  const struct CDS_JOURNAL::_ENTRY **v4; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  const struct CDS_JOURNAL::_ENTRY *v13; // rdi
  unsigned __int16 v14; // si
  const struct CDS_JOURNAL::_ENTRY *v15; // rcx
  bool v16; // r8
  const struct CDS_JOURNAL::_ENTRY *i; // rdi
  const struct CDS_JOURNAL::_ENTRY *v18; // rcx
  bool v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int16 v28; // di
  const struct CDS_JOURNAL::_ENTRY *v29; // r10
  __int16 v30; // r9
  bool IsUnextend; // al
  int v32; // r9d
  const struct CDS_JOURNAL::_ENTRY **v33; // r10
  unsigned __int16 v34; // di
  _QWORD *v35; // rdx
  __int64 v36; // rax
  unsigned __int16 v37; // ax
  __int64 v38; // rax

  v4 = (const struct CDS_JOURNAL::_ENTRY **)((char *)this + 24);
  if ( *v4 == (const struct CDS_JOURNAL::_ENTRY *)v4 )
    return 0LL;
  LODWORD(v9) = -1073741823;
  if ( *(_DWORD *)this == 1 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this);
    if ( (_DWORD)v9 == -1073741266 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v24[3] = this;
      v24[4] = a2;
      v24[5] = *((_QWORD *)a2 + 8);
      WdLogEvent5_WdWarning(v24);
      return 0LL;
    }
  }
  v13 = *v4;
  v14 = 0;
  if ( *v4 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
  {
    do
    {
      if ( CDS_JOURNAL::_IsUnextend(v13) )
      {
        v25 = CDS_JOURNAL::_CommitEntry(v15, a2, v16);
        v9 = v25;
        if ( v25 < 0 )
        {
LABEL_17:
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
          v26[3] = v9;
          v26[4] = v26;
          v26[5] = a2;
          v26[6] = *((_QWORD *)a2 + 8);
          WdLogEvent5_WdError(v26);
          return (unsigned int)v9;
        }
      }
      v13 = *(const struct CDS_JOURNAL::_ENTRY **)v13;
    }
    while ( v13 != (const struct CDS_JOURNAL::_ENTRY *)v4 );
    for ( i = *v4; i != (const struct CDS_JOURNAL::_ENTRY *)v4; i = *(const struct CDS_JOURNAL::_ENTRY **)i )
    {
      if ( !CDS_JOURNAL::_IsUnextend(i) )
      {
        v20 = CDS_JOURNAL::_CommitEntry(v18, a2, v19);
        v9 = v20;
        if ( v20 == -1073741789 )
        {
          v27 = *((_QWORD *)a2 + 8);
          if ( v27 )
            v28 = *(_WORD *)(v27 + 20);
          else
            v28 = 0;
          v29 = *v4;
          v30 = 0;
          while ( v29 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
          {
            IsUnextend = CDS_JOURNAL::_IsUnextend(v29);
            v29 = *v33;
            v22 = (unsigned int)(v32 + 1);
            if ( IsUnextend )
              LOWORD(v22) = v32;
            v30 = v22;
          }
          v34 = v30 + v28;
          if ( a4 )
            *a4 = v34;
          v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
          v35[3] = a2;
          v35[4] = *((_QWORD *)a2 + 8);
          v36 = *((_QWORD *)a2 + 8);
          if ( v36 )
            v37 = *(_WORD *)(v36 + 20);
          else
            v37 = 0;
          v35[5] = v37;
          v38 = *((_QWORD *)a2 + 8);
          if ( v38 )
            v14 = *(_WORD *)(v38 + 22);
          v35[6] = v14;
          v35[7] = v34;
          WdLogEvent5_WdWarning(v35);
          return 3221225507LL;
        }
        if ( v20 < 0 )
          goto LABEL_17;
      }
    }
  }
  return (unsigned int)v9;
}
