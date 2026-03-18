/*
 * XREFs of ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02FAC90
 * Callers:
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02FB24C (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?Get@?$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z @ 0x1C00461DC (-Get@-$CCachedData@U_D3DKMT_MOVE_RECT@@$03@@QEAAPEAU_D3DKMT_MOVE_RECT@@K@Z.c)
 *     ?Get@?$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z @ 0x1C0046260 (-Get@-$CCachedData@UtagRECT@@$0BA@@@QEAAPEAUtagRECT@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102370 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0141CE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall PRESENTDODARG::SetPresentDodArg(
        PRESENTDODARG *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4,
        unsigned int a5,
        char a6,
        const struct tagRECT *a7,
        const struct _D3DKMT_PRESENT *a8,
        const struct _DXGKARG_PRESENT *a9,
        struct COREDEVICEACCESS *a10)
{
  bool v10; // zf
  const struct _D3DKMT_PRESENT *v11; // rdi
  __int64 v13; // r14
  D3DKMT_HANDLE hSource; // eax
  __int64 v17; // r9
  int v18; // edx
  DXGDEVICE *v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  _QWORD *v24; // rax
  DXGDEVICE *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  _QWORD *v33; // rax
  D3DDDIFORMAT Format; // eax
  unsigned int v35; // eax
  const RECT *pDirtyRects; // r14
  unsigned int DirtyRectCount; // ecx
  const struct _DXGKARG_PRESENT *v38; // r15
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rsi
  const struct tagRECT *v40; // rdi
  int left; // r9d
  int right; // r8d
  int top; // r10d
  int bottom; // r11d
  int v45; // edx
  unsigned int v46; // edx
  void *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned int MoveRectCount; // edx
  void *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  UINT Height; // eax
  void *v58; // rax
  struct _D3DKMT_UNLOCK v59; // [rsp+28h] [rbp-69h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v60; // [rsp+38h] [rbp-59h] BYREF
  struct _D3DKMT_LOCK v61; // [rsp+68h] [rbp-29h] BYREF
  int v62; // [rsp+D0h] [rbp+3Fh] BYREF

  v10 = *((_BYTE *)a2 + 457) == 0;
  v11 = a8;
  memset(&v60, 0, sizeof(v60));
  v13 = a3;
  if ( v10 )
  {
    if ( (a8->Flags.Value & 4) != 0 )
      hSource = a8->hSource;
    else
      hSource = a8->hDestination;
    v17 = *((_QWORD *)a2 + 2);
    memset(&v61, 0, sizeof(v61));
    v62 = hSource;
    v61.hAllocation = hSource;
    v61.Flags.Value = _mm_cvtsi128_si32((__m128i)0LL) | 9;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v17 + 16) + 16LL)) )
      v61.Flags.Value = v18 | 4;
    v20 = DXGDEVICE::Lock(v19, &v61, a10);
    v23 = v20;
    if ( v20 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v24[3] = v23;
      v24[4] = a2;
      v24[5] = *(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL);
      v24[6] = v61.hAllocation;
      v24[7] = a4;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v23;
    }
    v59.hDevice = 0;
    *((_QWORD *)this + 1) = v61.pData;
    v26 = (DXGDEVICE *)*((_QWORD *)a2 + 2);
    v59.phAllocations = (const D3DKMT_HANDLE *)&v62;
    v59.NumAllocations = 1;
    DXGDEVICE::Unlock(v26, &v59, 0LL);
    v27 = *((_QWORD *)a2 + 2);
    v60.hAllocation = *(HANDLE *)(*((_QWORD *)a4 + 6) + 16LL);
    v29 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v27 + 16), &v60, v28);
    v32 = v29;
    if ( v29 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v33[3] = v32;
      v33[4] = a2;
      v33[5] = *((unsigned int *)a4 + 4);
      v33[6] = a4;
      v33[7] = v13;
LABEL_11:
      WdLogEvent5_WdError(v33);
      return 3221225485LL;
    }
    Format = v60.Format;
    *(_DWORD *)this = v13;
    if ( Format == D3DDDIFMT_R8G8B8 )
    {
      *((_DWORD *)this + 4) = 3;
      goto LABEL_27;
    }
    if ( Format > D3DDDIFMT_R8G8B8 )
    {
      if ( Format <= D3DDDIFMT_X8R8G8B8 )
        goto LABEL_25;
      if ( Format == D3DDDIFMT_R5G6B5 )
      {
        *((_DWORD *)this + 4) = 2;
        goto LABEL_27;
      }
      if ( Format > D3DDDIFMT_X4R4G4B4 )
      {
        if ( Format > D3DDDIFMT_X8B8G8R8 )
        {
          switch ( Format )
          {
            case D3DDDIFMT_P8:
              *((_DWORD *)this + 4) = 1;
              break;
            case D3DDDIFMT_A16B16G16R16F:
              *((_DWORD *)this + 4) = 8;
              break;
            case D3DDDIFMT_A2B10G10R10_XR_BIAS:
              goto LABEL_25;
            default:
              goto LABEL_21;
          }
LABEL_27:
          v35 = a5;
          goto LABEL_29;
        }
LABEL_25:
        *((_DWORD *)this + 4) = 4;
        goto LABEL_27;
      }
    }
LABEL_21:
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
    v33[3] = -1073741811LL;
    v33[4] = v60.Format;
    goto LABEL_11;
  }
  *((_QWORD *)this + 1) = 0LL;
  v35 = 0;
LABEL_29:
  *((_DWORD *)this + 5) = v35;
  pDirtyRects = 0LL;
  DirtyRectCount = 0;
  v38 = a9;
  *((_DWORD *)this + 6) = a6 & 1;
  pPresentRegions = v11->pPresentRegions;
  v62 = v11->Flags.Value & 4;
  if ( v62 )
  {
    if ( !pPresentRegions )
    {
      v40 = 0LL;
      goto LABEL_35;
    }
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    pDirtyRects = pPresentRegions->pDirtyRects;
  }
  else
  {
    DirtyRectCount = v38->SubRectCnt;
    pDirtyRects = v38->pDstSubRects;
  }
  v40 = a7;
LABEL_35:
  if ( !v40 )
    goto LABEL_50;
  left = v40->left;
  right = v40->right;
  if ( v40->left < right )
  {
    top = v40->top;
    bottom = v40->bottom;
    if ( top < bottom && right <= (int)v60.Width && bottom <= (int)v60.Height && left >= 0 && top >= 0 )
    {
      v45 = 0;
      if ( !DirtyRectCount )
        goto LABEL_50;
      while ( left < pDirtyRects[v45].left
           || right > pDirtyRects[v45].right
           || top < pDirtyRects[v45].top
           || bottom > pDirtyRects[v45].bottom )
      {
        if ( ++v45 >= DirtyRectCount )
          goto LABEL_50;
      }
    }
  }
  v40 = 0LL;
LABEL_50:
  v46 = DirtyRectCount + 1;
  if ( !v40 )
    v46 = DirtyRectCount;
  if ( v62 )
  {
    if ( pPresentRegions && (v46 || pPresentRegions->MoveRectCount) )
    {
      *((_DWORD *)this + 10) = v46;
      if ( v46 )
      {
        v47 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v46);
        *((_QWORD *)this + 6) = v47;
        if ( !v47 )
        {
LABEL_58:
          v50 = WdLogNewEntry5_WdError(v49, v48);
          *(_QWORD *)(v50 + 24) = this;
          v51 = *((unsigned int *)this + 10);
LABEL_59:
          *(_QWORD *)(v50 + 32) = v51;
          WdLogEvent5_WdError(v50);
          return 3221225495LL;
        }
        if ( pPresentRegions->DirtyRectCount )
          memmove(v47, pDirtyRects, 16LL * pPresentRegions->DirtyRectCount);
        if ( v40 )
          *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * pPresentRegions->DirtyRectCount) = *v40;
      }
      else
      {
        *((_QWORD *)this + 6) = 0LL;
      }
      MoveRectCount = pPresentRegions->MoveRectCount;
      *((_DWORD *)this + 7) = MoveRectCount;
      if ( MoveRectCount )
      {
        v53 = CCachedData<_D3DKMT_MOVE_RECT,4>::Get((__int64)this + 64, MoveRectCount);
        *((_QWORD *)this + 4) = v53;
        if ( !v53 )
        {
          v50 = WdLogNewEntry5_WdError(0LL, v54);
          *(_QWORD *)(v50 + 24) = this;
          v51 = *((unsigned int *)this + 7);
          goto LABEL_59;
        }
        memmove(v53, pPresentRegions->pMoveRects, 24LL * *((unsigned int *)this + 7));
        return 0LL;
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      *((_QWORD *)this + 6) = (char *)this + 176;
      *((_DWORD *)this + 44) = 0;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 0;
      v55 = *((_QWORD *)this + 6);
      if ( *((_BYTE *)a2 + 457) )
      {
        v56 = *((_QWORD *)a4 + 6);
        *(_DWORD *)(v55 + 8) = *(_DWORD *)(v56 + 72);
        Height = *(_DWORD *)(v56 + 76);
      }
      else
      {
        *(_DWORD *)(v55 + 8) = v60.Width;
        Height = v60.Height;
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 12LL) = Height;
      *((_DWORD *)this + 7) = 0;
    }
    *((_QWORD *)this + 4) = 0LL;
    return 0LL;
  }
  *((_DWORD *)this + 7) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = v46;
  v58 = CCachedData<tagRECT,16>::Get((__int64)this + 176, v46);
  *((_QWORD *)this + 6) = v58;
  if ( !v58 )
    goto LABEL_58;
  memmove(v58, v38->pDstSubRects, 16LL * v38->SubRectCnt);
  if ( v40 )
    *(struct tagRECT *)(*((_QWORD *)this + 6) + 16LL * v38->SubRectCnt) = *v40;
  return 0LL;
}
