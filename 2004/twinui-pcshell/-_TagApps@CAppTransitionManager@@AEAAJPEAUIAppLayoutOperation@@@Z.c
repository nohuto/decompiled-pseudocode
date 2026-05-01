/*
 * XREFs of ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803C6C60
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C4EA0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1CAppTransitionTagger@@QEAA@XZ @ 0x1803C4DA8 (--1CAppTransitionTagger@@QEAA@XZ.c)
 *     ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1803C69B8 (-_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1803C6D84 (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_TagApps(CAppTransitionManager *this, struct IAppLayoutOperation *a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ebp
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int i; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  struct IAppLayoutOperationItem *v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 23);
  v4 = *((_DWORD *)this + 75);
  v13 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, (char *)this + 264, v4);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v11);
  v7 = v6;
  if ( v6 >= 0 )
  {
    for ( i = 0; i < v11; ++i )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
      if ( (*(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, struct IAppLayoutOperationItem **))(*(_QWORD *)a2 + 32LL))(
             a2,
             i,
             &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
             &v12) >= 0 )
        CAppTransitionManager::_PrepareTaggingInfoForApp(this, v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
    if ( *((_DWORD *)this + 71) == 1 && !*((_BYTE *)this + 281) )
      CAppTransitionManager::_TagBuffer(this, a2);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  CAppTransitionTagger::~CAppTransitionTagger((CAppTransitionTagger *)&v13);
  return v7;
}
