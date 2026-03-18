/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0113ED0
 * Callers:
 *     ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EC020 (-_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C02ED54C (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C0047B24 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z @ 0x1C014DE4C (-DmmGetNextVideoPresentTarget@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        unsigned int a4)
{
  void *const *Owner; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int NextVideoPresentTarget; // ebx
  char v9; // r12
  __int64 v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  char v28; // bp
  void (__fastcall ***v29)(_QWORD, __int64); // rcx
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  ULONG *p_Contention; // rcx
  MONITOR_MGR *v38; // rax
  char *v39; // rdi
  char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // ebp
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r8
  void (__fastcall ***v60)(_QWORD, __int64); // rcx
  int v61; // ebx
  int MonitorInstance; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // [rsp+20h] [rbp-78h]
  int v96; // [rsp+28h] [rbp-70h]
  __int64 v97; // [rsp+40h] [rbp-58h] BYREF
  __int64 v98; // [rsp+48h] [rbp-50h] BYREF
  struct DXGMONITOR *v99; // [rsp+A0h] [rbp+8h] BYREF
  int (__high *v100)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8); // [rsp+A8h] [rbp+10h]
  void *v101; // [rsp+B0h] [rbp+18h]
  unsigned int v102; // [rsp+B8h] [rbp+20h] BYREF

  v102 = a4;
  v101 = a3;
  v100 = a2;
  if ( !a2 )
  {
    v67 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v67);
  }
  Owner = (void *const *)this->Owner;
  v102 = -1;
  NextVideoPresentTarget = DmmGetNextVideoPresentTarget(Owner[2], 0xFFFFFFFF, &v102);
  if ( NextVideoPresentTarget < 0 )
    return (unsigned int)NextVideoPresentTarget;
  while ( 1 )
  {
    v9 = 0;
    v10 = v102;
    v11 = 0;
    v12 = *((_QWORD *)this->Owner + 2);
    if ( !v12 )
    {
      v94 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v94 + 24) = 0LL;
      goto LABEL_114;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 168)) )
    {
      v68 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v68);
    }
    v13 = *(_QWORD *)(v12 + 2672);
    if ( !v13 )
    {
      v94 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v94 + 24) = v12;
LABEL_114:
      WdLogEvent5_WdError(v94);
      NextVideoPresentTarget = -1071775742;
      goto LABEL_115;
    }
    v14 = *(_QWORD *)(v13 + 88);
    if ( !v14 )
    {
      v93 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v93 + 24) = v12;
      WdLogEvent5_WdError(v93);
      NextVideoPresentTarget = -1071774923;
      goto LABEL_115;
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v14 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
    v18 = *(_QWORD *)(v14 + 80);
    v19 = *(_QWORD *)(v18 + 24);
    v98 = v18;
    if ( v19 == v18 + 24 )
    {
      v20 = 0LL;
    }
    else
    {
      v20 = v19 - 8;
      if ( !v20 )
        break;
      while ( *(_DWORD *)(v20 + 24) != (_DWORD)v10 )
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 == v18 + 24 )
          v20 = 0LL;
        else
          v20 = v21 - 8;
        if ( !v20 )
          goto LABEL_108;
      }
    }
    if ( !v20 )
      break;
    v22 = *(_QWORD *)(v20 + 40);
    if ( !v22 )
    {
      v69 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v69);
      v22 = *(_QWORD *)(v20 + 40);
    }
    v23 = *(_QWORD *)(v22 + 88);
    v24 = *(_QWORD *)(v23 + 8);
    if ( !v24 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v70);
      v24 = *(_QWORD *)(v23 + 8);
    }
    v25 = *(_QWORD *)(v24 + 16);
    if ( *(_DWORD *)(v25 + 324) == 21299 && *(int *)(*(_QWORD *)(*(_QWORD *)(v25 + 2672) + 16LL) + 2572LL) < 1105 )
    {
LABEL_27:
      v28 = 0;
      goto LABEL_28;
    }
    if ( *(_DWORD *)(v20 + 128) == -1 )
    {
      v26 = *(_DWORD *)(v20 + 408);
      if ( v26 == -1 )
      {
        v27 = *(_DWORD *)(v20 + 80);
        if ( v27 >= 4 && v27 < 14 || v27 < 0 || v27 > 3 && v27 != 14 )
          goto LABEL_27;
      }
      else if ( v26 != 1 )
      {
        goto LABEL_27;
      }
      v28 = 1;
    }
    else
    {
      v28 = 1;
    }
