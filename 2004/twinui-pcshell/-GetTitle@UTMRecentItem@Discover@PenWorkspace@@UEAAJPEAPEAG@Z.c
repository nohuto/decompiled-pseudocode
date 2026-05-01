/*
 * XREFs of ?GetTitle@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAPEAG@Z @ 0x180224F60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800632C0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::GetTitle(
        PenWorkspace::Discover::UTMRecentItem *this,
        unsigned __int16 **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  PCWSTR StringRawBuffer; // rax
  int v11; // eax
  unsigned __int16 *v12; // rax
  unsigned __int16 *v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HSTRING string; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+70h] [rbp+30h] BYREF

  v19 = 0LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v5 = v4(v3, &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    string = 0LL;
    v7 = v19;
    v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v9 = v8(v7, &string);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
              (LPVOID *)&v14,
              (__int64)StringRawBuffer,
              0xFFFFFFFFFFFFFFFFuLL);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v12 = v14;
        v14 = 0LL;
        v16 = 0LL;
        v15 = 0LL;
        *a2 = v12;
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6A,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
          (const char *)(unsigned int)v11);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
        (const char *)(unsigned int)v9);
    }
    WindowsDeleteString(string);
    string = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return v6;
}
