/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BE3B8
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03BEAB0 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C00571F8 (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C005727C (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C016C650 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C01CB270 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        __int64 right,
        __int64 left,
        unsigned int a5,
        char a6,
        const struct tagRECT *a7,
        const struct _D3DKMT_PRESENT *a8,
        const struct _DXGKARG_PRESENT *a9,
        struct COREDEVICEACCESS *a10)
{
  bool v10; // zf
  const struct _D3DKMT_PRESENT *v11; // rdi
  struct DXGALLOCATION *v12; // r15
  __int64 v13; // r14
  D3DKMT_HANDLE hSource; // eax
  __int64 v17; // r9
  int v18; // edx
  DXGDEVICE *v19; // r9
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rsi
  DXGDEVICE *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdi
  __int64 Format; // rax
  unsigned int v30; // eax
  const struct _DXGKARG_PRESENT *v31; // r15
  const RECT *pDirtyRects; // r14
  unsigned int DirtyRectCount; // ecx
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const struct tagRECT *v35; // rdi
  int top; // r10d
  int bottom; // r11d
  int v38; // edx
  unsigned int v39; // edx
  void *v40; // rax
  unsigned int MoveRectCount; // edx
  void *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  UINT Height; // eax
  void *v47; // rax
  struct _D3DKMT_UNLOCK v48; // [rsp+58h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v49; // [rsp+68h] [rbp-59h] BYREF
  struct _D3DKMT_LOCK v50; // [rsp+98h] [rbp-29h] BYREF
  int v51; // [rsp+100h] [rbp+3Fh] BYREF
  struct DXGALLOCATION *v52; // [rsp+110h] [rbp+4Fh]

  v52 = (struct DXGALLOCATION *)left;
  v10 = *((_BYTE *)a2 + 441) == 0;
  v11 = a8;
  v12 = (struct DXGALLOCATION *)left;
  memset(&v49, 0, sizeof(v49));
  v13 = (unsigned int)right;
  if ( v10 )
  {
    if ( (a8->Flags.Value & 4) != 0 )
      hSource = a8->hSource;
    else
      hSource = a8->hDestination;
    v17 = *((_QWORD *)a2 + 2);
    memset(&v50, 0, sizeof(v50));
    v51 = hSource;
    v50.hAllocation = hSource;
    v50.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 9;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL)) )
      v50.Flags.Value = v18 | 4;
    v20 = DXGDEVICE::Lock(v19, &v50, a10);
    v22 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry5(2LL, v20, a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL), v50.hAllocation, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DOD Present 0x%I64x Lock failed 0x%I64x 0x%I64x 0x%I64x 0x%I64x",
        v22,
        (__int64)a2,
        *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL),
        v50.hAllocation,
        (__int64)v12);
      return (unsigned int)v22;
    }
    *((_QWORD *)this + 1) = v50.pData;
    v24 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
    v48.phAllocations = (const D3DKMT_HANDLE *)&v51;
    v48.hDevice = 0;
    v48.NumAllocations = 1;
    DXGDEVICE::Unlock(v24, &v48, 0LL, v21);
    v25 = *((_QWORD *)a2 + 2);
    v49.hAllocation = *(HANDLE *)(*((_QWORD *)v12 + 6) + 16LL);
    v27 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v25 + 16), &v49, v26);
    if ( v27 < 0 )
    {
      v28 = v27;
      WdLogSingleEntry5(2LL, v27, a2, *((unsigned int *)v12 + 4), v12, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed for source 0x%I64x 0x%I64x 0x%I64x",
        v28,
        (__int64)a2,
        *((unsigned int *)v12 + 4),
        (__int64)v12,
        v13);
      return -1073741811LL;
    }
    Format = v49.Format;
    *(_DWORD *)this = v13;
    if ( (_DWORD)Format == 20 )
    {
      *((_DWORD *)this + 4) = 3;
      goto LABEL_26;
    }
    if ( (int)Format > 20 )
    {
      if ( (int)Format <= 22 )
        goto LABEL_24;
      if ( (_DWORD)Format == 23 )
      {
        *((_DWORD *)this + 4) = 2;
        goto LABEL_26;
      }
      if ( (int)Format > 30 )
      {
        if ( (int)Format > 33 )
        {
          switch ( (_DWORD)Format )
          {
            case ')':
              *((_DWORD *)this + 4) = 1;
              break;
            case 'q':
              *((_DWORD *)this + 4) = 8;
              break;
            case 'w':
              goto LABEL_24;
            default:
              goto LABEL_20;
          }
LABEL_26:
          v30 = a5;
          goto LABEL_28;
        }
LABEL_24:
        *((_DWORD *)this + 4) = 4;
        goto LABEL_26;
      }
    }
