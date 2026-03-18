/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x1C01AB444
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01B5124 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C03AAA6C (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011E80 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0019D70 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0165168 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x1C01AEEC0 (-AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01D4710 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  unsigned int i; // edi
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned int j; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v13; // r12
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // rax
  struct tagRECT *v17; // r13
  unsigned int k; // r15d
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  void *v21; // rbx
  int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // r15d
  int v25; // ebx
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // rax
  LONG left; // r12d
  UINT v34; // r14d
  LONG top; // r13d
  __int64 cy; // rcx
  struct _D3DKMDT_2DREGION v37; // rax
  __int64 v38; // rcx
  int v39; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v41; // rcx
  UINT v42; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // r14
  CCD_TOPOLOGY *v45; // rcx
  int v46; // r11d
  UINT cx; // edx
  __int64 v49; // r11
  unsigned int v50; // ecx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // kr00_8
  __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  char v60; // [rsp+58h] [rbp-59h]
  int v61; // [rsp+5Ch] [rbp-55h] BYREF
  unsigned int v62; // [rsp+60h] [rbp-51h] BYREF
  struct _D3DKMDT_2DREGION v63; // [rsp+68h] [rbp-49h] BYREF
  struct _D3DKMDT_2DREGION v64; // [rsp+70h] [rbp-41h] BYREF
  __int64 v65; // [rsp+78h] [rbp-39h]
  struct tagRECT *v66; // [rsp+80h] [rbp-31h]
  __int64 v67; // [rsp+88h] [rbp-29h]
  struct tagRECT v68[4]; // [rsp+98h] [rbp-19h] BYREF

  v4 = 0;
  v60 = a2;
  v61 = 0;
  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( i >= v8 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)PathDescriptor + 33)) != 1 )
      {
        WdLogSingleEntry1(1LL, 5223LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5223LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v64 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v64);
      v41 = *((_QWORD *)PathDescriptor + 31);
      if ( v41 )
      {
        *(_QWORD *)(v41 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 31) + 72LL) |= 0x20u;
      }
      v42 = v61;
      a2 = v64.cx + *((_DWORD *)PathDescriptor + 36);
      if ( (int)a2 > v61 )
        v42 = v64.cx + *((_DWORD *)PathDescriptor + 36);
      v61 = v42;
    }
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_QWORD *)this + 8);
    v11 = v10 ? *(unsigned __int16 *)(v10 + 20) : 0LL;
    if ( j >= (unsigned __int16)v11 )
      break;
    v43 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v43 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      *((_DWORD *)v43 + 36) = v61;
      v50 = *((_DWORD *)v43 + 33);
      *((_DWORD *)v43 + 37) = 0;
      *(_QWORD *)v43 = v49 | 0x800;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v50) != 1 )
      {
        WdLogSingleEntry1(1LL, 5268LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5268LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v64 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v43, 0, &v64);
      v51 = *((_QWORD *)v43 + 31);
      if ( v51 )
      {
        *(_DWORD *)(v51 + 76) = v61;
        *(_DWORD *)(*((_QWORD *)v43 + 31) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v43 + 31) + 72LL) |= 0x20u;
      }
      v61 += v64.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v11, a2, a3, a4);
  if ( !Current )
    return 0LL;
  v13 = *((_QWORD *)Current + 11);
  if ( !v13 )
    return 0LL;
  v62 = 0;
  v14 = -1;
  memset(v68, 0, sizeof(v68));
  v16 = *((_QWORD *)this + 8);
  v17 = v68;
  v66 = v68;
  v64 = 0LL;
  if ( v16 && *(_WORD *)(v16 + 20) > 4u )
  {
    v53 = *(unsigned __int16 *)(v16 + 20);
    v52 = 16 * v53;
    if ( !is_mul_ok(v53, 0x10uLL) )
      v52 = -1LL;
    v54 = operator new[](v52, 0x4B677844u, 256LL, v15);
    v64 = (struct _D3DKMDT_2DREGION)v54;
    v21 = (void *)v54;
    if ( !v54 )
    {
      WdLogSingleEntry0(2LL);
LABEL_84:
      v23 = -1073741801;
      goto LABEL_86;
    }
    v17 = (struct tagRECT *)v54;
    v66 = (struct tagRECT *)v54;
  }
  for ( k = 0; ; ++k )
  {
    v19 = *((_QWORD *)this + 8);
    v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
    if ( k >= v20 )
      break;
    v44 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k)
      && !*((_DWORD *)v44 + 53)
      && (v60 || !CCD_TOPOLOGY::IsVirtualSlate(v45, (struct _LUID *)v44)) )
    {
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v44 + 33)) != 1 )
      {
        WdLogSingleEntry1(1LL, 5338LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMDT_VPPR_GET_OFFSET_ROTATION(pPathDescriptor->Rotation) == D3DKMDT_VPPR_IDENTITY",
          5338LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v63 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v44, 0, &v63);
      cx = v63.cx;
      v17[v62].left = *((_DWORD *)v44 + 36);
      v17[v62].top = *((_DWORD *)v44 + 37);
      v17[v62].right = *((_DWORD *)v44 + 36) + cx;
      v17[v62].bottom = *((_DWORD *)v44 + 37) + v63.cy;
      if ( v14 == -1 && *((_DWORD *)v44 + 36) == v46 && *((_DWORD *)v44 + 37) == v46 )
        v14 = v62;
      ++v62;
    }
    v4 = 0;
  }
  v21 = (void *)v64;
  if ( v14 == -1 )
  {
    WdLogSingleEntry0(3LL);
    v14 = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct tagRECT *, _QWORD, _QWORD))(v13 + 320))(v17, v62, v14) )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)this + 8));
    goto LABEL_84;
  }
  v61 = 0;
  if ( v60 || (v22 = CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(this, v17, &v62, &v61), v23 = v22, v22 >= 0) )
  {
    v24 = 0;
    v25 = 0;
    while ( 1 )
    {
      v26 = *((_QWORD *)this + 8);
      v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
      if ( v24 >= v27 )
        break;
      v28 = CCD_TOPOLOGY::GetPathDescriptor(this, v24);
      v29 = v28;
      if ( *((_DWORD *)v28 + 53) )
      {
        v55 = v61;
        v56 = *((_DWORD *)v28 + 24);
        *(_QWORD *)v28 |= 0x800uLL;
        v67 = v55;
        *((_QWORD *)v28 + 18) = v55;
        *((_DWORD *)v28 + 39) = *((_DWORD *)v28 + 25);
        *((_DWORD *)v28 + 38) = v56;
        v61 += v56;
      }
      else
      {
        v30 = *((_QWORD *)this + 8);
        v31 = *(unsigned __int16 *)(v30 + 20);
        if ( *(_WORD *)(v30 + 20) )
        {
          v32 = (_DWORD *)(v30 + 240);
          while ( *v32 != *(_DWORD *)(296LL * v24 + v30 + 240) )
          {
            ++v4;
            v32 += 74;
            if ( v4 >= (unsigned int)v31 )
              goto LABEL_92;
          }
        }
        else
        {
LABEL_92:
          v4 = -559038737;
        }
        if ( v4 == v24 )
        {
          left = v17[v25].left;
          v34 = v66[v25].right - left;
          top = v17[v25].top;
          cy = (unsigned int)(v66[v25++].bottom - top);
          v63 = (struct _D3DKMDT_2DREGION)__PAIR64__(cy, v34);
          v37.cy = cy;
        }
        else
        {
          v65 = *((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v4) + 18);
          v57 = CCD_TOPOLOGY::GetPathDescriptor(this, v4);
          top = HIDWORD(v65);
          left = v65;
          v37 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v57 + 19);
          v63 = v37;
          cy = v37.cy;
          v34 = v37.cx;
        }
        LODWORD(v65) = cy;
        if ( *((_QWORD *)v29 + 19) != __PAIR64__(v37.cy, v34) )
          WdLogSingleEntry0(1LL);
        if ( *((_DWORD *)v29 + 36) != left )
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v31);
          v58[3] = v24;
          v58[4] = *((int *)v29 + 36);
          cy = left;
          v58[5] = left;
        }
        *((_DWORD *)v29 + 36) = left;
        if ( *((_DWORD *)v29 + 37) != top )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdTrace(cy, v31);
          v59[3] = v24;
          v59[4] = *((int *)v29 + 37);
          v59[5] = top;
        }
        *(_QWORD *)v29 |= 0x800uLL;
        v38 = *((_QWORD *)v29 + 31);
        *((_DWORD *)v29 + 37) = top;
        v17 = v66;
        if ( v38 )
        {
          *(_QWORD *)(v38 + 76) = *((_QWORD *)v29 + 18);
          v39 = v65;
          *(_DWORD *)(*((_QWORD *)v29 + 31) + 172LL) = v34;
          *(_DWORD *)(*((_QWORD *)v29 + 31) + 176LL) = v39;
          *(_DWORD *)(*((_QWORD *)v29 + 31) + 72LL) |= 0x180020u;
        }
        v4 = 0;
      }
      ++v24;
    }
    if ( v64 )
      operator delete[](*(void **)&v64);
    return 0LL;
  }
  WdLogSingleEntry2(2LL, *((_QWORD *)this + 8), v22);
LABEL_86:
  if ( v21 )
    operator delete[](v21);
  return v23;
}
