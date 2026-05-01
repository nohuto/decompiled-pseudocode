/*
 * XREFs of ?SetPositioningAnchorRect@XamlLauncher@@UEAAJUtagRECT@@0@Z @ 0x18032E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x18032A624 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::SetPositioningAnchorRect(XamlLauncher *this, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 208);
  if ( !*v5 )
    return 2147943568LL;
  v14 = 0LL;
  v7 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(v5, (__int64 *)&v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 661LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_8;
  }
  v10 = *v14;
  *(struct tagRECT *)v11 = *a3;
  v12 = (__int128)*a2;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v10 + 24))(v14, &v12, v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 662LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v8;
}
