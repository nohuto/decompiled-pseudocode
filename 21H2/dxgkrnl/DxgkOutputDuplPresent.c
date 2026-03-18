/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C0333140
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     OutputDuplPresent @ 0x1C0325430 (OutputDuplPresent.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0332ED4 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *v10; // r13
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _D3DKMT_OUTPUTDUPLPRESENT *v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rsi
  unsigned int v22; // eax
  RECT *v23; // rdi
  RECT *v24; // rax
  D3DKMT_MOVE_RECT *v25; // r14
  const RECT *pDirtyRects; // rdx
  const RECT *v27; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v29; // r8
  unsigned int v30; // esi
  _D3DKMT_OUTPUTDUPLPRESENT v31; // [rsp+60h] [rbp-168h] BYREF

  v4 = (_OWORD *)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v10 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v16 = PsGetCurrentProcess(v13, v12, v14, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v16,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Current + 106) & 4) == 0 )
  {
    WdLogSingleEntry1(2LL, 11689LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Function can only be called from DWM process",
      11689LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  v18 = &v31;
  v19 = 2LL;
  do
  {
    *(_OWORD *)&v18->hContext = *v4;
    *(_OWORD *)v18->BroadcastContext = v4[1];
    *(_OWORD *)&v18->BroadcastContext[4] = v4[2];
    *(_OWORD *)&v18->BroadcastContext[8] = v4[3];
    *(_OWORD *)&v18->BroadcastContext[12] = v4[4];
    *(_OWORD *)&v18->BroadcastContext[16] = v4[5];
    *(_OWORD *)&v18->BroadcastContext[20] = v4[6];
    v18 = (_D3DKMT_OUTPUTDUPLPRESENT *)((char *)v18 + 128);
    *(_OWORD *)&v18[-1].PresentRegions.pMoveRects = v4[7];
    v4 += 8;
    --v19;
  }
  while ( v19 );
  *(_OWORD *)&v18->hContext = *v4;
  *(_OWORD *)v18->BroadcastContext = v4[1];
  *(_OWORD *)&v18->BroadcastContext[4] = v4[2];
  *(_QWORD *)&v18->BroadcastContext[8] = *((_QWORD *)v4 + 6);
  v20 = 16LL * v31.PresentRegions.DirtyRectCount;
  if ( v20 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11708LL);
    return 3221225621LL;
  }
  v21 = 24LL * v31.PresentRegions.MoveRectCount;
  if ( v21 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 11715LL);
    return 3221225621LL;
  }
  v22 = v21 + v20;
  if ( (int)v21 + (int)v20 < (unsigned int)v21 )
  {
    WdLogSingleEntry1(3LL, 11722LL);
    return 3221225621LL;
  }
  v23 = 0LL;
  if ( v22 )
  {
    v24 = (RECT *)operator new[](v22, 0x4B677844u, 256LL, v9);
    v23 = v24;
    if ( !v24 )
    {
      WdLogSingleEntry1(6LL, 11733LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to alloc buffer for kernel copy of meta data.",
        11733LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    v25 = (D3DKMT_MOVE_RECT *)&v24[v31.PresentRegions.DirtyRectCount];
    if ( v31.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v31.PresentRegions.pDirtyRects;
      v27 = (const RECT *)((char *)v31.PresentRegions.pDirtyRects + (unsigned int)v20);
      if ( v27 < v31.PresentRegions.pDirtyRects || (unsigned __int64)v27 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v24, pDirtyRects, (unsigned int)v20);
      v31.PresentRegions.pDirtyRects = v23;
    }
    else
    {
      v31.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v31.PresentRegions.MoveRectCount;
    if ( v31.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v21 )
      {
        v29 = (const D3DKMT_MOVE_RECT *)((char *)v31.PresentRegions.pMoveRects + (unsigned int)v21);
        if ( (unsigned __int64)v29 > MmUserProbeAddress || v29 < v31.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v31.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v31.PresentRegions.pMoveRects, v25);
      v31.PresentRegions.pMoveRects = v25;
    }
    else
    {
      v31.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v31.PresentRegions.pDirtyRects = 0LL;
    v31.PresentRegions.pMoveRects = 0LL;
  }
  v30 = OutputDuplPresent(&v31, v10);
  if ( v23 )
    operator delete[](v23);
  return v30;
}
