/*
 * XREFs of ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03BC67C
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BD184 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C034CC34 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C03BB550 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 */

__int64 __fastcall BLTQUEUE::PreparePresentIndirect(
        BLTQUEUE *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_PRESENT *a3,
        const struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5,
        struct BLTENTRY *a6)
{
  struct DXGSWAPCHAIN **v6; // rax
  struct DXGSWAPCHAIN *v9; // rcx
  __int64 result; // rax
  bool v11; // zf
  UINT DirtyRectCount; // r14d
  UINT MoveRectCount; // esi
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int SetMetaDataInternal; // eax
  D3DKMT_PRESENT_RGNS *v16; // rax
  UINT v17; // ecx
  RECT *pDirtyRects; // rax
  struct DXGSWAPCHAIN **v19; // rcx
  int v20; // eax
  struct DXGSWAPCHAIN **v21; // rcx
  struct DXGSWAPCHAIN *v22; // rcx
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v23; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+78h] [rbp-11h]
  int v25; // [rsp+80h] [rbp-9h]
  _DWORD v26[3]; // [rsp+84h] [rbp-5h] BYREF
  __int64 v27; // [rsp+90h] [rbp+7h]
  __int128 v28; // [rsp+98h] [rbp+Fh]

  v6 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
  if ( v6 )
  {
    v9 = *v6;
    if ( *((_DWORD *)*v6 + 58) )
    {
      return 0LL;
    }
    else
    {
      v11 = (a3->Flags.Value & 0x400000) == 0;
      v23.bProducer = 1;
      DirtyRectCount = 0;
      v23.bSetMetaData = 1;
      MoveRectCount = 0;
      v23.hNtSwapChain = 0LL;
      *(_QWORD *)&v23.DataCopied = 0LL;
      v23.bGlobalMetaData = 0;
      if ( !v11 )
      {
        pPresentRegions = a3->pPresentRegions;
        if ( pPresentRegions )
        {
          MoveRectCount = pPresentRegions->MoveRectCount;
          DirtyRectCount = pPresentRegions->DirtyRectCount;
          if ( MoveRectCount )
          {
            v23.pBuffer = (PVOID)pPresentRegions->pMoveRects;
            v23.BufferSize = 24 * MoveRectCount;
            SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v9, &v23, 16 * (DirtyRectCount + 3), 0);
            if ( SetMetaDataInternal < 0 )
              WdLogSingleEntry1(3LL, SetMetaDataInternal);
          }
          v16 = a3->pPresentRegions;
          v17 = v16->DirtyRectCount;
          if ( v16->DirtyRectCount )
          {
            pDirtyRects = (RECT *)v16->pDirtyRects;
            v23.BufferSize = 16 * v17;
            v19 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
            v23.pBuffer = pDirtyRects;
            v20 = SwapChainGetSetMetaDataInternal(*v19, &v23, 0x30u, 0);
            if ( v20 < 0 )
              WdLogSingleEntry1(3LL, v20);
          }
        }
      }
      v21 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
      v26[0] = a3->PresentCount;
      v24 = 0LL;
      v25 = 0;
      v28 = 0LL;
      v26[1] = DirtyRectCount;
      v26[2] = MoveRectCount;
      v27 = 0LL;
      v22 = *v21;
      v23.pBuffer = v26;
      v23.BufferSize = 36;
      result = SwapChainGetSetMetaDataInternal(v22, &v23, 0xCu, 0);
      if ( (int)result < 0 )
      {
        WdLogSingleEntry1(3LL, (int)result);
        result = 0LL;
      }
      if ( *((_DWORD *)this + 694) )
        return BLTQUEUE::CompletePresentIndirectInternal(this, a6, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 1458LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present to Indirect display does not have a shared swapchain to present to",
      1458LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  return result;
}
