/*
 * XREFs of ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x180169030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003AFD4 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::DelayedInitialization(CAppViewManager *this)
{
  void *v2; // rbx
  int (__fastcall *v3)(void *, __int64 *); // rdi
  unsigned int i; // esi
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, _QWORD, GUID *, ApplicationViewHelpers **); // rdi
  struct IImmersiveApplication **v7; // r8
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, char *); // rsi
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  void *v15; // [rsp+38h] [rbp-18h] BYREF
  void *ppvOut[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF
  ApplicationViewHelpers *v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         ppvOut) >= 0 )
  {
    v21 = 0LL;
    v2 = ppvOut[0];
    v3 = *(int (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppvOut[0] + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( v3(v2, &v21) >= 0 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v18) >= 0 )
    {
      for ( i = 0; i < v18; ++i )
      {
        v20 = 0LL;
        v5 = v21;
        v6 = *(int (__fastcall **)(__int64, _QWORD, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v21 + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        if ( v6(v5, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v20) >= 0
          && ((*(int (__fastcall **)(ApplicationViewHelpers *, int *))(*(_QWORD *)v20 + 216LL))(v20, &v19) < 0 || !v19) )
        {
          v14 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
          if ( (int)ApplicationViewHelpers::GetApplicationFromView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v20,
                      (struct IApplicationView *)&v14,
                      v7) >= 0 )
            (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 4) + 32LL))(
              (char *)this + 32,
              v14,
              2LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v8 = IUnknown_QueryService(
         *((IUnknown **)this + 11),
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &GUID_e1a2097b_bd37_48bb_99d3_a3b80035fb57,
         &v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v15;
    v12 = *(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v15 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
    v8 = v12(v11, (char *)this + 152);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v9 = 0;
      goto LABEL_19;
    }
    v10 = 409LL;
  }
  else
  {
    v10 = 408LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v9;
}
