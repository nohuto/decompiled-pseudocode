/*
 * XREFs of ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01919D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0022D30 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x1C0022F50 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0191AD8 (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0191B18 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0191B9C (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET *a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGETSET *v11; // rdi
  DMMVIDEOPRESENTTARGET *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  DMMVIDEOPRESENTTARGET *v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  int v22; // eax
  ReferenceCounted *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rax

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    v11 = (struct DMMVIDEOPRESENTTARGETSET *)ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v12 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, PagedPool);
      if ( v12 )
        v17 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
                v12,
                v11,
                a2->Id,
                a2->VideoOutputTechnology,
                a2->VideoOutputHpdAwareness,
                a2->MonitorOrientationAwareness,
                a2->SupportsSdtvModes);
      else
        v17 = 0LL;
      if ( v17 )
      {
        v18 = DMMVIDEOPRESENTTARGET::Initialize(v17);
        v21 = v18;
        if ( v18 < 0 )
        {
          v34 = WdLogNewEntry5_WdError(v20, v19);
          *(_QWORD *)(v34 + 24) = a2->Id;
          *(_QWORD *)(v34 + 32) = v21;
          WdLogEvent5_WdError(v34);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v17 + 64), v35);
          return (unsigned int)v21;
        }
        else
        {
          v22 = DMMVIDEOPRESENTTARGETSET::AddTarget(v11, v17);
          v23 = (DMMVIDEOPRESENTTARGET *)((char *)v17 + 64);
          v24 = v22;
          ReferenceCounted::Release(v23, v25);
          if ( (int)v24 < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
            v36[3] = a2->Id;
            v36[4] = v11;
            v36[5] = v24;
            return (unsigned int)v24;
          }
          else
          {
            return DMMVIDEOPRESENTTARGETSET::ReleaseDdiEnumerator(v11, a2);
          }
        }
      }
      else
      {
        v33 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
        *(_QWORD *)(v33 + 24) = v11;
        WdLogEvent5_WdLowResource(v33);
        return 3221225495LL;
      }
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdError(v32);
      return 3223192342LL;
    }
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v31 + 24) = 0LL;
    *(_QWORD *)(v31 + 32) = this;
    WdLogEvent5_WdError(v31);
    return 3223192325LL;
  }
}
