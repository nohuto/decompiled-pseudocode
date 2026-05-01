/*
 * XREFs of ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x18040E81C
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1804102A8 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x18040D628 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x180425748 (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowArrangementView::InitDragVisual(
        WindowArrangementView *this,
        struct IUnknown *a2,
        struct tagRECT *a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  char v14; // si
  int v15; // eax
  __int64 v16; // rdx
  HRESULT Service; // eax
  struct IAppLayout **v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  IUnknown *v21; // rax
  IUnknown *v22; // rbx
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h] BYREF
  void *ppvOut[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  IUnknown **p_punk; // [rsp+50h] [rbp-10h]
  char v29; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  IUnknown *punk; // [rsp+90h] [rbp+30h] BYREF

  v9 = *((_DWORD *)this + 72);
  if ( v9 == 2 )
  {
    v10 = 6;
  }
  else if ( v9 == 3 )
  {
    v10 = 5;
  }
  else
  {
    v10 = *((_DWORD *)this + 73) != 0 ? 1 : 4;
  }
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v12 = CDragVisual::CreateInstance(v10, (char *)this + 48, v11, &punk);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_33;
  }
  IUnknown_SetSite(punk, a2);
  p_punk = &punk;
  v14 = 1;
  v29 = 1;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v15 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &v25);
  v13 = v15;
  if ( v15 < 0 )
  {
    v16 = 1099LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_31;
  }
  ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[5].Release)(punk, v25);
  ((void (__fastcall *)(IUnknown *))punk->lpVtbl[6].QueryInterface)(punk);
  v15 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[7].Release)(punk);
  v13 = v15;
  if ( v15 < 0 )
  {
    v16 = 1103LL;
    goto LABEL_12;
  }
  if ( a3 )
  {
    v27 = (__int128)*a3;
    ((void (__fastcall *)(IUnknown *, __int128 *))punk->lpVtbl[2].QueryInterface)(punk, &v27);
  }
  ((void (__fastcall *)(IUnknown *, _QWORD))punk->lpVtbl[1].Release)(punk, *a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              ppvOut);
  v13 = Service;
  if ( Service >= 0 )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v19 = AppLayoutHelpers::BuildSingleViewLayout(
            *((AppLayoutHelpers **)this + 11),
            (struct IApplicationView *)&v24,
            v18);
    v13 = v19;
    if ( v19 >= 0 )
    {
      v19 = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagRECT *))punk->lpVtbl[3].QueryInterface)(
              punk,
              v24,
              a5);
      v13 = v19;
      if ( v19 >= 0 )
      {
        if ( *((_DWORD *)this + 72) != 2 )
          ((void (__fastcall *)(IUnknown *, _QWORD, _QWORD))punk->lpVtbl[2].AddRef)(punk, *a4, 0LL);
        v21 = (IUnknown *)*((_QWORD *)this + 10);
        v22 = punk;
        if ( v21 != punk )
        {
          if ( punk )
          {
            ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
            v21 = (IUnknown *)*((_QWORD *)this + 10);
          }
          *(_QWORD *)&v27 = v21;
          *((_QWORD *)this + 10) = v22;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        }
        v14 = 0;
        v29 = 0;
        v13 = 0;
        goto LABEL_29;
      }
      v20 = 1117LL;
    }
    else
    {
      v20 = 1115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v19);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x458,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)Service);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  if ( v14 )
  {
    v29 = 0;
    ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[1].AddRef)(punk, 4LL);
    IUnknown_SetSite(punk, 0LL);
  }
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v13;
}
