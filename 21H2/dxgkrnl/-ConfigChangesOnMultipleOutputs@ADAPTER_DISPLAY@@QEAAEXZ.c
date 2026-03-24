/*
 * XREFs of ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C0210ADC
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02526D4 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C00E0658 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C00E07E8 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0210910 (-AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C02136D8 (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C02137D4 (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 */

bool __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(struct _KTHREAD **this, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  struct _KTHREAD *v6; // rdi
  bool v7; // bp
  __int64 v8; // r14
  __int64 v9; // r13
  struct _KTHREAD *v10; // rsi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // r11d
  const struct tagRECT *v16; // rcx
  const struct tagRECT *v17; // r10
  const struct tagRECT *v18; // r9
  unsigned int v19; // r8d
  char v20; // dl
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v21; // r11d
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  unsigned __int8 v23; // dl
  int v24; // ecx
  struct _DISPLAY_PLANE_CONFIG *v26; // [rsp+50h] [rbp-58h]
  unsigned int v27; // [rsp+B0h] [rbp+8h]
  int v28; // [rsp+B8h] [rbp+10h]
  char v29; // [rsp+C0h] [rbp+18h]
  __int64 v30; // [rsp+C8h] [rbp+20h]

  if ( this[68] != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 10219LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = 0;
  v5 = 0;
  v28 = 0;
  v27 = 0;
  if ( !*((_DWORD *)this + 20) )
    return 0;
  v6 = this[14];
  do
  {
    v7 = 0;
    v8 = 3968LL * v5;
    v9 = 0LL;
    v10 = v6;
    if ( !*(_DWORD *)((char *)v6 + v8 + 3740) )
      goto LABEL_15;
    while ( 1 )
    {
      if ( !*((_BYTE *)v6 + v8 + v9 + 2880) )
        goto LABEL_13;
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((struct _KTHREAD *)((char *)v6 + v8), v9);
      v10 = this[14];
      v26 = LatestPlaneConfigInternal;
      v12 = v8 + 80 * v9;
      v30 = v12;
      v13 = *(_DWORD *)((char *)v10 + v12 + 2904);
      if ( LatestPlaneConfigInternal )
        break;
      if ( (v13 & 1) != 0 )
        goto LABEL_19;
      v6 = this[14];
LABEL_13:
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)((char *)v6 + v8 + 3740) )
      {
        v4 = v27;
        v10 = v6;
        goto LABEL_15;
      }
    }
    v14 = (v13 >> 4) & 1;
    v15 = *(_DWORD *)((char *)v10 + v12 + 2904);
    v16 = (const struct tagRECT *)((char *)v10 + v12 + 2940);
    v29 = v13 & 0x20;
    v17 = (const struct tagRECT *)((char *)v10 + v12 + 2924);
    v18 = (const struct tagRECT *)((char *)v10 + v12 + 2908);
    v19 = v14 | 2;
    v20 = *((_BYTE *)v10 + v12 + 2904);
    v21 = (v15 >> 2) & 1;
    v6 = this[14];
    if ( !v29 )
      v19 = v14;
    if ( PlaneConfigsMatch(
           v26,
           v20 & 1,
           v19,
           v18,
           v17,
           v16,
           *(enum _D3DDDI_ROTATION *)((char *)v10 + v30 + 2956),
           v21,
           *(enum D3DDDI_COLOR_SPACE_TYPE *)((char *)v10 + 80 * v9 + v8 + 2960),
           *(_DWORD *)((char *)v10 + v30 + 2964)) )
    {
      goto LABEL_13;
    }
LABEL_19:
    v4 = v27;
    v7 = 1;
LABEL_15:
    v6 = v10;
    if ( !*((_BYTE *)v10 + v8 + 3696) )
    {
LABEL_22:
      if ( !v7 )
        goto LABEL_24;
LABEL_23:
      v24 = (1 << v5) | v28;
      ++v4;
      v28 = v24;
      v27 = v4;
      goto LABEL_25;
    }
    if ( v7 )
      goto LABEL_23;
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v10 + v8));
    v6 = this[14];
    v23 = *((_BYTE *)v6 + v8 + 3700);
    if ( !LatestPostCompositionConfigInternal )
    {
      v7 = v23 != 0;
      goto LABEL_22;
    }
    if ( !PostCompositionConfigsMatch(
            LatestPostCompositionConfigInternal,
            v23,
            (const struct tagRECT *)((char *)v6 + v8 + 3704),
            (const struct tagRECT *)((char *)v6 + v8 + 3720)) )
    {
      v7 = 1;
      goto LABEL_22;
    }
LABEL_24:
    v24 = v28;
LABEL_25:
    ++v5;
  }
  while ( v5 < *((_DWORD *)this + 20) );
  return v4 > 1 && !ADAPTER_DISPLAY::AreSourcesSyncLocked((ADAPTER_DISPLAY *)this, v24);
}
