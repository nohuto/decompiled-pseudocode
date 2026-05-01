/*
 * XREFs of ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F3E60
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x1803E4568 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801292F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180362EA4 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E4474 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChrome@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChrome@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803F35D0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_1803F35D0.c)
 *     ??0JointDivider@@QEAA@XZ @ 0x1803F3670 (--0JointDivider@@QEAA@XZ.c)
 */

__int64 __fastcall JointDivider_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  JointDivider *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  JointDivider *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // r10
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF
  JointDivider *v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v15);
  v15 = 0LL;
  v5 = (JointDivider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>((void **)&v16);
    v6 = -2147024882;
    v7 = 351LL;
    v8 = 2147942414LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
      (const char *)v8);
    goto LABEL_6;
  }
  v9 = JointDivider::JointDivider(v5);
  v16 = v9;
  *((_QWORD *)v9 + 11) = a1;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(
    (__int64)v9,
    v10);
  v15 = v11;
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v16);
  v12 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChrome>>(
          v15,
          &GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f,
          a3);
  v6 = v12;
  if ( v12 < 0 )
  {
    v8 = (unsigned int)v12;
    v7 = 352LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease(&v15);
  return v6;
}
