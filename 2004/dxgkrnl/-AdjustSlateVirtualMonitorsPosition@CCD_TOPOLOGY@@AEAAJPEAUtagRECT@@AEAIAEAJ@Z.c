/*
 * XREFs of ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C0133998
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C013136C (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000C658 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0131BDC (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C0145B9C (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0162E58 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(
        CCD_TOPOLOGY *this,
        struct tagRECT *a2,
        unsigned int *a3,
        int *a4)
{
  signed int cy; // ebp
  int v5; // r14d
  unsigned int v6; // edi
  unsigned int *v7; // r10
  int v8; // r15d
  signed int cx; // ebx
  signed int right; // r12d
  signed int v11; // r13d
  unsigned int v12; // esi
  CCD_TOPOLOGY *v13; // r8
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  char *v16; // rsi
  unsigned __int16 v17; // ax
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  int v20; // edx
  int v21; // ecx
  signed int v22; // eax
  signed int v23; // edi
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  CCD_TOPOLOGY *v26; // rcx
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rax
  CCD_TOPOLOGY *v30; // rcx
  __int64 v31; // r11
  LONG bottom; // edx
  int top; // r8d
  int left; // r8d
  void *v35; // rdi
  unsigned int *v36; // r10
  unsigned int v37; // ecx
  struct tagRECT *v38; // rdx
  __int64 v39; // rax
  unsigned __int16 v41; // ax
  SIZE_T v42; // rax
  unsigned __int64 v43; // kr00_8
  char *v44; // rax
  __int64 v45; // rdx
  CCD_TOPOLOGY *v46; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // r12
  __int64 v48; // rcx
  unsigned __int16 v49; // ax
  CCD_TOPOLOGY *v50; // rcx
  unsigned __int16 v51; // ax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v52; // rcx
  __int64 v53; // r8
  UINT v54; // eax
  __int64 v55; // rdx
  signed int v56; // r10d
  __int64 v57; // rcx
  bool v58; // cc
  __int64 v59; // rdx
  int v60; // r10d
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // r10d
  __int64 v64; // rax
  int v65; // [rsp+20h] [rbp-118h]
  int v66; // [rsp+24h] [rbp-114h]
  signed int v67; // [rsp+28h] [rbp-110h]
  unsigned int v68; // [rsp+2Ch] [rbp-10Ch]
  signed int v69; // [rsp+30h] [rbp-108h]
  signed int v70; // [rsp+30h] [rbp-108h]
  struct _D3DKMDT_2DREGION v72; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int *v73; // [rsp+48h] [rbp-F0h]
  int v74; // [rsp+50h] [rbp-E8h]
  signed int v75; // [rsp+54h] [rbp-E4h]
  int v76; // [rsp+58h] [rbp-E0h]
  int v77; // [rsp+5Ch] [rbp-DCh]
  signed int v78; // [rsp+60h] [rbp-D8h]
  int v79; // [rsp+64h] [rbp-D4h]
  signed int v80; // [rsp+68h] [rbp-D0h]
  int v81; // [rsp+6Ch] [rbp-CCh]
  int v82; // [rsp+70h] [rbp-C8h]
  signed int v83; // [rsp+74h] [rbp-C4h]
  int v84; // [rsp+78h] [rbp-C0h]
  struct tagRECT *v85; // [rsp+80h] [rbp-B8h]
  void *v86; // [rsp+88h] [rbp-B0h]
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v87; // [rsp+90h] [rbp-A8h]
  int *v88; // [rsp+98h] [rbp-A0h]
  char v89; // [rsp+A0h] [rbp-98h] BYREF

  cy = 0x80000000;
  v73 = a3;
  v5 = 0x7FFFFFFF;
  v88 = a4;
  v6 = 0;
  v65 = 0x7FFFFFFF;
  v7 = a3;
  v66 = 0x7FFFFFFF;
  v8 = 0x7FFFFFFF;
  v85 = a2;
  cx = 0x80000000;
  right = 0x80000000;
  v11 = 0x80000000;
  v12 = 0;
  v13 = this;
  while ( 1 )
  {
    v14 = *((_QWORD *)v13 + 8);
    v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
    if ( v6 >= v15 || v12 >= *v7 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(v13, v6) & 0x800LL) != 0
      && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v6)
      && !*(_DWORD *)(v31 + 212)
      && !CCD_TOPOLOGY::IsVirtualSlate(v30, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v31) )
    {
      bottom = v85[v12].bottom;
      if ( bottom > cy )
      {
        cy = v85[v12].bottom;
        if ( right < v85[v12].right )
          right = v85[v12].right;
      }
      if ( v85[v12].right > cx )
      {
        top = v65;
        cx = v85[v12].right;
        if ( v65 > v85[v12].top )
          top = v85[v12].top;
        v65 = top;
      }
      if ( v85[v12].top < v8 )
      {
        left = v66;
        v8 = v85[v12].top;
        if ( v66 > v85[v12].left )
          left = v85[v12].left;
        v66 = left;
      }
      if ( v85[v12].left < v5 )
      {
        v5 = v85[v12].left;
        if ( v11 < bottom )
          v11 = v85[v12].bottom;
      }
      ++v12;
    }
    v13 = this;
    ++v6;
    v7 = v73;
  }
  v67 = v11;
  v69 = right;
  v16 = &v89;
  v86 = 0LL;
  if ( v14 )
    v17 = *(_WORD *)(v14 + 20);
  else
    v17 = 0;
  if ( v17 > 4u )
  {
    if ( v14 )
      v41 = *(_WORD *)(v14 + 20);
    else
      v41 = 0;
    v43 = v41;
    v42 = 16LL * v41;
    if ( !is_mul_ok(v43, 0x10uLL) )
      v42 = -1LL;
    v44 = (char *)operator new[](v42, 0x4B677844u, PagedPool);
    v13 = this;
    v16 = v44;
    v7 = v73;
    v86 = v44;
  }
  v18 = 0;
  v19 = 0;
  if ( !*v7 )
  {
    v45 = 0LL;
    v46 = v13;
    while ( 1 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v46, v45);
      v48 = *((_QWORD *)this + 8);
      v49 = v48 ? *(_WORD *)(v48 + 20) : 0;
      if ( v18 >= v49 )
        break;
      if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v18)
        && !*((_DWORD *)PathDescriptor + 53)
        && CCD_TOPOLOGY::IsVirtualSlate(v50, PathDescriptor) )
      {
        v48 = *((_QWORD *)this + 8);
        break;
      }
      v46 = this;
      v45 = ++v18;
    }
    if ( v48 )
      v51 = *(_WORD *)(v48 + 20);
    else
      v51 = 0;
    if ( v18 < v51 )
    {
      v72 = 0LL;
      *v73 = 1;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v72);
      cy = v72.cy;
      v21 = 0;
      cx = v72.cx;
      v8 = 0;
      *((_DWORD *)v16 + 1) = 0;
      v5 = 0;
      *(_DWORD *)v16 = 0;
      v22 = cy;
      v19 = 1;
      v20 = 0;
      v66 = 0;
      *((_DWORD *)v16 + 3) = cy;
      *((_DWORD *)v16 + 2) = cx;
      v65 = 0;
      v69 = cx;
      v67 = cy;
      goto LABEL_10;
    }
    v19 = 0;
  }
  v20 = v66;
  v21 = v65;
  v22 = v67;
LABEL_10:
  v68 = 0;
  v23 = v69;
  while ( 1 )
  {
    v75 = v22;
    v83 = cx;
    v84 = v20;
    v24 = *((_QWORD *)this + 8);
    v82 = v8;
    v80 = cy;
    v81 = v21;
    v79 = cx;
    v77 = v5;
    v78 = v23;
    v76 = cy;
    v74 = v8;
    v70 = v5;
    v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
    if ( v18 >= v25 )
      break;
    v87 = CCD_TOPOLOGY::GetPathDescriptor(this, v18);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v18) && !*(_DWORD *)(v27 + 212) )
    {
      if ( CCD_TOPOLOGY::IsVirtualSlate(v26, (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v27) )
      {
        v52 = v87;
        v72 = 0LL;
        ++*v73;
        CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v52, 0, &v72);
        v53 = v72.cy;
        v54 = v72.cx;
        if ( (__int64)(v8 - (unsigned __int64)v72.cy) < -32000 )
        {
          if ( (__int64)(v5 - (unsigned __int64)v72.cx) < -32000 )
          {
            if ( (__int64)(cy + (unsigned __int64)v72.cy) > 32000 )
            {
              v61 = v72.cx + (__int64)cx;
              if ( v61 > 32000 )
              {
                v64 = WdLogNewEntry5_WdAssertion(v61, cy);
                WdLogEvent5_WdAssertion(v64);
              }
              else
              {
                v62 = 2LL * v19;
                *(_DWORD *)&v16[8 * v62] = cx;
                cx += v54;
                *(_DWORD *)&v16[8 * v62 + 8] = cx;
                if ( v53 + v65 > cy )
                {
                  if ( cy - v53 < -32000 )
                  {
                    cy = v53 - 32000;
                    *(_DWORD *)&v16[16 * v19 + 4] = -32000;
                    *(_DWORD *)&v16[16 * v19 + 12] = v53 - 32000;
                    v8 = -32000;
                    v23 = cx;
                  }
                  else
                  {
                    v63 = v83;
                    *(_DWORD *)&v16[16 * v19 + 12] = cy;
                    v58 = cy - (int)v53 < v82;
                    v8 = cy - v53;
                    *(_DWORD *)&v16[16 * v19 + 4] = cy - v53;
                    if ( !v58 )
                    {
                      v63 = v84;
                      v8 = v82;
                    }
                    v66 = v63;
                  }
                }
                else
                {
                  *(_DWORD *)&v16[16 * v19 + 4] = v65;
                  *(_DWORD *)&v16[16 * v19 + 12] = v53 + v65;
                }
              }
            }
            else
            {
              v59 = 2LL * v19;
              *(_DWORD *)&v16[8 * v59 + 4] = cy;
              cy += v53;
              *(_DWORD *)&v16[8 * v59 + 12] = cy;
              if ( (__int64)(v23 - (unsigned __int64)v54) < v5 )
              {
                if ( (__int64)(v5 + (unsigned __int64)v54) > 32000 )
                {
                  *(_DWORD *)&v16[16 * v19 + 8] = 32000;
                  v5 = 32000 - v54;
                  v67 = cy;
                  *(_DWORD *)&v16[16 * v19] = 32000 - v54;
                  cx = 32000;
                }
                else
                {
                  v60 = v80;
                  v58 = (int)(v54 + v5) <= v79;
                  cx = v54 + v5;
                  *(_DWORD *)&v16[16 * v19] = v5;
                  if ( v58 )
                  {
                    v60 = v81;
                    cx = v79;
                  }
                  v65 = v60;
                  *(_DWORD *)&v16[16 * v19 + 8] = v54 + v5;
                }
              }
              else
              {
                *(_DWORD *)&v16[16 * v19 + 8] = v23;
                *(_DWORD *)&v16[16 * v19] = v23 - v54;
              }
            }
          }
          else
          {
            v57 = 2LL * v19;
            *(_DWORD *)&v16[8 * v57 + 8] = v5;
            v5 -= v54;
            *(_DWORD *)&v16[8 * v57] = v5;
            if ( v67 - v53 < v8 )
            {
              if ( v8 + v53 > 32000 )
              {
                *(_DWORD *)&v16[16 * v19 + 12] = 32000;
                v8 = 32000 - v53;
                v66 = v5;
                *(_DWORD *)&v16[16 * v19 + 4] = 32000 - v53;
                cy = 32000;
              }
              else
              {
                v23 = v77;
                v58 = (int)v53 + v8 <= v76;
                cy = v53 + v8;
                *(_DWORD *)&v16[16 * v19 + 4] = v8;
                if ( v58 )
                {
                  cy = v76;
                  v23 = v78;
                }
                *(_DWORD *)&v16[16 * v19 + 12] = v53 + v8;
              }
            }
            else
            {
              *(_DWORD *)&v16[16 * v19 + 12] = v67;
              *(_DWORD *)&v16[16 * v19 + 4] = v67 - v53;
            }
          }
        }
        else
        {
          v55 = 2LL * v19;
          *(_DWORD *)&v16[8 * v55 + 12] = v8;
          v8 -= v53;
          *(_DWORD *)&v16[8 * v55 + 4] = v8;
          if ( v54 + (__int64)v66 > cx )
          {
            if ( (__int64)(cx - (unsigned __int64)v54) < -32000 )
            {
              *(_DWORD *)&v16[16 * v19] = -32000;
              *(_DWORD *)&v16[16 * v19 + 8] = v54 - 32000;
              cx = v54 - 32000;
              v5 = -32000;
              v65 = v8;
            }
            else
            {
              v56 = v74;
              *(_DWORD *)&v16[16 * v19 + 8] = cx;
              v5 = cx - v54;
              *(_DWORD *)&v16[16 * v19] = cx - v54;
              if ( (int)(cx - v54) >= v70 )
              {
                v56 = v75;
                v5 = v70;
              }
              v67 = v56;
            }
          }
          else
          {
            *(_DWORD *)&v16[16 * v19] = v66;
            *(_DWORD *)&v16[16 * v19 + 8] = v54 + v66;
          }
        }
        ++v19;
      }
      else
      {
        v28 = v68;
        v29 = 2LL * v19++;
        ++v68;
        *(struct tagRECT *)&v16[8 * v29] = v85[v28];
      }
    }
    v22 = v67;
    ++v18;
    v21 = v65;
    v20 = v66;
  }
  v35 = v86;
  if ( cx > *v88 )
    *v88 = cx;
  v36 = v73;
  v37 = 0;
  if ( *v73 )
  {
    v38 = v85;
    do
    {
      v39 = v37++;
      v38[v39] = *(struct tagRECT *)&v16[16 * v39];
    }
    while ( v37 < *v36 );
  }
  if ( v35 )
    operator delete[](v35);
  return 0LL;
}
