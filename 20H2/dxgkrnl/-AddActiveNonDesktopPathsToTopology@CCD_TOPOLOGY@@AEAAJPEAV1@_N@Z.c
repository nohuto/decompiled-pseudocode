/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C015D850
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015D6E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C015D7A8 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C012D5B4 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0130A2C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0131130 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01311A0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0131FF4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C0163974 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02E94E8 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        char a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int16 v17; // di
  __int16 v18; // cx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int16 v24; // bx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int i; // esi
  unsigned __int16 v35; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v38; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v41; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v45; // r8
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _BYTE v51[64]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v52; // [rsp+78h] [rbp+17h]
  int v53; // [rsp+8Ch] [rbp+2Bh]
  unsigned __int16 v54; // [rsp+E0h] [rbp+7Fh] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v51, 8u, 0);
  v53 |= 4u;
  v8 = 1;
  v54 = 1;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v51, (unsigned __int16)v8, v6, v7) >= (unsigned __int16)v8 )
  {
    v13 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v51, 0, a3, 1, &v54);
    v8 = v54;
    LODWORD(v16) = v13;
    if ( v13 != -1073741789 )
      goto LABEL_4;
  }
  v20 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
  *(_QWORD *)(v20 + 24) = (unsigned __int16)v8;
  *(_QWORD *)(v20 + 32) = this;
  WdLogEvent5_WdLowResource(v20);
  LODWORD(v16) = -1073741801;
LABEL_4:
  v17 = 0;
  if ( (int)v16 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v21 + 24) = (int)v16;
LABEL_25:
    WdLogEvent5_WdError(v21);
    goto LABEL_9;
  }
  if ( v52 )
    v18 = *(_WORD *)(v52 + 20);
  else
    v18 = 0;
  if ( !v18 )
  {
    LODWORD(v16) = 255;
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 21) |= 1u;
  v22 = *((_QWORD *)this + 8);
  if ( v22 )
    v23 = *(unsigned __int16 *)(v22 + 20);
  else
    v23 = 0;
  if ( v22 )
    v24 = *(_WORD *)(v22 + 20);
  else
    v24 = 0;
  v26 = (unsigned __int16)CCD_TOPOLOGY::Reserve(a2, (unsigned int)(v8 + v23), v6, v7);
  if ( (unsigned int)v26 < (unsigned __int16)v8 + (unsigned int)v24 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    *(_QWORD *)(v29 + 24) = this;
    v30 = *((_QWORD *)this + 8);
    if ( v30 )
      v17 = *(_WORD *)(v30 + 20);
    *(_QWORD *)(v29 + 32) = (unsigned __int16)v8 + (unsigned int)v17;
    WdLogEvent5_WdLowResource(v29);
    LODWORD(v16) = -1073741801;
    goto LABEL_9;
  }
  v31 = CCD_TOPOLOGY::CopyTopology(a2, this);
  v16 = v31;
  if ( v31 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v21 + 24) = v16;
    goto LABEL_25;
  }
  for ( i = 0; ; ++i )
  {
    v35 = v52 ? *(_WORD *)(v52 + 20) : 0;
    if ( i >= v35 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) & 0x100LL) != 0 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
      v37 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 38) = *((_DWORD *)v37 + 24);
      v38 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 39) = *((_DWORD *)v38 + 25);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 43) = 0;
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 42) = 0;
      v39 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 45) = *((_DWORD *)v39 + 25);
      v40 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) + 44) = *((_DWORD *)v40 + 24);
      v41 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *(_QWORD *)v41 |= 0x820000uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) & 0x87) != 0 )
    {
      v42 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_QWORD *)v42 + 1) |= 0x87uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i) & 2) != 0 )
    {
      v43 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
      *((_QWORD *)v43 + 1) |= 2uLL;
    }
    v44 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v51, i);
    v46 = CCD_TOPOLOGY::AddPathDescriptor(a2, v44, v45);
    v16 = v46;
    if ( v46 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v48, v47);
      v49[3] = v16;
      v49[4] = i;
      v49[5] = this;
      v50 = *((_QWORD *)a2 + 8);
      if ( v50 )
        v17 = *(_WORD *)(v50 + 20);
      v49[6] = v17;
      WdLogEvent5_WdAssertion(v49);
      break;
    }
  }
LABEL_9:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v51);
  return (unsigned int)v16;
}
