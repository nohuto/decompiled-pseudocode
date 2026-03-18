/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0102CA0
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C00460E4 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C02827C4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  ULONG64 v6; // rdx
  ULONG64 pPresentRegions; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 SubRectCnt; // r15
  unsigned int v11; // edi
  int v12; // esi
  RECT *SourcePoint; // rsi
  const RECT *pSrcSubRects; // rdx
  D3DKMT_PRESENT_RGNS *v15; // rdi
  unsigned __int64 v16; // rsi
  int v17; // r15d
  unsigned __int64 v18; // r12
  unsigned int v19; // r15d
  struct _D3DKMT_MOVE_RECT *v20; // r11
  unsigned __int64 DirtyRectCount; // r12
  char *v22; // r13
  char *v23; // rdx
  unsigned int v24; // eax
  ULONG64 v25; // r8
  ULONG64 v26; // r9
  __int64 v27; // r11
  _QWORD *v29; // rax
  SIZE_T v30; // rax
  PVOID v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  struct _D3DKMT_MOVE_RECT **v34; // r13
  SIZE_T v35; // rax
  struct _D3DKMT_MOVE_RECT *v36; // rax
  SIZE_T v37; // rax
  char *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  struct _D3DKMT_MOVE_RECT *v41; // [rsp+38h] [rbp-50h]
  struct _D3DKMT_MOVE_RECT *v42; // [rsp+38h] [rbp-50h]
  char **v43; // [rsp+40h] [rbp-48h]
  unsigned __int8 v44; // [rsp+A8h] [rbp+20h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    v9 = 1LL;
  else
    LOBYTE(v9) = 0;
  v44 = v9;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    pPresentRegions = (ULONG64)a3->pPresentRegions;
    if ( (_BYTE)v9 )
    {
      v6 = MmUserProbeAddress;
      if ( pPresentRegions >= MmUserProbeAddress )
        pPresentRegions = MmUserProbeAddress;
      *((_OWORD *)this + 28) = *(_OWORD *)pPresentRegions;
      *((_OWORD *)this + 29) = *(_OWORD *)(pPresentRegions + 16);
    }
    else
    {
      *((_OWORD *)this + 28) = *(_OWORD *)pPresentRegions;
      *((_OWORD *)this + 29) = *(_OWORD *)(pPresentRegions + 16);
    }
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v11 = 16 * SubRectCnt;
    if ( 16 * SubRectCnt > 0xFFFFFFFF )
    {
      v11 = -1;
      v12 = -1073741675;
    }
    else
    {
      v12 = 0;
    }
    if ( v12 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(pPresentRegions, v6);
      v29[3] = v12;
      v29[4] = a2;
      v29[5] = a3->SubRectCnt;
      v29[6] = 16LL;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v12;
    }
    SourcePoint = (RECT *)((char *)this + 480);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      pPresentRegions = (ULONG64)this + 744;
      v42 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 736);
      SourcePoint = (RECT *)*((_QWORD *)this + 92);
      if ( (unsigned int)SubRectCnt > *((_DWORD *)this + 186) )
      {
        operator delete[](SourcePoint);
        v30 = 16 * SubRectCnt;
        if ( !is_mul_ok(SubRectCnt, 0x10uLL) )
          v30 = -1LL;
        v31 = operator new[](v30, 0x4B677844u, PagedPool);
        v42->SourcePoint = (POINT)v31;
        pPresentRegions = 0LL;
        if ( v31 )
          pPresentRegions = (unsigned int)SubRectCnt;
        *((_DWORD *)this + 186) = pPresentRegions;
        SourcePoint = (RECT *)v42->SourcePoint;
        v9 = v44;
      }
    }
    if ( !SourcePoint )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdLowResource(pPresentRegions, v6, v8, v9);
      v32[3] = -1073741801LL;
      v32[4] = a2;
      v32[5] = a3->SubRectCnt;
