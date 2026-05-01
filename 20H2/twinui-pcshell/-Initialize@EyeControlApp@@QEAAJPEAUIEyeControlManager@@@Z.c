/*
 * XREFs of ?Initialize@EyeControlApp@@QEAAJPEAUIEyeControlManager@@@Z @ 0x180479550
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1803711A4 (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x180467A6C (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x180467B48 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EyeControlApp::Initialize(EyeControlApp *this, struct IEyeControlManager *a2)
{
  _QWORD *v4; // r14
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int EndpointHost; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  HLOCAL hMem; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v19; // [rsp+58h] [rbp-B0h]
  wchar_t v20[264]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  v16 = 0LL;
  hMem = 0LL;
  SharedMessagePortRefPtr::SecurityShim_SharedMessagePortSecurity(&hMem);
  v18[1] = &hMem;
  v19 = 1;
  v4 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
  v5 = CoreUICreate((char *)this + 8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
    EndpointHost = CoreUICallCreateEndpointHost(*v4, (char *)this + 16, (char *)this + 24);
    v6 = EndpointHost;
    if ( EndpointHost >= 0 )
    {
      v10 = *v4;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
      v11 = (*(__int64 (__fastcall **)(__int64, HLOCAL, char *))(*(_QWORD *)v10 + 64LL))(v10, hMem, (char *)this + 32);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *, const void *, int), EyeControlApp *, _QWORD, char *))(*(_QWORD *)*v4 + 96LL))(
                *v4,
                EyeControlApp::RawProc,
                this,
                *((_QWORD *)this + 4),
                (char *)this + 40);
        v6 = v12;
        if ( v12 >= 0 )
        {
          v13 = *v4;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
          v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v16);
          v6 = v14;
          if ( v14 >= 0 )
          {
            memset_0(v20, 0, 0x208uLL);
            GetDesktopUniqueName(L"System\\EyeControlUI", v20, 0x104u);
            if ( (*(int (__fastcall **)(__int64, wchar_t *, __int64, _QWORD *))(*(_QWORD *)v16 + 24LL))(
                   v16,
                   v20,
                   1LL,
                   v18) >= 0
              && v18[0] )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 160LL))(*v4);
              (*(void (__fastcall **)(__int64, wchar_t *, __int64))(*(_QWORD *)v16 + 48LL))(v16, v20, 1LL);
            }
            v6 = (*(__int64 (__fastcall **)(__int64, wchar_t *, _QWORD, __int64))(*(_QWORD *)v16 + 40LL))(
                   v16,
                   v20,
                   *((_QWORD *)this + 5),
                   1LL);
            if ( v6 == -2018375677 )
              v6 = 0;
            if ( v6 >= 0 )
            {
              *((_QWORD *)this + 7) = a2;
              *((_BYTE *)this + 64) = 1;
              v6 = 0;
              goto LABEL_20;
            }
            v7 = (unsigned int)v6;
            v8 = 56LL;
          }
          else
          {
            v7 = (unsigned int)v14;
            v8 = 33LL;
          }
        }
        else
        {
          v7 = (unsigned int)v12;
          v8 = 32LL;
        }
      }
      else
      {
        v7 = (unsigned int)v11;
        v8 = 31LL;
      }
    }
    else
    {
      v7 = (unsigned int)EndpointHost;
      v8 = 30LL;
    }
  }
  else
  {
    v7 = (unsigned int)v5;
    v8 = 29LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\input\\ec\\messaging\\lib\\ecapp.cpp",
    (const char *)v7);
LABEL_20:
  LocalFree(hMem);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)v6;
}
