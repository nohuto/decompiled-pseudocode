/*
 * XREFs of ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C015EEE8
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C015F12C (-PlaneConfigsMatch@@YAEPEAU_DISPLAY_PLANE_CONFIG@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C01C8E50 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C01E6CCC (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C02BF2EC (-AreSourcesSyncLocked@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C02C1664 (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(struct _KTHREAD **this)
{
  unsigned int v1; // r12d
  unsigned int v3; // r13d
  unsigned int v4; // r15d
  struct _KTHREAD *v5; // rbx
  bool v6; // si
  __int64 v7; // r14
  struct _KTHREAD *v8; // rdi
  unsigned int v9; // ecx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v12; // r13
  unsigned int v13; // edx
  unsigned int v14; // r8d
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  unsigned __int8 v16; // dl
  char v17; // r10
  unsigned int v18; // [rsp+90h] [rbp+8h]
  unsigned int v19; // [rsp+98h] [rbp+10h]

  v1 = 0;
  if ( this[79] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 10354LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayStateMutexOwner()", 10354LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = 0;
  v18 = 0;
  v4 = 0;
  v19 = 0;
  if ( !*((_DWORD *)this + 24) )
    return 0;
  v5 = this[16];
  do
  {
    v6 = 0;
    v7 = 4000LL * v4;
    v8 = v5;
    if ( *(_DWORD *)((char *)v5 + v7 + 3764) )
    {
      do
      {
        if ( *((_BYTE *)v5 + v7 + v1 + 2904) )
        {
          LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                        (struct _KTHREAD *)((char *)v5 + v7),
                                        v1);
          v8 = this[16];
          v12 = 80 * (v1 + 50LL * v4);
          v13 = *(_DWORD *)((char *)v8 + v12 + 2928);
          if ( LatestPlaneConfigInternal )
          {
            v14 = (v13 >> 4) & 1 | 2;
            v5 = this[16];
            if ( (v13 & 0x20) == 0 )
              v14 = (v13 >> 4) & 1;
            if ( !PlaneConfigsMatch(
                    LatestPlaneConfigInternal,
                    *((_BYTE *)v8 + v12 + 2928) & 1,
                    v14,
                    (const struct tagRECT *)((char *)v8 + v12 + 2932),
                    (const struct tagRECT *)((char *)v8 + v12 + 2948),
                    (const struct tagRECT *)((char *)v8 + v12 + 2964),
                    *(enum _D3DDDI_ROTATION *)((char *)v8 + v12 + 2980),
                    (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)((v13 >> 2) & 1),
                    *(enum D3DDDI_COLOR_SPACE_TYPE *)((char *)v8 + v12 + 2984),
                    *(_DWORD *)((char *)v8 + v12 + 2988)) )
            {
LABEL_17:
              v6 = 1;
              goto LABEL_18;
            }
          }
          else
          {
            if ( (v13 & 1) != 0 )
              goto LABEL_17;
            v5 = this[16];
          }
        }
        ++v1;
      }
      while ( v1 < *(_DWORD *)((char *)v5 + v7 + 3764) );
      v8 = v5;
LABEL_18:
      v3 = v18;
    }
    v1 = 0;
    v5 = v8;
    if ( !*((_BYTE *)v8 + v7 + 3720) )
      goto LABEL_7;
    if ( v6 )
      goto LABEL_20;
    LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v8 + v7));
    v5 = this[16];
    v16 = *((_BYTE *)v5 + v7 + 3724);
    if ( !LatestPostCompositionConfigInternal )
    {
      v6 = v16 != 0;
LABEL_7:
      if ( !v6 )
        goto LABEL_8;
      goto LABEL_20;
    }
    if ( PostCompositionConfigsMatch(
           LatestPostCompositionConfigInternal,
           v16,
           (const struct tagRECT *)((char *)v5 + v7 + 3728),
           (const struct tagRECT *)((char *)v5 + v7 + 3744)) )
    {
LABEL_8:
      v9 = v19;
      goto LABEL_9;
    }
LABEL_20:
    v9 = (1 << v4) | v19;
    ++v3;
    v19 = v9;
    v18 = v3;
LABEL_9:
    ++v4;
  }
  while ( v4 < *((_DWORD *)this + 24) );
  if ( v3 <= 1 || ADAPTER_DISPLAY::AreSourcesSyncLocked((ADAPTER_DISPLAY *)this, v9) )
    return 0;
  return v17;
}
