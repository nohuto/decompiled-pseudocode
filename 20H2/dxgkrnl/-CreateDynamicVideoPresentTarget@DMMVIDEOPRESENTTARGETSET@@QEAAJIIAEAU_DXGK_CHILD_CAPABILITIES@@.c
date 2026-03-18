/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E468C
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E33BC (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0019270 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0022D90 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0190968 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C01909EC (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::CreateDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        unsigned int a3,
        struct _DXGK_CHILD_CAPABILITIES *a4,
        char a5,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DMMVIDEOPRESENTTARGET *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  DMMVIDEOPRESENTTARGET *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  DMMVIDEOPRESENTTARGET *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *v73; // rax
  struct DMMVIDEOPRESENTTARGET **v74; // rdx
  struct DMMVIDEOPRESENTTARGET *v75; // rax

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11, v10);
    v15[3] = v8;
    v16 = *((_QWORD *)this + 11);
    v17 = *(_QWORD *)(v16 + 8);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v18);
      v17 = *(_QWORD *)(v16 + 8);
    }
    v19 = *(_QWORD *)(v17 + 16);
    v15[6] = 1LL;
LABEL_5:
    v15[5] = -1073741811LL;
    v15[4] = v19;
LABEL_6:
    WdLogEvent5_WdAssertion(v15);
    return 3221225485LL;
  }
  v21 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, (unsigned int)v6);
  if ( a5 )
  {
    if ( !v21 )
    {
      *(_DWORD *)a6 = 1;
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22);
      v15[3] = v6;
      v26 = *((_QWORD *)this + 11);
      v27 = *(_QWORD *)(v26 + 8);
      if ( !v27 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v28);
        v27 = *(_QWORD *)(v26 + 8);
      }
      v19 = *(_QWORD *)(v27 + 16);
      v15[6] = 2LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)v21 + 59) )
    {
      *(_DWORD *)a6 = 5;
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22);
      v15[3] = v6;
      v31 = *((_QWORD *)this + 11);
      v32 = *(_QWORD *)(v31 + 8);
      if ( !v32 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v30, v29);
        WdLogEvent5_WdAssertion(v33);
        v32 = *(_QWORD *)(v31 + 8);
      }
      v19 = *(_QWORD *)(v32 + 16);
      v15[6] = 3LL;
      goto LABEL_5;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v21) )
    {
      *(_DWORD *)a6 = 6;
      v36 = WdLogNewEntry5_WdAssertion(v35, v34);
      *(_QWORD *)(v36 + 24) = v6;
LABEL_18:
      v39 = *((_QWORD *)this + 11);
      v15 = (_QWORD *)v36;
      v40 = *(_QWORD *)(v39 + 8);
      if ( !v40 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v38, v37);
        WdLogEvent5_WdAssertion(v41);
        v40 = *(_QWORD *)(v39 + 8);
      }
      v15[4] = *(_QWORD *)(v40 + 16);
      v15[5] = -1073741811LL;
      v15[6] = 4LL;
      goto LABEL_6;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v36 = WdLogNewEntry5_WdAssertion(v43, v42);
      *(_QWORD *)(v36 + 24) = v8;
      goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v44 + 72));
    v45 = *(_QWORD **)(v44 + 488);
    v46 = (_QWORD *)((char *)TargetById + 496);
    if ( *v45 == v44 + 480 )
    {
      *v46 = v44 + 480;
      *((_QWORD *)TargetById + 63) = v45;
      *v45 = v46;
      *(_QWORD *)(v44 + 488) = v46;
      *((_QWORD *)TargetById + 66) = v44;
      return 0LL;
    }
    goto LABEL_42;
  }
  if ( v21 )
  {
    *(_DWORD *)a6 = 3;
    v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v23, v22);
    v15[3] = v6;
    v49 = *((_QWORD *)this + 11);
    v50 = *(_QWORD *)(v49 + 8);
    if ( !v50 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v48, v47);
      WdLogEvent5_WdAssertion(v51);
      v50 = *(_QWORD *)(v49 + 8);
    }
    v19 = *(_QWORD *)(v50 + 16);
    v15[6] = 5LL;
    goto LABEL_5;
  }
  v52 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, PagedPool);
  if ( v52 )
    v57 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v52,
            this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
  else
    v57 = 0LL;
  if ( v57 )
  {
    v64 = DMMVIDEOPRESENTTARGET::Initialize(v57);
    v66 = v64;
    if ( v64 >= 0 )
    {
      v69 = DMMVIDEOPRESENTTARGETSET::AddTarget(this, v57);
      v66 = v69;
      if ( v69 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
        v74 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 56);
        v75 = (DMMVIDEOPRESENTTARGET *)((char *)v57 + 456);
        if ( *v74 == (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 440) )
        {
          *(_QWORD *)v75 = (char *)TargetById + 440;
          *((_QWORD *)v57 + 58) = v74;
          *v74 = v75;
          *((_QWORD *)TargetById + 56) = v75;
          *((_QWORD *)v57 + 59) = TargetById;
          *((_DWORD *)v57 + 30) = *((_DWORD *)TargetById + 30);
          ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v57 + 64), (__int64)v74);
          return 0LL;
        }
LABEL_42:
        __fastfail(3u);
      }
      *(_DWORD *)a6 = -2147483646;
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v57 + 64), v70);
      v73 = (_QWORD *)WdLogNewEntry5_WdError(v72, v71);
      v73[3] = v6;
      v73[4] = this;
      v73[5] = v66;
      WdLogEvent5_WdError(v73);
    }
    else
    {
      *(_DWORD *)a6 = -2147483647;
      v67 = WdLogNewEntry5_WdError(a6, v65);
      *(_QWORD *)(v67 + 24) = v6;
      *(_QWORD *)(v67 + 32) = v66;
      WdLogEvent5_WdError(v67);
      ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v57 + 64), v68);
    }
    return (unsigned int)v66;
  }
  *(_DWORD *)a6 = 0x80000000;
  v60 = WdLogNewEntry5_WdLowResource(v54, v53, v55, v56);
  *(_QWORD *)(v60 + 24) = v6;
  v61 = *((_QWORD *)this + 11);
  v62 = *(_QWORD *)(v61 + 8);
  if ( !v62 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v59, v58);
    WdLogEvent5_WdAssertion(v63);
    v62 = *(_QWORD *)(v61 + 8);
  }
  *(_QWORD *)(v60 + 32) = *(_QWORD *)(v62 + 16);
  WdLogEvent5_WdLowResource(v60);
  return 3221225495LL;
}
