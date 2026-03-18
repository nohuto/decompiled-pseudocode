/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C027E580
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C027E348 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C0299608 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGPROCESS *v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  _D3DKMT_OUTPUTDUPLPRESENT *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  RECT *v19; // rdi
  RECT *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  D3DKMT_MOVE_RECT *v26; // r15
  const RECT *pDirtyRects; // rdx
  const RECT *v28; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v30; // r8
  unsigned int v31; // esi
  __int64 v32; // rax
  _D3DKMT_OUTPUTDUPLPRESENT v33; // [rsp+40h] [rbp-168h] BYREF

  v2 = (_OWORD *)a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v7 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v10, v9);
    v11 = v8;
LABEL_3:
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)Current + 346) )
  {
    v13 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v13 + 24) = 11468LL;
    v11 = v13;
    goto LABEL_3;
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  v14 = &v33;
  v15 = 2LL;
  do
  {
    *(_OWORD *)&v14->hContext = *v2;
    *(_OWORD *)v14->BroadcastContext = v2[1];
    *(_OWORD *)&v14->BroadcastContext[4] = v2[2];
    *(_OWORD *)&v14->BroadcastContext[8] = v2[3];
    *(_OWORD *)&v14->BroadcastContext[12] = v2[4];
    *(_OWORD *)&v14->BroadcastContext[16] = v2[5];
    *(_OWORD *)&v14->BroadcastContext[20] = v2[6];
    v14 = (_D3DKMT_OUTPUTDUPLPRESENT *)((char *)v14 + 128);
    *(_OWORD *)&v14[-1].PresentRegions.pMoveRects = v2[7];
    v2 += 8;
    --v15;
  }
  while ( v15 );
  *(_OWORD *)&v14->hContext = *v2;
  *(_OWORD *)v14->BroadcastContext = v2[1];
  *(_OWORD *)&v14->BroadcastContext[4] = v2[2];
  *(_QWORD *)&v14->BroadcastContext[8] = *((_QWORD *)v2 + 6);
  v16 = 16LL * v33.PresentRegions.DirtyRectCount;
  if ( v16 > 0xFFFFFFFF )
  {
    v32 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v6);
    *(_QWORD *)(v32 + 24) = 11487LL;
    goto LABEL_36;
  }
  v17 = 24LL * v33.PresentRegions.MoveRectCount;
  if ( v17 > 0xFFFFFFFF )
  {
    v32 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v6);
    *(_QWORD *)(v32 + 24) = 11494LL;
    goto LABEL_36;
  }
  v18 = v17 + v16;
  if ( (int)v17 + (int)v16 < (unsigned int)v17 )
  {
    v32 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v6);
    *(_QWORD *)(v32 + 24) = 11501LL;
LABEL_36:
    WdLogEvent5_WdWarning(v32);
    return 3221225621LL;
  }
  v19 = 0LL;
  if ( v18 )
  {
    v20 = (RECT *)operator new[](v18, 0x4B677844u, PagedPool);
    v19 = v20;
    if ( !v20 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
      *(_QWORD *)(v25 + 24) = 11512LL;
      WdLogEvent5_WdLowResource(v25);
      return 3221225495LL;
    }
    v26 = (D3DKMT_MOVE_RECT *)&v20[v33.PresentRegions.DirtyRectCount];
    if ( v33.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v33.PresentRegions.pDirtyRects;
      v28 = (const RECT *)((char *)v33.PresentRegions.pDirtyRects + (unsigned int)v16);
      if ( v28 < v33.PresentRegions.pDirtyRects || (unsigned __int64)v28 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v20, pDirtyRects, (unsigned int)v16);
      v33.PresentRegions.pDirtyRects = v19;
    }
    else
    {
      v33.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v33.PresentRegions.MoveRectCount;
    if ( v33.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v17 )
      {
        v30 = (const D3DKMT_MOVE_RECT *)((char *)v33.PresentRegions.pMoveRects + (unsigned int)v17);
        if ( (unsigned __int64)v30 > MmUserProbeAddress || v30 < v33.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v33.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v33.PresentRegions.pMoveRects, v26);
      v33.PresentRegions.pMoveRects = v26;
    }
    else
    {
      v33.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v33.PresentRegions.pDirtyRects = 0LL;
    v33.PresentRegions.pMoveRects = 0LL;
  }
  v31 = OutputDuplPresent(&v33, v7);
  if ( v19 )
    operator delete[](v19);
  return v31;
}
