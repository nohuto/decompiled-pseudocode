/*
 * XREFs of ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C01AB120
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01B6AE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?IsPathVirtualFlagCloneCompatible@@YAEEE@Z @ 0x1C002C8E0 (-IsPathVirtualFlagCloneCompatible@@YAEEE@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  __int64 v3; // rax
  unsigned __int16 v4; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // r14
  __int64 v7; // rbp
  unsigned int j; // edi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  unsigned __int8 v12; // dl
  __int64 v13; // r8
  char v14; // r9
  unsigned int m; // ebx
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  unsigned int k; // ebx
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  unsigned __int64 v26; // rdx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rax

  for ( i = 0; ; ++i )
  {
    v3 = *((_QWORD *)this + 8);
    v4 = v3 ? *(_WORD *)(v3 + 20) : 0;
    if ( i >= v4 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v6 = PathDescriptor;
    if ( (*(_QWORD *)PathDescriptor & 0x8000000000000LL) != 0 )
    {
      v7 = *((unsigned int *)PathDescriptor + 46);
      for ( j = i + 1; ; ++j )
      {
        v9 = *((_QWORD *)this + 8);
        v10 = v9 ? *(_WORD *)(v9 + 20) : 0;
        if ( j >= v10 )
          break;
        v11 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        if ( *((_DWORD *)v11 + 46) == (_DWORD)v7 )
        {
          v12 = *((_BYTE *)v11 + 129);
          *(_QWORD *)v11 &= ~0x8000000000000uLL;
          if ( !IsPathVirtualFlagCloneCompatible(*((_BYTE *)v6 + 129), v12) )
          {
            WdLogSingleEntry3(3LL, i, j, v7);
            goto LABEL_20;
          }
          if ( !v14 && (*((_DWORD *)v6 + 4) != *(_DWORD *)(v13 + 16) || *((_DWORD *)v6 + 5) != *(_DWORD *)(v13 + 20)) )
          {
            WdLogSingleEntry4(3LL, i, *((_QWORD *)v6 + 2), j, *(_QWORD *)(v13 + 16));
            goto LABEL_20;
          }
        }
      }
    }
  }
  for ( k = 0; ; ++k )
  {
    v19 = *((_QWORD *)this + 8);
    v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
    if ( k >= v20 )
      break;
    v21 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    v22 = v21;
    if ( !*((_BYTE *)v21 + 129) )
    {
      v23 = *(_QWORD *)v21;
      if ( (*(_QWORD *)v21 & 0x20100LL) == 0x20100 )
      {
        if ( (v23 & 0x200) == 0 || ((*((_DWORD *)v21 + 33) - 2) & 0xFFFFFFFD) != 0 )
        {
          v24 = *((_DWORD *)v21 + 38);
          if ( *((_DWORD *)v21 + 24) != v24 || *((_DWORD *)v21 + 25) != *((_DWORD *)v21 + 39) )
          {
            v25 = *((_DWORD *)v21 + 39);
            v26 = v23 & 0xFFFFFFFFFF7DFF78uLL;
            goto LABEL_39;
          }
        }
        else
        {
          v24 = *((_DWORD *)v21 + 39);
          if ( *((_DWORD *)v21 + 24) != v24 || *((_DWORD *)v21 + 25) != *((_DWORD *)v21 + 38) )
          {
            v25 = *((_DWORD *)v21 + 38);
            v26 = v23 & 0xFFFFFFFFFF7FFFFFuLL;
LABEL_39:
            *((_QWORD *)v22 + 1) &= 0xFFFFFFFFFF7DFF78uLL;
            *(_QWORD *)v22 = v26;
            *((_DWORD *)v22 + 25) = v25;
            *((_DWORD *)v22 + 24) = v24;
            WdLogSingleEntry2(3LL, *((unsigned int *)v22 + 7), *((_QWORD *)v22 + 2));
            continue;
          }
        }
      }
    }
  }
LABEL_20:
  for ( m = 0; ; ++m )
  {
    v16 = *((_QWORD *)this + 8);
    v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
    if ( m >= v17 )
      break;
    v27 = CCD_TOPOLOGY::GetPathDescriptor(this, m);
    *(_QWORD *)v27 |= 0x8000000000000uLL;
  }
  return 0LL;
}
