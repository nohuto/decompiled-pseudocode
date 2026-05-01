/*
 * XREFs of ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180099EE8
 * Callers:
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18009672C (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     BaseTrayFlyoutExperienceManager_CreateInstanceWithTest @ 0x18009AEEC (BaseTrayFlyoutExperienceManager_CreateInstanceWithTest.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MeetNowExperienceManager::RuntimeClassInitialize(
        MeetNowExperienceManager *this,
        struct IServiceProvider *a2)
{
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  int InstanceWithTest; // ebx
  __int64 v8; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)this + 56;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  InstanceWithTest = BaseTrayFlyoutExperienceManager_CreateInstanceWithTest(a2, v5, v6, v4);
  if ( InstanceWithTest < 0 )
  {
    v8 = 90LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)InstanceWithTest);
    return (unsigned int)InstanceWithTest;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, (__int64)this);
  *(_QWORD *)(*(_QWORD *)v4 + 384LL) = ((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
  *(_BYTE *)(*(_QWORD *)v4 + 465LL) = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  InstanceWithTest = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
                       a2,
                       &IID_IImmersiveWindowMessageService,
                       &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                       (char *)this + 64);
  if ( InstanceWithTest < 0 )
  {
    v8 = 96LL;
    goto LABEL_3;
  }
  InstanceWithTest = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *))(**((_QWORD **)this + 8) + 24LL))(
                       *((_QWORD *)this + 8),
                       0LL,
                       (char *)this + 24,
                       (char *)this + 400);
  if ( InstanceWithTest < 0 )
  {
    v8 = 97LL;
    goto LABEL_3;
  }
  return 0LL;
}