LABEL_28:
    if ( v18 )
    {
      v29 = (void (__fastcall ***)(_QWORD, __int64))(v18 + 64);
      v30 = _InterlockedDecrement((volatile signed __int32 *)(v18 + 72));
      if ( v30 )
      {
        if ( v30 < 0 )
        {
          v71 = WdLogNewEntry5_WdError(v29, v15);
          *(_QWORD *)(v71 + 24) = v30;
          WdLogEvent5_WdError(v71);
        }
      }
      else if ( v29 )
      {
        (**v29)(v29, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40), v15);
    v33 = v102;
    if ( v102 == -1 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v72);
    }
    if ( this == (struct _FAST_MUTEX *)-168LL )
    {
      v73 = WdLogNewEntry5_WdAssertion(v32, v31);
      WdLogEvent5_WdAssertion(v73);
    }
    KeAcquireGuardedMutex(this + 3);
    p_Contention = &this[2].Contention;
    v38 = *(MONITOR_MGR **)&this[2].Contention;
    if ( v38 == (MONITOR_MGR *)&this[2].Contention )
      goto LABEL_42;
    v39 = (char *)v38 - 16;
    if ( !v38 )
      v39 = 0LL;
    if ( !v39 )
    {
LABEL_42:
      v41 = WdLogNewEntry5_WdTrace(p_Contention, v34, v35, v36);
      *(_QWORD *)(v41 + 24) = v33;
      *(_QWORD *)(v41 + 32) = this;
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v76 = WdLogNewEntry5_WdAssertion(v43, v42);
        WdLogEvent5_WdAssertion(v76);
      }
      KeReleaseGuardedMutex(this + 3);
    }
    else
    {
      while ( *((_DWORD *)v39 + 11) != (_DWORD)v33 )
      {
        v40 = (char *)*((_QWORD *)v39 + 2);
        if ( v40 != (char *)p_Contention )
        {
          v39 = v40 - 16;
          if ( !v40 )
            v39 = 0LL;
          if ( v39 )
            continue;
        }
        goto LABEL_42;
      }
      v99 = (struct DXGMONITOR *)v39;
      if ( this == (struct _FAST_MUTEX *)-168LL )
      {
        v74 = WdLogNewEntry5_WdAssertion(p_Contention, v34);
        WdLogEvent5_WdAssertion(v74);
      }
      KeReleaseGuardedMutex(this + 3);
      v11 = *((_DWORD *)v39 + 108);
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v102, 1, &v99);
      NextVideoPresentTarget = MonitorInstance;
      if ( MonitorInstance < 0 )
      {
        if ( MonitorInstance != -1073741275 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
          v75[3] = v102;
          goto LABEL_116;
        }
      }
      else
      {
        v9 = 1;
      }
    }
    LOBYTE(v96) = v9;
    LOBYTE(v95) = v28;
    v44 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))v100)(
            *((_QWORD *)this->Owner + 2),
            v101,
            v102,
            v11,
            v95,
            v96);
    v47 = v102;
    NextVideoPresentTarget = v44;
    if ( v102 == -1 || v44 < 0 )
      return (unsigned int)NextVideoPresentTarget;
    v48 = *((_QWORD *)this->Owner + 2);
    v102 = -1;
    if ( !v48 )
    {
      v83 = WdLogNewEntry5_WdError(v46, v45);
      *(_QWORD *)(v83 + 24) = 0LL;
      WdLogEvent5_WdError(v83);
      return (unsigned int)-1071775742;
    }
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v48 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v48 + 168)) )
    {
      v77 = WdLogNewEntry5_WdAssertion(v46, v45);
      WdLogEvent5_WdAssertion(v77);
    }
    v49 = *(_QWORD *)(v48 + 2672);
    if ( !v49 )
    {
      v82 = WdLogNewEntry5_WdError(v46, v45);
      *(_QWORD *)(v82 + 24) = v48;
      WdLogEvent5_WdError(v82);
      return (unsigned int)-1071775742;
    }
    v50 = *(_QWORD *)(v49 + 88);
    if ( !v50 )
    {
      v81 = WdLogNewEntry5_WdError(v46, v45);
      *(_QWORD *)(v81 + 24) = v48;
      WdLogEvent5_WdError(v81);
      return (unsigned int)-1071774923;
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v50 + 40));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v50 + 80) + 72LL));
    v53 = *(_QWORD *)(v50 + 80);
    v97 = v53;
    if ( v47 != -1 )
    {
      v54 = *(_QWORD *)(v53 + 24);
      v55 = v53 + 24;
      if ( v54 == v53 + 24 )
      {
        v56 = 0LL;
      }
      else
      {
        v56 = v54 - 8;
        if ( !v56 )
        {
LABEL_102:
          v79 = WdLogNewEntry5_WdAssertion(v52, v51);
          WdLogEvent5_WdAssertion(v79);
LABEL_62:
          v58 = *(_QWORD *)(v56 + 8);
          v59 = v58 - 8;
          if ( v58 == v55 )
            v59 = 0LL;
          goto LABEL_64;
        }
        while ( *(_DWORD *)(v56 + 24) != v47 )
        {
          v57 = *(_QWORD *)(v56 + 8);
          if ( v57 == v55 )
            v56 = 0LL;
          else
            v56 = v57 - 8;
          if ( !v56 )
            goto LABEL_102;
        }
      }
      if ( v56 )
        goto LABEL_62;
      goto LABEL_102;
    }
    v78 = *(_QWORD *)(v53 + 24);
    v51 = v53 + 24;
    v59 = 0LL;
    if ( v78 != v53 + 24 )
      v59 = v78 - 8;