LABEL_59:
      WdLogEvent5_WdLowResource(v32);
      return 3221225495LL;
    }
    pSrcSubRects = a3->pSrcSubRects;
    if ( (_BYTE)v9
      && ((const RECT *)((char *)pSrcSubRects + v11) < pSrcSubRects
       || (unsigned __int64)pSrcSubRects + v11 > MmUserProbeAddress) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(SourcePoint, pSrcSubRects, v11);
    a3->pSrcSubRects = SourcePoint;
    v9 = v44;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    v15 = 0LL;
    goto LABEL_47;
  }
  v15 = (D3DKMT_PRESENT_RGNS *)((char *)this + 448);
  v16 = 16LL * *((unsigned int *)this + 112);
  if ( v16 > 0xFFFFFFFF )
  {
    LODWORD(v16) = -1;
    v17 = -1073741675;
  }
  else
  {
    v17 = 0;
  }
  if ( v17 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(pPresentRegions, v6, v8);
    *(_QWORD *)(v33 + 24) = 11351LL;
    WdLogEvent5_WdWarning(v33);
    return (unsigned int)v17;
  }
  else
  {
    v18 = *((unsigned int *)this + 116);
    v19 = 24 * v18;
    if ( 24 * v18 > 0xFFFFFFFF )
    {
      v40 = WdLogNewEntry5_WdWarning(pPresentRegions, v6, v8);
      *(_QWORD *)(v40 + 24) = 11359LL;
      WdLogEvent5_WdWarning(v40);
      return 3221225621LL;
    }
    else
    {
      if ( v19 + (unsigned int)v16 >= v19 )
      {
        if ( v19 + (_DWORD)v16 )
        {
          v20 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
          v41 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
          if ( (unsigned int)v18 > 4 )
          {
            v34 = (struct _D3DKMT_MOVE_RECT **)((char *)this + 848);
            v20 = (struct _D3DKMT_MOVE_RECT *)*((_QWORD *)this + 106);
            v41 = v20;
            if ( (unsigned int)v18 > *((_DWORD *)this + 214) )
            {
              operator delete[](v20);
              v35 = 24 * v18;
              if ( !is_mul_ok(v18, 0x18uLL) )
                v35 = -1LL;
              v36 = (struct _D3DKMT_MOVE_RECT *)operator new[](v35, 0x4B677844u, PagedPool);
              *v34 = v36;
              pPresentRegions = 0LL;
              if ( v36 )
                pPresentRegions = (unsigned int)v18;
              *((_DWORD *)this + 214) = pPresentRegions;
              v20 = *v34;
              v41 = *v34;
              v9 = v44;
            }
          }
          DirtyRectCount = v15->DirtyRectCount;
          v22 = (char *)this + 864;
          if ( (unsigned int)DirtyRectCount > 0x10 )
          {
            pPresentRegions = (ULONG64)this + 1128;
            v43 = (char **)((char *)this + 1120);
            v22 = (char *)*((_QWORD *)this + 140);
            if ( (unsigned int)DirtyRectCount > *((_DWORD *)this + 282) )
            {
              operator delete[](v22);
              v37 = 16 * DirtyRectCount;
              if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
                v37 = -1LL;
              v38 = (char *)operator new[](v37, 0x4B677844u, PagedPool);
              *v43 = v38;
              pPresentRegions = 0LL;
              if ( v38 )
                pPresentRegions = (unsigned int)DirtyRectCount;
              *((_DWORD *)this + 282) = pPresentRegions;
              v22 = *v43;
              v9 = v44;
              v20 = v41;
            }
          }
          if ( v20 && v22 )
          {
            if ( v15->DirtyRectCount )
            {
              v23 = (char *)*((_QWORD *)this + 57);
              if ( (_BYTE)v9
                && (&v23[(unsigned int)v16] < v23 || (unsigned __int64)&v23[(unsigned int)v16] > MmUserProbeAddress) )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v22, v23, (unsigned int)v16);
              *((_QWORD *)this + 57) = v22;
              v20 = v41;
            }
            else
            {
              *((_QWORD *)this + 57) = 0LL;
            }
            if ( *((_DWORD *)this + 116) )
            {
              v24 = *((_DWORD *)this + 116);
              if ( v44 )
              {
                if ( v19 )
                {
                  v25 = *((_QWORD *)this + 59);
                  v26 = v25 + v19;
                  if ( v26 > MmUserProbeAddress || (v24 = *((_DWORD *)this + 116), v26 < v25) )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
                    v24 = *((_DWORD *)this + 116);
                  }
                }
              }
              TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v24, *((const struct _D3DKMT_MOVE_RECT **)this + 59), v20);
              *((_QWORD *)this + 59) = v27;
            }
            else
            {
              *((_QWORD *)this + 59) = 0LL;
            }
            goto LABEL_47;
          }
          v32 = (_QWORD *)WdLogNewEntry5_WdLowResource(pPresentRegions, v6, v8, v9);
          v32[3] = 11380LL;
          goto LABEL_59;
        }
        *((_QWORD *)this + 59) = 0LL;
        *((_QWORD *)this + 57) = 0LL;
LABEL_47:
        a3->pPresentRegions = v15;
        return 0LL;
      }
      v39 = WdLogNewEntry5_WdWarning(pPresentRegions, v6, v8);
      *(_QWORD *)(v39 + 24) = 11367LL;
      WdLogEvent5_WdWarning(v39);
      return 3221225621LL;
    }
  }
}
