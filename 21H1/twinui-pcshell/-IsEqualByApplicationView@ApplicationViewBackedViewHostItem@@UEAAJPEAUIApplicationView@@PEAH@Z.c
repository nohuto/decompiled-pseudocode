/*
 * XREFs of ?IsEqualByApplicationView@ApplicationViewBackedViewHostItem@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1802385A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewBackedViewHostItem::IsEqualByApplicationView(
        ApplicationViewBackedViewHostItem *this,
        struct IApplicationView *a2,
        int *a3)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b,
    &v13);
  v5 = v13;
  if ( !v13 )
    goto LABEL_8;
  v12 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v7 = v6(v5, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v12 + 104LL))(v12, *((_QWORD *)this + 23), a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 614LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  v9 = 612LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  return v8;
}
