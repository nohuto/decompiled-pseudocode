/*
 * XREFs of ?BindSizeToRectangle@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagRECT@@@Z @ 0x18023F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18023BB18 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802440A0 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::BindSizeToRectangle(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagRECT *a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  float v9[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF

  HolographicPositioner::_FindViewHostItem((char *)this - 120, &v11, a2);
  if ( !v11 )
  {
    v4 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x204,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070490LL);
    goto LABEL_10;
  }
  v12 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
         &v11,
         &v12);
  v4 = v5;
  if ( v5 >= 0 )
  {
    v9[0] = (float)a3->left;
    v9[1] = (float)a3->top;
    v9[2] = (float)(a3->right - a3->left);
    v9[3] = (float)(a3->bottom - a3->top);
    v5 = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 96LL))(v12, v9);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v4 = 0;
      goto LABEL_9;
    }
    v6 = 527LL;
  }
  else
  {
    v6 = 519LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
LABEL_10:
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v7)[2])(v7);
  }
  return v4;
}
