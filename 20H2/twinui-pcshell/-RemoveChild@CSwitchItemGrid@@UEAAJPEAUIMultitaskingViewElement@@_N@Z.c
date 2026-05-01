/*
 * XREFs of ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1803A76E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1803A3490 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?RemoveItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z @ 0x1803B7AD8 (-RemoveItem@GridLayout@@QEAAJAEBV-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z.c)
 */

__int64 __fastcall CSwitchItemGrid::RemoveChild(CSwitchItemGrid *this, struct IUnknown *a2, char a3)
{
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932,
         &v12);
  if ( v6 < 0 )
  {
    v7 = 259LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, 0LL);
  if ( *((_QWORD *)this + 103) )
  {
    v6 = GridLayout::RemoveItem((char *)this + 768, &v12);
    if ( v6 < 0 )
    {
      v7 = 266LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  v8 = CMultitaskingViewElementBase::RemoveChild((struct IUnknown **)this, a2, a3);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v9;
}
