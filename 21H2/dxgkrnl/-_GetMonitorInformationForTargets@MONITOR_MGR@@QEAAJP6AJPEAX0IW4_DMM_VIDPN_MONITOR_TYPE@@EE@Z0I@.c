/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C01AE150
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01ABB60 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C03B3920 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C004D070 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C01AE5F4 (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        MONITOR_MGR *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        unsigned int a4)
{
  __int64 v5; // rax
  unsigned int NextVideoPresentTarget; // ebx
  char v7; // r12
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _KTHREAD **v12; // rbp
  struct _KTHREAD **v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  char v24; // bp
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rdx
  MONITOR_MGR *v28; // rax
  char *v29; // rcx
  char *v30; // rdi
  char *v31; // rax
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // ebp
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  struct _KTHREAD **v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  int MonitorInstance; // eax
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rbx
  struct _KTHREAD *v52; // r8
  int v53; // [rsp+20h] [rbp-98h]
  int v54; // [rsp+28h] [rbp-90h]
  struct _KTHREAD **v55; // [rsp+50h] [rbp-68h] BYREF
  __int64 v56; // [rsp+58h] [rbp-60h] BYREF
  __int64 v57[3]; // [rsp+60h] [rbp-58h] BYREF
  struct DXGMONITOR *v58; // [rsp+C0h] [rbp+8h] BYREF
  int (__high *v59)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8); // [rsp+C8h] [rbp+10h]
  void *v60; // [rsp+D0h] [rbp+18h]
  unsigned int v61; // [rsp+D8h] [rbp+20h] BYREF

  v61 = a4;
  v60 = a3;
  v59 = a2;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v5 = *((_QWORD *)this + 3);
  v61 = -1;
  NextVideoPresentTarget = DmmGetNextVideoPresentTarget(*(void *const *)(v5 + 16), 0xFFFFFFFF, &v61);
  if ( (NextVideoPresentTarget & 0x80000000) != 0 )
    return NextVideoPresentTarget;
  while ( 1 )
  {
    v7 = 0;
    v8 = v61;
    v9 = 0;
    v10 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      goto LABEL_104;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v11 = *(_QWORD *)(v10 + 2792);
    if ( !v11 )
    {
      WdLogSingleEntry1(2LL, v10);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v10,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_104:
      NextVideoPresentTarget = -1071775742;
      goto LABEL_105;
    }
    v12 = *(struct _KTHREAD ***)(v11 + 104);
    if ( !v12 )
    {
      WdLogSingleEntry1(2LL, v10);
      NextVideoPresentTarget = -1071774923;
      goto LABEL_105;
    }
    v13 = v12 + 5;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v12 + 5));
    _InterlockedIncrement((volatile signed __int32 *)v12[15] + 18);
    v14 = (__int64)v12[15];
    v15 = *(_QWORD *)(v14 + 24);
    v57[0] = v14;
    if ( v15 == v14 + 24 )
      break;
    v16 = v15 - 8;
    if ( !v16 )
      break;
    while ( *(_DWORD *)(v16 + 24) != (_DWORD)v8 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 != v14 + 24 )
      {
        v16 = v17 - 8;
        if ( v16 )
          continue;
      }
      goto LABEL_98;
    }
    v18 = *(_QWORD *)(v16 + 40);
    if ( !v18 )
    {
      WdLogSingleEntry0(1LL);
      v18 = *(_QWORD *)(v16 + 40);
    }
    v19 = *(_QWORD *)(v18 + 88);
    v20 = *(_QWORD *)(v19 + 8);
    if ( !v20 )
    {
      WdLogSingleEntry0(1LL);
      v20 = *(_QWORD *)(v19 + 8);
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( *(_DWORD *)(v21 + 412) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v21 + 2792) + 16LL) + 2692LL) < 1105 )
    {
LABEL_25:
      v24 = 0;
      goto LABEL_26;
    }
    if ( *(_DWORD *)(v16 + 128) == -1 )
    {
      v22 = *(_DWORD *)(v16 + 408);
      if ( v22 == -1 )
      {
        v23 = *(_DWORD *)(v16 + 80);
        if ( v23 < 14 && v23 >= 4 || v23 < 0 || v23 > 3 && v23 != 14 )
          goto LABEL_25;
      }
      else if ( v22 != 1 )
      {
        goto LABEL_25;
      }
      v24 = 1;
    }
    else
    {
      v24 = 1;
    }
