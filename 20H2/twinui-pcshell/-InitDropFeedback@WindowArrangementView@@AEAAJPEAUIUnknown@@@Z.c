/*
 * XREFs of ?InitDropFeedback@WindowArrangementView@@AEAAJPEAUIUnknown@@@Z @ 0x18040E248
 * Callers:
 *     ?InitView@WindowArrangementView@@AEAAJXZ @ 0x18040E4D0 (-InitView@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804212C4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1804222FC (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowArrangementView::InitDropFeedback(WindowArrangementView *this, struct IUnknown *a2)
{
  int Instance; // eax
  unsigned int v5; // ebx
  char v6; // di
  const struct _GUID *v7; // rcx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  IUnknown *punk; // [rsp+30h] [rbp-59h] BYREF
  void *v14; // [rsp+38h] [rbp-51h] BYREF
  __int64 v15[3]; // [rsp+40h] [rbp-49h] BYREF
  char v16; // [rsp+58h] [rbp-31h]
  __int64 v17; // [rsp+60h] [rbp-29h] BYREF
  struct IUnknown *v18; // [rsp+70h] [rbp-19h]
  _BYTE v19[40]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v20[40]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 24LL))(*((_QWORD *)this + 15), v20);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  Instance = CDropFeedback_CreateInstance(a2, v20, 0LL);
  v5 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3FF,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_19;
  }
  v15[1] = (__int64)&punk;
  v15[2] = (__int64)this;
  v6 = 1;
  v16 = 1;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v8 = CDropFeedbackList_CreateInstance(v7, &v14);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x408,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v15[0] = 0LL;
  v9 = *((_QWORD *)this + 15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL))(v9, v15);
  v5 = v10;
  if ( v10 >= 0 )
  {
    while ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15[0] + 24LL))(v15[0], 5LL, &v17) >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) == 4 )
      {
        (*(void (__fastcall **)(void *, __int64, __int64, _BYTE *))(*(_QWORD *)v14 + 72LL))(v14, 100LL, 1LL, v19);
      }
      else if ( !(unsigned int)SHIsSameObject(*((struct IUnknown **)this + 11), v18) )
      {
        (*(void (__fastcall **)(void *, _QWORD, struct IUnknown *, _BYTE *))(*(_QWORD *)v14 + 64LL))(
          v14,
          (unsigned int)v18,
          v18,
          v19);
      }
    }
    v10 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v14, 0LL);
    v5 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&punk);
      *((_QWORD *)this + 9) = punk;
      v6 = 0;
      v16 = 0;
      v5 = 0;
      goto LABEL_16;
    }
    v11 = 1060LL;
  }
  else
  {
    v11 = 1035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( v6 )
  {
    v16 = 0;
    IUnknown_SetSite(punk, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v5;
}
