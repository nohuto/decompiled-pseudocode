/*
 * XREFs of ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C01EE1C4
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C01D4290 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01EDEC0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0019678 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(CCD_TOPOLOGY *this, struct _LUID *a2, int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v10; // rcx
  int v11; // ebp
  unsigned int j; // ebx
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  unsigned int k; // ebx
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  int v22; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rax

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 20);
    else
      v8 = 0;
    if ( i >= v8 )
      return 3221225473LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, a2, a3) )
      break;
  }
  v11 = *(_DWORD *)(v10 + 184);
  if ( v11 == -1 )
    return 3221225473LL;
  for ( j = 0; ; ++j )
  {
    v13 = *((_QWORD *)this + 8);
    v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( j >= v14 )
      break;
    v23 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v23 + 46) == v11 && (*((_DWORD *)v23 + 4) != a2->LowPart || *((_DWORD *)v23 + 5) != a2->HighPart) )
      return 3221225473LL;
  }
  for ( k = 0; ; ++k )
  {
    v16 = *((_QWORD *)this + 8);
    v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
    if ( k >= v17 )
      break;
    v18 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    v19 = v18;
    if ( *((_DWORD *)v18 + 46) == v11 )
    {
      *((_DWORD *)v18 + 6) = a3;
      *((_BYTE *)v18 + 129) = 0;
      v20 = *(_QWORD *)v18;
      if ( (v20 & 0x20100) == 0x20100 )
      {
        if ( (v20 & 0x200) != 0 && ((*((_DWORD *)v19 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          v21 = *((_DWORD *)v19 + 38);
          v22 = *((_DWORD *)v19 + 39);
        }
        else
        {
          v21 = *((_DWORD *)v19 + 39);
          v22 = *((_DWORD *)v19 + 38);
        }
        *((_DWORD *)v19 + 24) = v22;
        *((_DWORD *)v19 + 25) = v21;
        *((_QWORD *)v19 + 1) |= 0x100uLL;
      }
    }
  }
  return 0LL;
}