LABEL_64:
    if ( !v59 )
    {
      auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v97, v51);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v65);
      return (unsigned int)-1073741275;
    }
    v102 = *(_DWORD *)(v59 + 24);
    if ( v53 )
    {
      v60 = (void (__fastcall ***)(_QWORD, __int64))(v53 + 64);
      v61 = _InterlockedDecrement((volatile signed __int32 *)(v53 + 72));
      if ( v61 )
      {
        if ( v61 < 0 )
        {
          v80 = WdLogNewEntry5_WdError(v60, v51);
          *(_QWORD *)(v80 + 24) = v61;
          WdLogEvent5_WdError(v80);
        }
      }
      else if ( v60 )
      {
        (**v60)(v60, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v50 + 40), v51);
  }
LABEL_108:
  v86 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v86 + 24) = v10;
  v87 = *(_QWORD *)(v14 + 8);
  if ( !v87 )
  {
    v88 = WdLogNewEntry5_WdAssertion(v85, v84);
    WdLogEvent5_WdAssertion(v88);
    v87 = *(_QWORD *)(v14 + 8);
  }
  *(_QWORD *)(v86 + 32) = *(_QWORD *)(v87 + 16);
  WdLogEvent5_WdWarning(v86);
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v98, v89);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v14 + 40), v90);
  NextVideoPresentTarget = -1071774971;
LABEL_115:
  v75 = (_QWORD *)WdLogNewEntry5_WdError(v92, v91);
  v75[3] = v102;
  v75[5] = NextVideoPresentTarget;
LABEL_116:
  v75[4] = this;
  WdLogEvent5_WdError(v75);
  return (unsigned int)NextVideoPresentTarget;
}