LABEL_26:
    if ( v14 )
    {
      v25 = _InterlockedDecrement((volatile signed __int32 *)(v14 + 72));
      if ( v25 )
      {
        if ( v25 < 0 )
        {
          v49 = v25;
          WdLogSingleEntry1(2LL, v25);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v49,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v14 != -64 )
      {
        (**(void (__fastcall ***)(__int64, __int64))(v14 + 64))(v14 + 64, 1LL);
      }
    }
    DXGFASTMUTEX::Release(v13);
    v26 = v61;
    if ( v61 == -1 )
      WdLogSingleEntry0(1LL);
    v55 = (struct _KTHREAD **)((char *)this + 80);
    if ( this == (MONITOR_MGR *)-80LL )
      WdLogSingleEntry0(1LL);
    DXGFASTMUTEX::Acquire((MONITOR_MGR *)((char *)this + 80));
    v28 = (MONITOR_MGR *)*((_QWORD *)this + 5);
    v29 = (char *)this + 40;
    if ( v28 == (MONITOR_MGR *)((char *)this + 40) )
      goto LABEL_40;
    v30 = (char *)v28 - 152;
    if ( !v28 )
      v30 = 0LL;
    if ( !v30 )
    {
LABEL_40:
      v32 = WdLogNewEntry5_WdTrace(v29, v27);
      *(_QWORD *)(v32 + 24) = v26;
      *(_QWORD *)(v32 + 32) = this;
      MUTEX_LOCK::~MUTEX_LOCK(&v55);
    }
    else
    {
      while ( *((_DWORD *)v30 + 45) != (_DWORD)v26 )
      {
        v31 = (char *)*((_QWORD *)v30 + 19);
        if ( v31 != v29 )
        {
          v30 = v31 - 152;
          if ( !v31 )
            v30 = 0LL;
          if ( v30 )
            continue;
        }
        goto LABEL_40;
      }
      v58 = (struct DXGMONITOR *)v30;
      if ( this == (MONITOR_MGR *)-80LL )
        WdLogSingleEntry0(1LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 10);
      v9 = *((_DWORD *)v30 + 78);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v61, 1, &v58);
      NextVideoPresentTarget = MonitorInstance;
      if ( MonitorInstance < 0 )
      {
        if ( MonitorInstance != -1073741275 )
        {
          WdLogSingleEntry2(2LL, v61, this);
          return NextVideoPresentTarget;
        }
      }
      else
      {
        v7 = 1;
      }
    }
    LOBYTE(v54) = v7;
    LOBYTE(v53) = v24;
    v33 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))v59)(
            *(_QWORD *)(*((_QWORD *)this + 3) + 16LL),
            v60,
            v61,
            v9,
            v53,
            v54);
    v34 = v61;
    NextVideoPresentTarget = v33;
    if ( v61 == -1 || v33 < 0 )
      return NextVideoPresentTarget;
    v35 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
    v61 = -1;
    if ( !v35 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      return (unsigned int)-1071775742;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v35 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 168)) )
    {
      WdLogSingleEntry0(1LL);
    }
    v36 = *(_QWORD *)(v35 + 2792);
    if ( !v36 )
    {
      WdLogSingleEntry1(2LL, v35);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v35,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1071775742;
    }
    v37 = *(_QWORD *)(v36 + 104);
    if ( !v37 )
    {
      WdLogSingleEntry1(2LL, v35);
      return (unsigned int)-1071774923;
    }
    v38 = (struct _KTHREAD **)(v37 + 40);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v37 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v37 + 120) + 72LL));
    v39 = *(_QWORD *)(v37 + 120);
    v56 = v39;
    if ( v34 == -1 )
    {
      v50 = *(_QWORD *)(v39 + 24);
      if ( v50 == v39 + 24 )
        v45 = 0LL;
      else
        v45 = v50 - 8;
      goto LABEL_58;
    }
    v40 = *(_QWORD *)(v39 + 24);
    v41 = v39 + 24;
    if ( v40 == v39 + 24 )
    {
LABEL_91:
      v42 = 0LL;
    }
    else
    {
      v42 = v40 - 8;
      if ( v42 )
      {
        while ( *(_DWORD *)(v42 + 24) != v34 )
        {
          v43 = *(_QWORD *)(v42 + 8);
          if ( v43 == v41 )
            goto LABEL_91;
          v42 = v43 - 8;
          if ( !v42 )
            goto LABEL_92;
        }
        goto LABEL_56;
      }
    }
LABEL_92:
    WdLogSingleEntry0(1LL);
LABEL_56:
    v44 = *(_QWORD *)(v42 + 8);
    v45 = v44 - 8;
    if ( v44 == v41 )
      v45 = 0LL;
LABEL_58:
    if ( !v45 )
    {
      auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v56);
      DXGFASTMUTEX::Release(v38);
      return (unsigned int)-1073741275;
    }
    v61 = *(_DWORD *)(v45 + 24);
    if ( v39 )
    {
      v46 = _InterlockedDecrement((volatile signed __int32 *)(v39 + 72));
      if ( v46 )
      {
        if ( v46 < 0 )
        {
          v51 = v46;
          WdLogSingleEntry1(2LL, v46);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v51,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else if ( v39 != -64 )
      {
        (**(void (__fastcall ***)(__int64, __int64))(v39 + 64))(v39 + 64, 1LL);
      }
    }
    DXGFASTMUTEX::Release(v38);
  }
LABEL_98:
  v52 = v12[1];
  if ( !v52 )
  {
    WdLogSingleEntry0(1LL);
    v52 = v12[1];
  }
  WdLogSingleEntry2(3LL, v8, *((_QWORD *)v52 + 2));
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(v57);
  DXGFASTMUTEX::Release(v12 + 5);
  NextVideoPresentTarget = -1071774971;
LABEL_105:
  WdLogSingleEntry3(2LL, v61, this, (int)NextVideoPresentTarget);
  return NextVideoPresentTarget;
}
