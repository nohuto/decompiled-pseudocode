/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C00EF680
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00EF400 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C02A36C8 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C02A7340 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C016A5AC (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct DXGALLOCATION *a3,
        unsigned __int8 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        unsigned __int8 a14)
{
  __int64 v17; // rsi
  __int64 v18; // rbx
  const struct tagRECT *v19; // rcx
  char *v20; // rbx
  unsigned int v21; // r11d
  unsigned int v22; // edx
  const struct tagRECT *v23; // r9
  const struct tagRECT *v24; // r8
  int v25; // ecx
  enum _D3DDDIFORMAT v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  v17 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 544LL) != KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v27 + 24) = 9188LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( a4 && !a3 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v28 + 24) = 9189LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( (unsigned int)v17 >= *((_DWORD *)this + 934)
    || (v18 = 168 * v17, *((_DWORD *)this + 42 * v17 + 280) == -1)
    && (*(_DWORD *)((char *)this + v18 + 1124) == -1
     || (v29 = WdLogNewEntry5_WdAssertion(this, a2),
         *(_QWORD *)(v29 + 24) = 8940LL,
         WdLogEvent5_WdAssertion(v29),
         *(_DWORD *)((char *)this + v18 + 1120) == -1)) )
  {
    v20 = 0LL;
    goto LABEL_33;
  }
  _mm_lfence();
  v19 = (const struct tagRECT *)(v18 + 80LL * *(int *)((char *)this + v18 + 1120));
  v20 = (char *)this + (_QWORD)v19 + 1128;
  if ( !v20 )
  {
LABEL_33:
    v21 = a5;
LABEL_34:
    v23 = a6;
LABEL_35:
    v24 = a7;
    goto LABEL_36;
  }
  if ( !a4 )
  {
    if ( (v20[8] & 1) == 0 )
      goto LABEL_28;
    goto LABEL_33;
  }
  v21 = a5;
  v22 = *((_DWORD *)v20 + 2);
  if ( ((v22 >> 4) & 1) != ((a5 & 1) != 0) || ((v22 >> 5) & 1) != ((a5 & 2) != 0) )
    goto LABEL_34;
  v23 = a6;
  if ( *((_DWORD *)v20 + 3) != a6->left
    || *((_DWORD *)v20 + 5) != a6->right
    || *((_DWORD *)v20 + 4) != a6->top
    || *((_DWORD *)v20 + 6) != a6->bottom )
  {
    goto LABEL_35;
  }
  v24 = a7;
  if ( *((_DWORD *)v20 + 7) == a7->left
    && *((_DWORD *)v20 + 9) == a7->right
    && *((_DWORD *)v20 + 8) == a7->top
    && *((_DWORD *)v20 + 10) == a7->bottom )
  {
    v19 = a8;
    if ( *((_DWORD *)v20 + 11) == a8->left
      && *((_DWORD *)v20 + 13) == a8->right
      && *((_DWORD *)v20 + 12) == a8->top
      && *((_DWORD *)v20 + 14) == a8->bottom
      && *((_DWORD *)v20 + 15) == a9 )
    {
      a2 = (v22 >> 2) & 1;
      if ( (_DWORD)a2 == (a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
        && *((_DWORD *)v20 + 16) == a11
        && *((_DWORD *)v20 + 17) == a12 )
      {
LABEL_28:
        if ( *((_DWORD *)this + 934) <= (unsigned int)v17 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v19, a2);
          *(_QWORD *)(v30 + 24) = 9197LL;
          WdLogEvent5_WdAssertion(v30);
        }
        v25 = *((_DWORD *)v20 + 2);
        *(_QWORD *)v20 = a3;
        *((_DWORD *)v20 + 2) = (2 * (a4 & 1)) | a4 & 1 | v25 & 0xFFFFFFFC;
        return;
      }
    }
  }
LABEL_36:
  v26 = a13;
  if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v20 )
    v26 = *((_DWORD *)v20 + 18);
  DISPLAY_SOURCE::CreateNewPlaneConfig(this, v17, a3, a4, v21, v23, v24, a8, a9, a10, a11, a12, v26, a14);
  if ( (unsigned int)v17 >= *((_DWORD *)this + 934) )
    *((_DWORD *)this + 934) = v17 + 1;
  if ( (_DWORD)v17 && a4 )
    *((_BYTE *)this + 3744) = 1;
}
