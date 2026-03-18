/*
 * XREFs of ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C0165EE4
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0133F54 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C012E764 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C01319EC (-_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01322E0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0132350 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01331A4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlags(CCD_TOPOLOGY *this)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _BYTE v16[104]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 i; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v16, 8u, 0);
  for ( i = 8; ; v2 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v16, v2, v3, v4) < v2 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
      v15[3] = v2;
      v15[4] = this;
      v15[5] = *((_QWORD *)this + 8);
      WdLogEvent5_WdLowResource(v15);
      LODWORD(v12) = -1073741801;
      goto LABEL_6;
    }
    v9 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v16, 0, 1, 1, &i);
    v12 = v9;
    if ( v9 != -1073741789 )
      break;
  }
  if ( v9 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v14[3] = v12;
    v14[4] = this;
    v14[5] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v14);
  }
  else
  {
    CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(this, (const struct CCD_TOPOLOGY *)v16);
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v16);
  return (unsigned int)v12;
}
