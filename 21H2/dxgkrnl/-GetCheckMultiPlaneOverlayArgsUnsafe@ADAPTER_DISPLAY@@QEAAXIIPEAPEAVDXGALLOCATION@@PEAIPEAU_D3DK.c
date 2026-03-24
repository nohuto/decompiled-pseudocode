/*
 * XREFs of ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C02128F4
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02526D4 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C00E0658 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C00E07E8 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@1@Z @ 0x1C02131E0 (-GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATI.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        unsigned int *a5,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a6,
        unsigned int *a7,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *a8)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r12d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v13; // edi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v14; // ebp
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v15; // r15
  __int64 v16; // r14
  struct _KTHREAD *v17; // rdx
  UINT v18; // r8d
  __int64 v19; // r12
  __int64 v20; // r10
  __int64 v21; // r9
  UINT v22; // r15d
  struct _KTHREAD *v23; // rdx
  struct _DISPLAY_PLANE_CONFIG_STATE *v24; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v26; // rsi
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v28; // rax
  __int64 v29; // rcx
  RECT v30; // xmm1
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v32; // rdx
  RECT v33; // xmm1
  int v34; // [rsp+50h] [rbp-68h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v35; // [rsp+54h] [rbp-64h]
  __int64 v36; // [rsp+60h] [rbp-58h]
  __int64 v37; // [rsp+68h] [rbp-50h]
  unsigned int v38; // [rsp+C0h] [rbp+8h]
  UINT v39; // [rsp+C8h] [rbp+10h]

  v8 = a2;
  if ( this[68] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 10102LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 0LL;
  v12 = 0;
  v34 = 0;
  v38 = 0;
  if ( v8 == -1 )
    v13 = *((_DWORD *)this + 20);
  else
    v13 = v8 + 1;
  v14 = 0;
  v35 = v13;
  if ( v8 != -1 )
    v14 = v8;
  if ( v14 < v13 )
  {
    v15 = a8;
    v16 = 3968LL * v14;
    do
    {
      v17 = this[14];
      if ( *((_BYTE *)v17 + v16 + 722) )
      {
        v18 = *(_DWORD *)((char *)v17 + v16 + 3740);
        if ( v18 <= *(_DWORD *)((char *)v17 + v16 + 3736) )
          v18 = *(_DWORD *)((char *)v17 + v16 + 3736);
        v39 = v18;
        if ( v18 )
        {
          v19 = 0LL;
          v36 = 0LL;
          v20 = 0LL;
          v37 = v16;
          v21 = v16;
          v22 = 0;
          while ( 1 )
          {
            v23 = this[14];
            if ( *((_BYTE *)v23 + v19 + v16 + 2880) )
            {
              if ( (*(_DWORD *)((_BYTE *)v23 + v21 + 2904) & 1) != 0 )
              {
                v24 = (struct _KTHREAD *)((char *)v23 + 3968 * v14 + v20 + 2896);
LABEL_20:
                if ( v24 && (unsigned int)v11 < a3 )
                {
                  a4[v11] = *(struct DXGALLOCATION **)v24;
                  v26 = v11;
                  pPlaneAttributes = a6[v26].pPlaneAttributes;
                  a6[v26].LayerIndex = v22;
                  a6[v26].VidPnSourceId = v14;
                  GetPlaneConfigState(
                    v24,
                    &pPlaneAttributes->Flags,
                    &pPlaneAttributes->SrcRect,
                    &pPlaneAttributes->DstRect,
                    &pPlaneAttributes->ClipRect,
                    &pPlaneAttributes->Rotation,
                    &pPlaneAttributes->Blend,
                    &pPlaneAttributes->ColorSpace,
                    &pPlaneAttributes->SDRWhiteLevel);
                  v21 = v37;
                  v20 = v36;
                  a6[v26].pPlaneAttributes->DirtyRectCount = 0;
                  a6[v26].pPlaneAttributes->pDirtyRects = 0LL;
                  v28 = a6[v26].pPlaneAttributes;
                  v18 = v39;
                  v11 = (unsigned int)++v34;
                  v28->StretchQuality = DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH;
                }
              }
            }
            else
            {
              LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                            (struct _KTHREAD *)((char *)v23 + 3968 * v14),
                                            v22);
              v18 = v39;
              v21 = v37;
              v24 = LatestPlaneConfigInternal;
              v20 = v36;
              if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
                goto LABEL_20;
            }
            v20 += 80LL;
            v21 += 80LL;
            ++v22;
            v36 = v20;
            ++v19;
            v37 = v21;
            if ( v22 >= v18 )
            {
              v17 = this[14];
              v15 = a8;
              v12 = v38;
              v13 = v35;
              break;
            }
          }
        }
        if ( !*((_BYTE *)v17 + v16 + 3696) )
        {
          LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v17 + 3968 * v14));
          if ( !LatestPostCompositionConfigInternal || !*(_BYTE *)LatestPostCompositionConfigInternal )
            goto LABEL_32;
          v32 = v12;
          v15[v32].VidPnSourceId = v14;
          v15[v32].PostComposition.Flags.Value = 0;
          v15[v32].PostComposition.SrcRect = *(RECT *)((char *)LatestPostCompositionConfigInternal + 4);
          v33 = *(RECT *)((char *)LatestPostCompositionConfigInternal + 20);
          v15[v32].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v15[v32].PostComposition.DstRect = v33;
          goto LABEL_31;
        }
        if ( *((_BYTE *)v17 + v16 + 3700) )
        {
          v29 = v12;
          v15[v29].VidPnSourceId = v14;
          v15[v29].PostComposition.Flags.Value = 0;
          v15[v29].PostComposition.SrcRect = *(RECT *)((char *)this[14] + v16 + 3704);
          v30 = *(RECT *)((char *)this[14] + v16 + 3720);
          v15[v29].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
          v15[v29].PostComposition.DstRect = v30;
LABEL_31:
          v38 = ++v12;
        }
      }
LABEL_32:
      ++v14;
      v16 += 3968LL;
    }
    while ( v14 < v13 );
  }
  *a5 = v11;
  *a7 = v12;
}
