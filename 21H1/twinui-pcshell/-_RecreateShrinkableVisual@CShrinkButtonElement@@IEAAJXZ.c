/*
 * XREFs of ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x18038E6A0
 * Callers:
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18038E8E0 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShrinkButtonElement::_RecreateShrinkableVisual(CShrinkButtonElement *this)
{
  int v2; // eax
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // eax
  int v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h] BYREF
  int v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v2 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v3 = *((_QWORD *)this + 30);
  *(_QWORD *)v10 = 0LL;
  LODWORD(v11) = v2;
  HIDWORD(v11) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v3 + 112LL))(
         v3,
         *((_QWORD *)this + 11),
         v11,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         v10);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 31) + 192LL))(
           *((_QWORD *)this + 31),
           *(_QWORD *)v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      v8 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      v11 = 0LL;
      v12 = v7;
      v13 = v8;
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(**(_QWORD **)v10 + 24LL))(
             *(_QWORD *)v10,
             &v11,
             0LL,
             0LL);
      v5 = v4;
      if ( v4 >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 33, (__int64 *)v10);
        LODWORD(v11) = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
        HIDWORD(v11) = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
        v5 = 0;
        *((_QWORD *)this + 32) = v11;
        goto LABEL_9;
      }
      v6 = 47LL;
    }
    else
    {
      v6 = 45LL;
    }
  }
  else
  {
    v6 = 43LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\shrinkbuttonelement.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v10);
  return v5;
}
