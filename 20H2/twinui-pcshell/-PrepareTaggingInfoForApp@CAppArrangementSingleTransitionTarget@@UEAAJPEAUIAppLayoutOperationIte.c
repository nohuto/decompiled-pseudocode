/*
 * XREFs of ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C7B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1803C82E8 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x1803C84F0 (-_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA-AW4AppTransitionTargetSpecialFlags@@PE.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1803C8578 (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1803C859C (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1803C8784 (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 */

__int64 __fastcall CAppArrangementSingleTransitionTarget::PrepareTaggingInfoForApp(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  int v8; // eax
  struct IApplicationView *v9; // rdx
  unsigned int v10; // esi
  __int64 WindowForView; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  struct ITemporaryAppVisual *v15; // r8
  int v16; // eax
  __int128 v17; // xmm0
  int v18; // ecx
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v22; // [rsp+50h] [rbp+8h] BYREF
  ApplicationViewHelpers *v23; // [rsp+58h] [rbp+10h] BYREF

  memset_0((char *)this + 44, 0, 0x5CuLL);
  v23 = 0LL;
  *((_DWORD *)this + 10) = 4095;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v8 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, ApplicationViewHelpers **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &v23);
  v10 = v8;
  if ( v8 >= 0 )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v23,
                      v9);
    if ( WindowForView )
    {
      if ( a3 )
        *((_DWORD *)this + 68) = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a3 + 32LL))(a3);
      v12 = *(_QWORD *)this;
      *((_QWORD *)this + 7) = WindowForView;
      if ( (*(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *))(v12 + 72))(this) )
      {
        if ( a3 )
        {
          if ( CAppArrangementSingleTransitionTarget::_IsDragVisual(this) )
          {
            v13 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a3 + 56LL))(a3);
            if ( v13 )
            {
              v14 = *((_QWORD *)this + 7);
              if ( v14 != v13 )
              {
                *((_QWORD *)this + 35) = v14;
                *((_QWORD *)this + 7) = v13;
              }
            }
          }
        }
      }
      (*(void (__fastcall **)(CAppArrangementSingleTransitionTarget *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a3,
        a4);
      v16 = *((_DWORD *)this + 42);
      if ( v16 == 67 )
      {
        CAppArrangementSingleTransitionTarget::_PrepareTaggingForImmediateStoryboard(this, a2, a3);
      }
      else if ( v16 == 68 )
      {
        CAppArrangementSingleTransitionTarget::_PrepareTaggingForDelayedStoryboard(this, a2, v15);
      }
      v22 = 0;
      if ( CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v15, &v22) >= 0
        && v22
        && *((_DWORD *)this + 42) == 68 )
      {
        v17 = *(_OWORD *)((char *)this + 188);
        *(_OWORD *)((char *)this + 72) = v17;
        v18 = *((_DWORD *)this + 19);
        v19 = *((_DWORD *)this + 18);
        *(_OWORD *)((char *)this + 88) = v17;
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 20) -= v19;
        *((_DWORD *)this + 21) -= v18;
        *((_DWORD *)this + 19) -= v18;
      }
      if ( (CAppTransitionTargetBase::_GetSpecialTransitionInfo(this, v23) & 2) != 0 )
        *((_DWORD *)this + 11) |= 0x4000u;
    }
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return v10;
}
