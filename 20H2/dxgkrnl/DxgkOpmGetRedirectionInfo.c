/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x1C0216640
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0057094 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D0F0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C013216C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C0210F40 (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02DB5A0 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int SourceConnectedToTargetInClientVidPn; // esi
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // ecx
  struct _D3DDDI_RATIONAL v27; // [rsp+40h] [rbp-10h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v28; // [rsp+80h] [rbp+30h] BYREF
  struct _D3DKMDT_2DREGION v29; // [rsp+90h] [rbp+40h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 1024LL;
    WdLogEvent5_WdAssertion(v10);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_DWORD *)a1 + 87) & 0x100) == 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(a1[337], (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      v28 = D3DDDI_VSSLO_UNINITIALIZED;
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                               a1,
                                               (unsigned int)v5,
                                               (unsigned int *)&v28);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_9;
      v17 = (unsigned int)v28;
      if ( v28 == -1 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v14);
        *(_QWORD *)(v18 + 24) = 1054LL;
        WdLogEvent5_WdAssertion(v18);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(a1[337], (unsigned int)v17);
      if ( !DisplayModeInfo )
      {
        v22 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v22 + 24) = v17;
        *(_QWORD *)(v22 + 32) = a1;
        WdLogEvent5_WdError(v22);
        return 3221225485LL;
      }
      v29 = 0LL;
      v27 = 0LL;
      v28 = D3DDDI_VSSLO_UNINITIALIZED;
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(a1, v5, 0LL, 0LL, 0LL, &v28, &v29, &v27);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
      {
LABEL_9:
        v16 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v16 + 24) = v5;
        *(_QWORD *)(v16 + 32) = a1;
        WdLogEvent5_WdError(v16);
      }
      else
      {
        *(_OWORD *)a4 = 0LL;
        *(_OWORD *)(a4 + 16) = 0LL;
        *(_QWORD *)(a4 + 32) = 0LL;
        *(_DWORD *)(a4 + 40) = 0;
        *(struct _D3DKMDT_2DREGION *)(a4 + 20) = v29;
        *(_DWORD *)(a4 + 32) = *((_DWORD *)DisplayModeInfo + 2);
        *(struct _D3DDDI_RATIONAL *)(a4 + 36) = v27;
        v23 = *((unsigned int *)DisplayModeInfo + 6);
        if ( v28 != (_DWORD)v23 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v23, v14);
          *(_QWORD *)(v24 + 24) = 1080LL;
          WdLogEvent5_WdAssertion(v24);
          LODWORD(v23) = *((_DWORD *)DisplayModeInfo + 6);
        }
        v25 = v23 - 2;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 252 )
              *(_DWORD *)(a4 + 28) = 0;
            else
              *(_DWORD *)(a4 + 28) = 2;
          }
          else
          {
            *(_DWORD *)(a4 + 28) = 3;
          }
        }
        else
        {
          *(_DWORD *)(a4 + 28) = 4;
        }
      }
    }
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return result;
}
