/*
 * XREFs of ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0183090
 * Callers:
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C002EDD6 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0332ED4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DXGPRESENT::CopyPresentArgs(DXGPRESENT *this, struct DXGCONTEXT *a2, struct _D3DKMT_PRESENT *a3)
{
  bool v6; // r13
  _OWORD *p_DirtyRectCount; // rcx
  unsigned __int64 SubRectCnt; // r15
  unsigned int v9; // edi
  RECT *v10; // rsi
  const RECT *pSrcSubRects; // rdx
  D3DKMT_PRESENT_RGNS *v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int v15; // r12d
  struct _D3DKMT_MOVE_RECT *v16; // r11
  char *v17; // r9
  char *v18; // rdx
  unsigned int v19; // eax
  ULONG64 v20; // r8
  ULONG64 v21; // r9
  __int64 v22; // r11
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  UINT v35; // ecx
  struct _D3DKMT_MOVE_RECT *v36; // [rsp+50h] [rbp-48h]
  char *v37; // [rsp+58h] [rbp-40h]
  unsigned __int64 v38; // [rsp+B8h] [rbp+20h]
  UINT DirtyRectCount; // [rsp+B8h] [rbp+20h]

  v6 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  if ( (a3->Flags.Value & 0x400000) != 0 )
  {
    p_DirtyRectCount = &a3->pPresentRegions->DirtyRectCount;
    if ( v6 )
    {
      if ( (unsigned __int64)p_DirtyRectCount >= MmUserProbeAddress )
        p_DirtyRectCount = (_OWORD *)MmUserProbeAddress;
      *((_OWORD *)this + 28) = *p_DirtyRectCount;
      *((_OWORD *)this + 29) = p_DirtyRectCount[1];
    }
    else
    {
      *((_OWORD *)this + 28) = *p_DirtyRectCount;
      *((_OWORD *)this + 29) = p_DirtyRectCount[1];
    }
  }
  if ( a3->pSrcSubRects )
  {
    SubRectCnt = a3->SubRectCnt;
    v9 = SubRectCnt;
    if ( 16 * SubRectCnt > 0xFFFFFFFF )
    {
      WdLogSingleEntry4(2LL, -1073741675LL, a2, SubRectCnt, 16LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
        -1073741675LL,
        (__int64)a2,
        a3->SubRectCnt,
        16LL,
        0LL);
      return 3221225621LL;
    }
    v10 = (RECT *)((char *)this + 480);
    if ( (unsigned int)SubRectCnt > 0x10 )
    {
      if ( (unsigned int)SubRectCnt > *((_DWORD *)this + 186) )
      {
        operator delete[](*((void **)this + 92));
        v25 = 16 * SubRectCnt;
        if ( !is_mul_ok(SubRectCnt, 0x10uLL) )
          v25 = -1LL;
        v26 = operator new[](v25, 0x4B677844u, 256LL, v24);
        *((_QWORD *)this + 92) = v26;
        v27 = 0;
        if ( v26 )
          v27 = SubRectCnt;
        *((_DWORD *)this + 186) = v27;
        v10 = (RECT *)*((_QWORD *)this + 92);
      }
      else
      {
        v10 = (RECT *)*((_QWORD *)this + 92);
      }
    }
    if ( !v10 )
    {
      WdLogSingleEntry3(6LL, -1073741801LL, a2, a3->SubRectCnt);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"0x%I64x from 0x%I64x SubRectCnt = 0x%I64d",
        -1073741801LL,
        (__int64)a2,
        a3->SubRectCnt,
        0LL,
        0LL);
      return 3221225495LL;
    }
    pSrcSubRects = a3->pSrcSubRects;
    if ( v6 && (&pSrcSubRects[v9] < pSrcSubRects || (unsigned __int64)&pSrcSubRects[v9] > MmUserProbeAddress) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v10, pSrcSubRects, v9 * 16);
    a3->pSrcSubRects = v10;
  }
  if ( (a3->Flags.Value & 0x400000) == 0 )
  {
    v12 = 0LL;
LABEL_41:
    a3->pPresentRegions = v12;
    return 0LL;
  }
  v12 = (D3DKMT_PRESENT_RGNS *)((char *)this + 448);
  v13 = 16LL * *((unsigned int *)this + 112);
  if ( v13 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11570LL);
    return 3221225621LL;
  }
  v14 = *((unsigned int *)this + 116);
  v38 = v14;
  v15 = 24 * v14;
  if ( 24 * v14 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11578LL);
    return 3221225621LL;
  }
  if ( v15 + (unsigned int)v13 < v15 )
  {
    WdLogSingleEntry1(3LL, 11586LL);
    return 3221225621LL;
  }
  if ( !(v15 + (_DWORD)v13) )
  {
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
    goto LABEL_41;
  }
  v16 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
  v36 = (struct _D3DKMT_MOVE_RECT *)((char *)this + 752);
  if ( (unsigned int)v14 > 4 )
  {
    if ( (unsigned int)v14 > *((_DWORD *)this + 214) )
    {
      operator delete[](*((void **)this + 106));
      v29 = 24 * v38;
      if ( !is_mul_ok(v38, 0x18uLL) )
        v29 = -1LL;
      v30 = operator new[](v29, 0x4B677844u, 256LL, v28);
      *((_QWORD *)this + 106) = v30;
      v31 = 0;
      if ( v30 )
        v31 = v38;
      *((_DWORD *)this + 214) = v31;
      v16 = (struct _D3DKMT_MOVE_RECT *)*((_QWORD *)this + 106);
      v36 = v16;
    }
    else
    {
      v16 = (struct _D3DKMT_MOVE_RECT *)*((_QWORD *)this + 106);
      v36 = v16;
    }
  }
  v17 = (char *)this + 864;
  v37 = (char *)this + 864;
  DirtyRectCount = v12->DirtyRectCount;
  if ( v12->DirtyRectCount > 0x10 )
  {
    if ( v12->DirtyRectCount > *((_DWORD *)this + 282) )
    {
      operator delete[](*((void **)this + 140));
      v33 = 16LL * DirtyRectCount;
      if ( !is_mul_ok(DirtyRectCount, 0x10uLL) )
        v33 = -1LL;
      v34 = operator new[](v33, 0x4B677844u, 256LL, v32);
      *((_QWORD *)this + 140) = v34;
      v35 = 0;
      if ( v34 )
        v35 = DirtyRectCount;
      *((_DWORD *)this + 282) = v35;
      v17 = (char *)*((_QWORD *)this + 140);
      v37 = v17;
      v16 = v36;
    }
    else
    {
      v17 = (char *)*((_QWORD *)this + 140);
      v37 = v17;
    }
  }
  if ( v16 && v17 )
  {
    if ( v12->DirtyRectCount )
    {
      v18 = (char *)*((_QWORD *)this + 57);
      if ( v6 && (&v18[(unsigned int)v13] < v18 || (unsigned __int64)&v18[(unsigned int)v13] > MmUserProbeAddress) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, v18, (unsigned int)v13);
      *((_QWORD *)this + 57) = v37;
      v16 = v36;
    }
    else
    {
      *((_QWORD *)this + 57) = 0LL;
    }
    if ( *((_DWORD *)this + 116) )
    {
      v19 = *((_DWORD *)this + 116);
      if ( v6 )
      {
        if ( v15 )
        {
          v20 = *((_QWORD *)this + 59);
          v21 = v20 + v15;
          if ( v21 > MmUserProbeAddress || (v19 = *((_DWORD *)this + 116), v21 < v20) )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
            v19 = *((_DWORD *)this + 116);
          }
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(v19, *((const struct _D3DKMT_MOVE_RECT **)this + 59), v16);
      *((_QWORD *)this + 59) = v22;
    }
    else
    {
      *((_QWORD *)this + 59) = 0LL;
    }
    goto LABEL_41;
  }
  WdLogSingleEntry1(6LL, 11599LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
    11599LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