LABEL_20:
    WdLogSingleEntry2(2LL, -1073741811LL, Format);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DOD Present : 0x%I64x is returned for invalid primary format 0x%I64x",
      -1073741811LL,
      v49.Format,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  v30 = 0;
LABEL_28:
  v31 = a9;
  pDirtyRects = 0LL;
  *((_DWORD *)this + 5) = v30;
  DirtyRectCount = 0;
  *((_DWORD *)this + 6) = a6 & 1;
  pPresentRegions = v11->pPresentRegions;
  v51 = v11->Flags.Value & 4;
  if ( v51 )
  {
    if ( !pPresentRegions )
    {
      v35 = 0LL;
      goto LABEL_34;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = v31->SubRectCnt;
    pDirtyRects = v31->pDstSubRects;
  }
  v35 = a7;
LABEL_34:
  if ( !v35 )
    goto LABEL_49;
  left = (unsigned int)v35->left;
  right = (unsigned int)v35->right;
  if ( (int)left < (int)right )
  {
    top = v35->top;
    bottom = v35->bottom;
    if ( top < bottom && (int)right <= (int)v49.Width && bottom <= (int)v49.Height && (int)left >= 0 && top >= 0 )
    {
      v38 = 0;
      if ( !DirtyRectCount )
        goto LABEL_49;
      while ( (int)left < pDirtyRects[v38].left
           || (int)right > pDirtyRects[v38].right
           || top < pDirtyRects[v38].top
           || bottom > pDirtyRects[v38].bottom )
      {
        if ( ++v38 >= DirtyRectCount )
          goto LABEL_49;
      }
    }
  }
  v35 = 0LL;
LABEL_49:
  v39 = DirtyRectCount + 1;
  if ( !v35 )
    v39 = DirtyRectCount;
  if ( v51 )
  {
    if ( pPresentRegions && (v39 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v39;
      if ( v39 )
      {
        v40 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v39, right, left);
        *((_QWORD *)this + 6) = v40;
        if ( !v40 )
        {
LABEL_57:
          WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 10));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x dirty rects",
            (__int64)this,
            *((unsigned int *)this + 10),
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v40, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v35 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v35;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v42 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount, right, left);
        v43 = *((unsigned int *)this + 7);
        *((_QWORD *)this + 4) = v42;
        if ( !v42 )
        {
          WdLogSingleEntry2(2LL, this, (unsigned int)v43);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"PRESENTDODARG 0x%I64x: failed to allocate 0x%I64x move rects",
            (__int64)this,
            *((unsigned int *)this + 7),
            0LL,
            0LL,
            0LL);
          return 3221225495LL;
        }
        memmove(v42, pPresentRegions->pMoveRects, 24 * v43);
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_QWORD *)this + 22) = 0LL;
      v44 = *((_QWORD *)this + 6);
      if ( *((_BYTE *)a2 + 441) )
      {
        v45 = *((_QWORD *)v52 + 6);
        *(_DWORD *)(v44 + 8) = *(_DWORD *)(v45 + 72);
        Height = *(_DWORD *)(v45 + 76);
      }
      else
      {
        *(_DWORD *)(v44 + 8) = v49.Width;
        Height = v49.Height;
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v39;
  v47 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v39, right, left);
  *((_QWORD *)this + 6) = v47;
  if ( !v47 )
    goto LABEL_57;
  memmove(v47, v31->pDstSubRects, 16LL * v31->SubRectCnt);
  if ( v35 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v31->SubRectCnt) = *v35;
  return 0LL;
}
