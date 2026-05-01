/*
 * XREFs of ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801D8A40
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18005D500 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18005D578 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAUITreeNode@ComposableShell@Internal@Windows@@PEAUITreeNodeEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@456@@Z @ 0x1801D58BC (--$InvokeAll@PEAVTreeNodeBase@ComposableShell@Internal@Windows@@PEAVNodeChangedEventArgs@234@@-$.c)
 *     ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x1801D5A1C (--$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@She.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CJumpViewExperienceManager::OnViewHidden(RTL_SRWLOCK *this, struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID Ptr; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  Ptr = this[37].Ptr;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceEventArgs,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,HSTRING__ *>(
         &v9,
         (HSTRING *)&Ptr);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 617LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_10;
  }
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::ITreeNode *,Windows::Internal::ComposableShell::ITreeNodeEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<Windows::Internal::ComposableShell::TreeNodeBase *,Windows::Internal::ComposableShell::NodeChangedEventArgs *>(
         this + 4,
         (__int64)&this[-8],
         v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 618LL;
    goto LABEL_5;
  }
  if ( HIDWORD(this[54].Ptr) == 3 )
  {
    v6 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)&this[50]);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  CSingleViewShellExperience::ShowBorder((__int64)&this[11], 0, 0LL, 0LL, 0);
  v4 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v4;
}
