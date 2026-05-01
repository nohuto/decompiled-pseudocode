/*
 * XREFs of ?AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1803A6CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1803A2800 (-AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z.c)
 */

__int64 __fastcall CSwitchItemGrid::AddChild(CSwitchItemGrid *this, struct IMultitaskingViewElement *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v4 = (**(__int64 (__fastcall ***)(struct IMultitaskingViewElement *, GUID *, __int64 *))a2)(
         a2,
         &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 244LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, (char *)this + 848);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, *((_QWORD *)this + 109));
  v4 = CMultitaskingViewElementBase::AddChild(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 251LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v5;
}
