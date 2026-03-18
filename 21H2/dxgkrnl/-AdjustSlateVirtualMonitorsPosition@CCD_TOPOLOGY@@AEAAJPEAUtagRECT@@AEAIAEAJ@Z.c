/*
 * XREFs of ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C01AEEC0
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C01AB444 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0019D70 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0165168 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01D4710 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(
        CCD_TOPOLOGY *this,
        struct tagRECT *a2,
        unsigned int *a3,
        int *a4)
{
  signed int cy; // r14d
  LONG v5; // r15d
  unsigned int v6; // edi
  LONG v7; // ebp
  LONG cx; // ebx
  unsigned int v9; // esi
  unsigned int *v10; // r10
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  char *v15; // rsi
  unsigned int v16; // edx
  int v17; // edi
  LONG v18; // r13d
  signed int v19; // r12d
  __int64 v20; // rax
  unsigned __int16 v21; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbp
  unsigned int v23; // edx
  CCD_TOPOLOGY *v24; // rcx
  __int64 v25; // rax
  struct tagRECT v26; // xmm0
  __int64 v27; // rax
  CCD_TOPOLOGY *v28; // rcx
  struct _LUID *v29; // r11
  LONG bottom; // edx
  LONG right; // r8d
  LONG top; // r8d
  LONG left; // r8d
  LONG v34; // eax
  void *v35; // rdi
  unsigned int *v36; // r10
  unsigned int v37; // ecx
  struct tagRECT *v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v41; // rax
  char *v42; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *i; // rax
  __int64 v44; // rcx
  struct _LUID *v45; // rbp
  unsigned __int16 v46; // dx
  unsigned int v47; // eax
  CCD_TOPOLOGY *v48; // rcx
  bool IsVirtualSlate; // al
  unsigned __int16 v50; // ax
  __int64 v51; // r8
  UINT v52; // eax
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  LONG v57; // r9d
  __int64 v58; // rcx
  unsigned int v59; // [rsp+20h] [rbp-F8h]
  unsigned int v60; // [rsp+24h] [rbp-F4h]
  signed int v61; // [rsp+28h] [rbp-F0h]
  LONG v62; // [rsp+2Ch] [rbp-ECh]
  LONG v63; // [rsp+30h] [rbp-E8h]
  LONG v64; // [rsp+34h] [rbp-E4h]
  LONG v65; // [rsp+38h] [rbp-E0h]
  LONG v66; // [rsp+38h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v67; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v68; // [rsp+48h] [rbp-D0h]
  unsigned int *v69; // [rsp+50h] [rbp-C8h]
  CCD_TOPOLOGY *v70; // [rsp+58h] [rbp-C0h]
  void *v71; // [rsp+60h] [rbp-B8h]
  struct tagRECT *v72; // [rsp+68h] [rbp-B0h]
  int *v73; // [rsp+70h] [rbp-A8h]
  char v74; // [rsp+80h] [rbp-98h] BYREF

  cy = 0x80000000;
  v73 = a4;
  v5 = 0x7FFFFFFF;
  v64 = 0x80000000;
  v6 = 0;
  v62 = 0x7FFFFFFF;
  v7 = 0x7FFFFFFF;
  v63 = 0x7FFFFFFF;
  cx = 0x80000000;
  v61 = 0x80000000;
  v9 = 0;
  v69 = a3;
  v10 = a3;
  v72 = a2;
  v70 = this;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 8);
    v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( v6 >= v14 || v9 >= *v10 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v6) & 0x800LL) != 0
      && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v6)
      && !v29[26].HighPart
      && !CCD_TOPOLOGY::IsVirtualSlate(v28, v29) )
    {
      bottom = a2[v9].bottom;
      if ( bottom > cy )
      {
        right = v64;
        cy = a2[v9].bottom;
        if ( v64 < a2[v9].right )
          right = a2[v9].right;
        v64 = right;
      }
      if ( a2[v9].right > cx )
      {
        top = v62;
        cx = a2[v9].right;
        if ( v62 > a2[v9].top )
          top = a2[v9].top;
        v62 = top;
      }
      if ( a2[v9].top < v7 )
      {
        left = v63;
        v7 = a2[v9].top;
        if ( v63 > a2[v9].left )
          left = a2[v9].left;
        v63 = left;
      }
      if ( a2[v9].left < v5 )
      {
        v5 = a2[v9].left;
        v34 = v61;
        if ( v61 < bottom )
          v34 = a2[v9].bottom;
        v61 = v34;
      }
      ++v9;
    }
    v10 = v69;
    ++v6;
  }
  v65 = v7;
  v71 = 0LL;
  v15 = &v74;
  if ( v13 && *(_WORD *)(v13 + 20) > 4u )
  {
    v41 = 16LL * *(unsigned __int16 *)(v13 + 20);
    if ( !is_mul_ok(*(unsigned __int16 *)(v13 + 20), 0x10uLL) )
      v41 = -1LL;
    v42 = (char *)operator new[](v41, 0x4B677844u, 256LL, (__int64)a4);
    v10 = v69;
    v15 = v42;
    v71 = v42;
  }
  v16 = 0;
  v59 = 0;
  v60 = 0;
  if ( !*v10 )
  {
    for ( i = CCD_TOPOLOGY::GetPathDescriptor(this, 0); ; i = CCD_TOPOLOGY::GetPathDescriptor(this, v16 + 1) )
    {
      v44 = *((_QWORD *)this + 8);
      v45 = (struct _LUID *)i;
      v46 = v44 ? *(_WORD *)(v44 + 20) : 0;
      v47 = v46;
      v16 = v60;
      if ( v60 >= v47 )
        break;
      if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v60) )
      {
        if ( !v45[26].HighPart )
        {
          IsVirtualSlate = CCD_TOPOLOGY::IsVirtualSlate(v48, v45);
          v16 = v60;
          if ( IsVirtualSlate )
          {
            v44 = *((_QWORD *)this + 8);
            break;
          }
        }
      }
      v60 = v16 + 1;
    }
    if ( v44 )
      v50 = *(_WORD *)(v44 + 20);
    else
      v50 = 0;
    if ( v16 < v50 )
    {
      v67 = 0LL;
      v59 = 1;
      *v69 = 1;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation((const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v45, 0, &v67);
      cx = v67.cx;
      cy = v67.cy;
      *((_DWORD *)v15 + 1) = 0;
      v5 = 0;
      *(_DWORD *)v15 = 0;
      v16 = v60;
      v63 = 0;
      *((_DWORD *)v15 + 3) = cy;
      *((_DWORD *)v15 + 2) = cx;
      v65 = 0;
      v62 = 0;
      v64 = cx;
      v61 = cy;
    }
  }
  v68 = 0;
  v17 = v65;
  while ( 1 )
  {
    v18 = v5;
    v66 = cy;
    v19 = v17;
    v20 = *((_QWORD *)v70 + 8);
    v21 = v20 ? *(_WORD *)(v20 + 20) : 0;
    if ( v16 >= v21 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v70, v16);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(v70, v60) && !*((_DWORD *)PathDescriptor + 53) )
    {
      if ( CCD_TOPOLOGY::IsVirtualSlate(v24, (struct _LUID *)PathDescriptor) )
      {
        v67 = 0LL;
        ++*v69;
        CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v67);
        v51 = v67.cy;
        v52 = v67.cx;
        v53 = v67.cx;
        if ( (__int64)(v17 - (unsigned __int64)v67.cy) < -32000 )
        {
          if ( (__int64)(v5 - (unsigned __int64)v67.cx) < -32000 )
          {
            if ( (__int64)(cy + (unsigned __int64)v67.cy) > 32000 )
            {
              if ( v67.cx + (__int64)cx > 32000 )
              {
                WdLogSingleEntry0(1LL);
              }
              else
              {
                v57 = cx;
                v58 = 2LL * v59;
                *(_DWORD *)&v15[8 * v58] = cx;
                cx += v52;
                *(_DWORD *)&v15[8 * v58 + 8] = cx;
                if ( v51 + v62 > cy )
                {
                  if ( cy - v51 < -32000 )
                  {
                    cy = v51 - 32000;
                    *(_DWORD *)&v15[16 * v59 + 4] = -32000;
                    *(_DWORD *)&v15[16 * v59 + 12] = v51 - 32000;
                    v17 = -32000;
                    v64 = cx;
                  }
                  else
                  {
                    *(_DWORD *)&v15[16 * v59 + 12] = cy;
                    *(_DWORD *)&v15[16 * v59 + 4] = cy - v51;
                    if ( cy - (int)v51 < v17 )
                    {
                      v17 = cy - v51;
                      v63 = v57;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)&v15[16 * v59 + 4] = v62;
                  *(_DWORD *)&v15[16 * v59 + 12] = v51 + v62;
                }
              }
            }
            else
            {
              v56 = 2LL * v59;
              *(_DWORD *)&v15[8 * v56 + 4] = cy;
              cy += v51;
              *(_DWORD *)&v15[8 * v56 + 12] = cy;
              if ( v64 - v53 < v5 )
              {
                if ( v5 + v53 > 32000 )
                {
                  *(_DWORD *)&v15[16 * v59 + 8] = 32000;
                  v5 = 32000 - v52;
                  v61 = cy;
                  *(_DWORD *)&v15[16 * v59] = 32000 - v52;
                  cx = 32000;
                }
                else
                {
                  *(_DWORD *)&v15[16 * v59] = v5;
                  *(_DWORD *)&v15[16 * v59 + 8] = v52 + v5;
                  if ( (int)(v52 + v5) > cx )
                  {
                    cx = v52 + v5;
                    v62 = v66;
                  }
                }
              }
              else
              {
                *(_DWORD *)&v15[16 * v59 + 8] = v64;
                *(_DWORD *)&v15[16 * v59] = v64 - v52;
              }
            }
          }
          else
          {
            v55 = 2LL * v59;
            *(_DWORD *)&v15[8 * v55 + 8] = v5;
            v5 -= v52;
            *(_DWORD *)&v15[8 * v55] = v5;
            if ( v61 - v51 < v17 )
            {
              if ( v17 + v51 > 32000 )
              {
                *(_DWORD *)&v15[16 * v59 + 12] = 32000;
                v17 = 32000 - v51;
                v63 = v5;
                *(_DWORD *)&v15[16 * v59 + 4] = 32000 - v51;
                cy = 32000;
              }
              else
              {
                *(_DWORD *)&v15[16 * v59 + 4] = v17;
                *(_DWORD *)&v15[16 * v59 + 12] = v51 + v17;
                if ( (int)v51 + v17 > cy )
                {
                  cy = v51 + v17;
                  v64 = v18;
                }
              }
            }
            else
            {
              *(_DWORD *)&v15[16 * v59 + 12] = v61;
              *(_DWORD *)&v15[16 * v59 + 4] = v61 - v51;
            }
          }
        }
        else
        {
          v54 = 2LL * v59;
          *(_DWORD *)&v15[8 * v54 + 12] = v17;
          v17 -= v51;
          *(_DWORD *)&v15[8 * v54 + 4] = v17;
          if ( v53 + v63 > cx )
          {
            if ( cx - v53 < -32000 )
            {
              *(_DWORD *)&v15[16 * v59] = -32000;
              *(_DWORD *)&v15[16 * v59 + 8] = v52 - 32000;
              cx = v52 - 32000;
              v5 = -32000;
              v62 = v17;
            }
            else
            {
              *(_DWORD *)&v15[16 * v59 + 8] = cx;
              *(_DWORD *)&v15[16 * v59] = cx - v52;
              if ( (int)(cx - v52) < v5 )
              {
                v5 = cx - v52;
                v61 = v19;
              }
            }
          }
          else
          {
            *(_DWORD *)&v15[16 * v59] = v63;
            *(_DWORD *)&v15[16 * v59 + 8] = v52 + v63;
          }
        }
        ++v59;
      }
      else
      {
        v25 = v68++;
        v26 = v72[v25];
        v27 = 2LL * v59++;
        *(struct tagRECT *)&v15[8 * v27] = v26;
      }
      v23 = v60;
    }
    v16 = v23 + 1;
    v60 = v16;
  }
  v35 = v71;
  if ( cx > *v73 )
    *v73 = cx;
  v36 = v69;
  v37 = 0;
  if ( *v69 )
  {
    v38 = v72;
    do
    {
      v39 = v37++;
      v38[v39] = *(struct tagRECT *)&v15[16 * v39];
    }
    while ( v37 < *v36 );
  }
  if ( v35 )
    operator delete[](v35);
  return 0LL;
}
