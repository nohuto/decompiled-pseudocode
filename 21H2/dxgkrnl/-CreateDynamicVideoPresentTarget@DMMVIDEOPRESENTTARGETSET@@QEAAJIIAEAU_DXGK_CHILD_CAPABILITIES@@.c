/*
 * XREFs of ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C039FAA8
 * Callers:
 *     ?DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03A4634 (-DmmCreateDynamicVideoPresentTarget@@YAJPEAXIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CH.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C001DCB8 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0028A20 (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0213B60 (-AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0213BB8 (-Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
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
  __int64 v8; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v11; // rbx
  __int64 v12; // r8
  struct DMMVIDEOPRESENTTARGET *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rbx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r8
  DMMVIDEOPRESENTTARGET *v29; // rax
  DMMVIDEOPRESENTTARGET *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  DMMVIDEOPRESENTTARGET *v34; // rdi
  int v35; // eax
  __int64 v36; // r14
  int v37; // eax
  struct DMMVIDEOPRESENTTARGET **v38; // rdx
  struct DMMVIDEOPRESENTTARGET *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r8

  v6 = a2;
  v8 = a3;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a3);
  if ( !TargetById )
  {
    *(_DWORD *)a6 = 1;
    v11 = *((_QWORD *)this + 11);
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
    {
      WdLogSingleEntry0(1LL);
      v12 = *(_QWORD *)(v11 + 8);
    }
    WdLogSingleEntry4(1LL, v8, *(_QWORD *)(v12 + 16), -1073741811LL, 1LL);
    return 3221225485LL;
  }
  v14 = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, v6);
  if ( a5 )
  {
    if ( !v14 )
    {
      *(_DWORD *)a6 = 1;
      v16 = *((_QWORD *)this + 11);
      v17 = *(_QWORD *)(v16 + 8);
      if ( !v17 )
      {
        WdLogSingleEntry0(1LL);
        v17 = *(_QWORD *)(v16 + 8);
      }
      WdLogSingleEntry4(1LL, v6, *(_QWORD *)(v17 + 16), -1073741811LL, 2LL);
      return 3221225485LL;
    }
    if ( !*((_QWORD *)v14 + 59) )
    {
      *(_DWORD *)a6 = 5;
      v18 = *((_QWORD *)this + 11);
      v19 = *(_QWORD *)(v18 + 8);
      if ( !v19 )
      {
        WdLogSingleEntry0(1LL);
        v19 = *(_QWORD *)(v18 + 8);
      }
      WdLogSingleEntry4(1LL, v6, *(_QWORD *)(v19 + 16), -1073741811LL, 3LL);
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(v14) )
    {
      *(_DWORD *)a6 = 6;
      v20 = *((_QWORD *)this + 11);
      v21 = *(_QWORD *)(v20 + 8);
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        v21 = *(_QWORD *)(v20 + 8);
      }
      v22 = v6;
LABEL_19:
      WdLogSingleEntry4(1LL, v22, *(_QWORD *)(v21 + 16), -1073741811LL, 4LL);
      return 3221225485LL;
    }
    if ( !DMMVIDEOPRESENTTARGET::IsLeafTarget(TargetById) )
    {
      *(_DWORD *)a6 = 6;
      v24 = *((_QWORD *)this + 11);
      v21 = *(_QWORD *)(v24 + 8);
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        v21 = *(_QWORD *)(v24 + 8);
      }
      v22 = v8;
      goto LABEL_19;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 72));
    v25 = *(_QWORD **)(v23 + 488);
    v26 = (_QWORD *)((char *)TargetById + 496);
    if ( *v25 == v23 + 480 )
    {
      *v26 = v23 + 480;
      *((_QWORD *)TargetById + 63) = v25;
      *v25 = v26;
      *(_QWORD *)(v23 + 488) = v26;
      *((_QWORD *)TargetById + 66) = v23;
      return 0LL;
    }
    goto LABEL_38;
  }
  if ( v14 )
  {
    *(_DWORD *)a6 = 3;
    v27 = *((_QWORD *)this + 11);
    v28 = *(_QWORD *)(v27 + 8);
    if ( !v28 )
    {
      WdLogSingleEntry0(1LL);
      v28 = *(_QWORD *)(v27 + 8);
    }
    WdLogSingleEntry4(1LL, v6, *(_QWORD *)(v28 + 16), -1073741811LL, 5LL);
    return 3221225485LL;
  }
  v29 = (DMMVIDEOPRESENTTARGET *)operator new[](0x268uLL, 0x4E506456u, 256LL, v15);
  if ( v29 )
  {
    v30 = DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
            v29,
            this,
            v6,
            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a4->Type.Other.MustBeZero,
            a4->HpdAwareness,
            a4->Type.VideoOutput.MonitorOrientationAwareness,
            a4->Type.VideoOutput.SupportsSdtvModes);
    v34 = v30;
    if ( v30 )
    {
      v35 = DMMVIDEOPRESENTTARGET::Initialize(v30, v31, v32, v33);
      LODWORD(v36) = v35;
      if ( v35 >= 0 )
      {
        v37 = DMMVIDEOPRESENTTARGETSET::AddTarget(this, v34);
        v36 = v37;
        if ( v37 >= 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)TargetById + 18);
          v38 = (struct DMMVIDEOPRESENTTARGET **)*((_QWORD *)TargetById + 56);
          v39 = (DMMVIDEOPRESENTTARGET *)((char *)v34 + 456);
          if ( *v38 == (struct DMMVIDEOPRESENTTARGET *)((char *)TargetById + 440) )
          {
            *(_QWORD *)v39 = (char *)TargetById + 440;
            *((_QWORD *)v34 + 58) = v38;
            *v38 = v39;
            *((_QWORD *)TargetById + 56) = v39;
            *((_QWORD *)v34 + 59) = TargetById;
            *((_DWORD *)v34 + 30) = *((_DWORD *)TargetById + 30);
            ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v34 + 64));
            return 0LL;
          }
LABEL_38:
          __fastfail(3u);
        }
        *(_DWORD *)a6 = -2147483646;
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v34 + 64));
        WdLogSingleEntry3(2LL, v6, this, v36);
      }
      else
      {
        *(_DWORD *)a6 = -2147483647;
        WdLogSingleEntry2(2LL, v6, v35);
        ReferenceCounted::Release((DMMVIDEOPRESENTTARGET *)((char *)v34 + 64));
      }
      return (unsigned int)v36;
    }
  }
  *(_DWORD *)a6 = 0x80000000;
  v40 = *((_QWORD *)this + 11);
  v41 = *(_QWORD *)(v40 + 8);
  if ( !v41 )
  {
    WdLogSingleEntry0(1LL);
    v41 = *(_QWORD *)(v40 + 8);
  }
  WdLogSingleEntry2(6LL, v6, *(_QWORD *)(v41 + 16));
  return 3221225495LL;
}
