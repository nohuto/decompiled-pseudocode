/*
 * XREFs of ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01345BC
 * Callers:
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C01346BC (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B04C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C00615C0 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C013331C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0210A18 (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDxgiGammaRamp(
        DXGADAPTER **this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGADAPTER *v8; // rcx
  PVOID v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int SourceConnectedToTargetInClientVidPn; // edi
  __int64 v13; // rdx
  DXGADAPTER *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  struct DXGK_GAMMA_ADJUSTMENT *v17; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  _WORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v31; // rcx
  unsigned int v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v19 + 24) = 7471LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v20 + 24) = 7472LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v8 = this[2];
  v9 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)v8 + 510) )
  {
    v32 = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v8, (unsigned int)v4, &v32);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v21 + 24) = v4;
      *(_QWORD *)(v21 + 32) = this[2];
      WdLogEvent5_WdError(v21);
    }
    else
    {
      if ( v32 == -1 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v11, v10);
        *(_QWORD *)(v22 + 24) = 7494LL;
        WdLogEvent5_WdAssertion(v22);
      }
      v13 = v32;
      v14 = this[14];
      v15 = 3968LL * v32;
      if ( *(_DWORD *)((char *)v14 + v15 + 696) == 1 && (v16 = *(_QWORD *)((char *)v14 + v15 + 704)) != 0
        || (v16 = *(_QWORD *)((char *)v14 + v15 + 688)) != 0 )
      {
        v17 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v16 + 8LL * v32 + 1656);
        v9 = *(PVOID *)(v16 + 8LL * v32 + 1528);
        if ( v17 )
        {
          v23 = *(_QWORD *)(v16 + 8LL * v32 + 1528);
          if ( v9 && *((_DWORD *)v9 + 4) == 1 )
            v23 = 0LL;
          v24 = operator new[](0x30uLL, 0x4B677844u, PagedPool);
          v9 = v24;
          if ( v24 )
          {
            v24[20] = 0;
            *(_QWORD *)v24 = &ReferenceCounted::`vftable';
            *(_QWORD *)v24 = &DXGK_GAMMA_RAMP::`vftable';
            *((_DWORD *)v24 + 2) = 1;
            *((_DWORD *)v24 + 4) = 1;
            *((_QWORD *)v24 + 3) = 0LL;
            *((_QWORD *)v24 + 4) = 0LL;
          }
          else
          {
            v9 = 0LL;
          }
          if ( !v9 )
          {
            v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
            *(_QWORD *)(v29 + 24) = v16;
            WdLogEvent5_WdLowResource(v29);
            return (unsigned int)-1073741801;
          }
          if ( v23 )
          {
            inited = DXGK_GAMMA_RAMP::Initialize((size_t *)v9, *(unsigned int *)(v23 + 16), *(const void **)(v23 + 32));
          }
          else
          {
            SourceConnectedToTargetInClientVidPn = DXGK_GAMMA_RAMP::Initialize((size_t *)v9, 2LL, 0LL);
            if ( SourceConnectedToTargetInClientVidPn < 0 )
              goto LABEL_34;
            inited = ColorSpaceTransformInitIdentityTransform((__int64)v9 + 16);
          }
          SourceConnectedToTargetInClientVidPn = inited;
          if ( inited < 0 )
            goto LABEL_34;
          SourceConnectedToTargetInClientVidPn = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                                                   v31,
                                                   (const struct DXGK_GAMMA_RAMP *)v23,
                                                   (struct DXGK_GAMMA_RAMP *)v9,
                                                   v17);
          if ( SourceConnectedToTargetInClientVidPn < 0 )
            goto LABEL_34;
        }
        else if ( v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
        }
      }
      *a3 = (const struct DXGK_GAMMA_RAMP *)v9;
    }
    if ( SourceConnectedToTargetInClientVidPn >= 0 )
      return (unsigned int)SourceConnectedToTargetInClientVidPn;
LABEL_34:
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)v9, v13);
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return 0LL;
}
