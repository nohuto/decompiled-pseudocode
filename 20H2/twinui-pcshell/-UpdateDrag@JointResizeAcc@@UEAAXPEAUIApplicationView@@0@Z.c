/*
 * XREFs of ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x18041F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18031A97C (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x18041F028 (-RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180471B90 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

void __fastcall JointResizeAcc::UpdateDrag(wchar_t **this, struct IApplicationView *a2, struct IApplicationView *a3)
{
  unsigned __int16 **v6; // r8
  int ViewTitle; // eax
  unsigned __int16 **v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  int v11[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
  v15 = -1LL;
  v16 = -1LL;
  ViewTitle = ApplicationViewHelpers::GetViewTitle(a2, (struct IApplicationView *)&v14, v6);
  if ( ViewTitle >= 0 )
  {
    *(_QWORD *)v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
    v12 = -1LL;
    v13 = -1LL;
    v9 = ApplicationViewHelpers::GetViewTitle(a3, (struct IApplicationView *)v11, v8);
    if ( v9 >= 0 )
    {
      v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
             this + 10,
             &_ImageBase,
             2004LL);
      if ( v9 >= 0 )
      {
        JointResizeAcc::RaisePropertyChangeNotification((IRawElementProviderSimple *)this - 2, 30139);
        JointResizeAcc::RaisePropertyChangeNotification((IRawElementProviderSimple *)this - 2, 30140);
        goto LABEL_9;
      }
      v10 = 172LL;
    }
    else
    {
      v10 = 166LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xA3,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
    (const char *)(unsigned int)ViewTitle);
LABEL_10:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
}
