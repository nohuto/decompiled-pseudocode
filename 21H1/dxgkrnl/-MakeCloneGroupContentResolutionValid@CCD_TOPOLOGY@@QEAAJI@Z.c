/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013B4E4
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C013B23C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000F30C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EC34C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C013C0FC (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C013C160 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, __int64 a2)
{
  char v2; // r12
  int *v3; // rbx
  char v4; // r13
  unsigned int v6; // r15d
  __int128 v7; // rax
  unsigned __int64 cx; // rcx
  UINT v9; // edi
  UINT cy; // esi
  unsigned int v11; // r8d
  char v12; // al
  unsigned int v14; // r15d
  UINT v15; // r13d
  __int64 v16; // rbx
  struct _LUID *v17; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v18; // r11
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v20; // rcx
  __int64 v21; // r12
  unsigned int v22; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int v28; // r15d
  __int64 v29; // r12
  __int64 v30; // rax
  _QWORD *v31; // rax
  struct _D3DKMDT_2DREGION v32; // [rsp+98h] [rbp+58h] BYREF

  v2 = 1;
  v3 = 0LL;
  v4 = 1;
  v6 = 0;
  v32.cx = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v9 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_46;
  while ( 1 )
  {
    *(_QWORD *)&v7 = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    cx = v32.cx;
    if ( *(_DWORD *)(v7 + 184) == v32.cx )
      break;
LABEL_11:
    ++v6;
    cx = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    if ( v6 >= (unsigned int)cx )
    {
      v12 = 0;
      goto LABEL_13;
    }
  }
  if ( (*(_QWORD *)v7 & 0x20000LL) == 0 )
  {
    v2 = 0;
    v12 = 1;
LABEL_13:
    if ( !v2 )
    {
      if ( v12 )
        goto LABEL_17;
      return 0LL;
    }
LABEL_46:
    v27 = 0x3FFFFFFF00000001LL;
    v28 = 0;
    if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      goto LABEL_63;
    while ( 1 )
    {
      v29 = v27;
      cx = (unsigned __int64)CCD_TOPOLOGY::GetPathDescriptor(this, v28);
      if ( *(_DWORD *)(cx + 184) == v32.cx )
      {
        if ( v4 )
        {
          v7 = *(int *)(cx + 152) * (__int64)*(int *)(cx + 156) - *(int *)(cx + 164) * (__int64)*(int *)(cx + 160);
          *(_QWORD *)&v7 = (*((_QWORD *)&v7 + 1) ^ v7) - *((_QWORD *)&v7 + 1);
          if ( (__int64)v7 < v27 )
          {
            v9 = *(_DWORD *)(cx + 160);
            cy = *(_DWORD *)(cx + 164);
          }
          v27 = v7;
          if ( (__int64)v7 >= v29 )
            v27 = v29;
        }
        else
        {
          *((_QWORD *)&v7 + 1) = *(unsigned int *)(cx + 160);
          if ( *(_QWORD *)(cx + 152) == *(_QWORD *)(cx + 160) )
          {
            v9 = *(_DWORD *)(cx + 160);
            cy = *(_DWORD *)(cx + 164);
LABEL_54:
            v15 = v32.cx;
            goto LABEL_27;
          }
        }
      }
      ++v28;
      cx = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v28 >= (unsigned int)cx )
        goto LABEL_54;
    }
  }
  *((_QWORD *)&v7 + 1) = v7 + 152;
  v11 = *(_DWORD *)(v7 + 152);
  cx = v7 + 152;
  if ( v3 )
    cx = (unsigned __int64)v3;
  v3 = (int *)cx;
  if ( v11 )
  {
    cx = *(unsigned int *)(v7 + 156);
    if ( (_DWORD)cx )
    {
      if ( *(_QWORD *)v3 == __PAIR64__(cx, v11) )
      {
        *((_QWORD *)&v7 + 1) = 0x20000000000000LL;
        if ( (*(_QWORD *)v7 & 0x20000000000000LL) != 0 )
        {
          if ( __PAIR64__(cx, v11) == *(_QWORD *)(v7 + 160) )
            v4 = 0;
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_11;
      }
    }
  }
  *(_DWORD *)(v7 + 236) |= 0x400u;
LABEL_17:
  v14 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_63;
  v15 = v32.cx;
  while ( 2 )
  {
    *(_QWORD *)&v7 = CCD_TOPOLOGY::GetPathDescriptor(this, v14);
    v16 = v7;
    if ( *(_DWORD *)(v7 + 184) != v15 )
    {
LABEL_26:
      ++v14;
      cx = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v14 >= (unsigned int)cx )
        goto LABEL_27;
      continue;
    }
    break;
  }
  v32 = 0LL;
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation((const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v7, 1, &v32);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        v17[2],
                                        v17[3].HighPart,
                                        v18,
                                        v18,
                                        (__int64)v18);
  v21 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v20, 0LL);
    *(_QWORD *)(v26 + 24) = v21;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v21;
  }
  if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v16 + 88)) )
  {
    if ( v32.cx < v9 )
    {
      v9 = v32.cx;
      *(_DWORD *)(v16 + 236) |= 0x4000u;
    }
    if ( v32.cy < cy )
    {
      cy = v32.cy;
      *(_DWORD *)(v16 + 236) |= 0x4000u;
    }
    goto LABEL_26;
  }
  if ( (*(_DWORD *)v16 & 0x20000) != 0 )
  {
    v9 = *(_DWORD *)(v16 + 152);
    cy = *(_DWORD *)(v16 + 156);
  }
  else
  {
    v9 = v32.cx;
    cy = v32.cy;
  }
LABEL_27:
  if ( !v9 || !cy || v9 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_63;
  v22 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v22);
    v24 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v15
      || (cx = *(_QWORD *)PathDescriptor, (*((_QWORD *)&v7 + 1) = *(_QWORD *)PathDescriptor & 0x20000LL) != 0LL)
      && *((_DWORD *)PathDescriptor + 38) == v9
      && *((_DWORD *)PathDescriptor + 39) == cy )
    {
LABEL_37:
      if ( ++v22 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)PathDescriptor + 2) & 0x20000) == 0 )
  {
    v25 = *((_QWORD *)PathDescriptor + 28);
    *((_DWORD *)v24 + 38) = v9;
    *((_DWORD *)v24 + 39) = cy;
    *(_QWORD *)v24 = cx & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v25 )
    {
      *(_DWORD *)(v25 + 172) = v9;
      *(_DWORD *)(*((_QWORD *)v24 + 28) + 176LL) = cy;
    }
    goto LABEL_37;
  }
  if ( !*((_QWORD *)&v7 + 1) )
  {
    v30 = WdLogNewEntry5_WdAssertion(cx, 0LL);
    WdLogEvent5_WdAssertion(v30);
  }
  *((_DWORD *)v24 + 59) |= 0x80000000;
LABEL_63:
  v31 = (_QWORD *)WdLogNewEntry5_WdError(cx, *((_QWORD *)&v7 + 1));
  v31[3] = *((_QWORD *)this + 8);
  v31[4] = v9;
  v31[5] = cy;
  WdLogEvent5_WdError(v31);
  return 3221225473LL;
}
