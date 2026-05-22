/*
 * XREFs of ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800B0CE0
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800B40E0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x18003ACBC (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800B07DC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800B234C (-ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::ProcessCursorPosMessage(__int64 a1, __int64 a2, unsigned int *a3)
{
  Win32kInterop *v4; // r14
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+60h] [rbp+30h] BYREF

  v18 = a1;
  v4 = Win32kInterop::s_pInterop;
  InputETW::Win32kInterop::ReceivedCursorPosMessage(a3[2]);
  InputTraceLogging::ISM::ReceiveCursorPos(*((_QWORD *)a3 + 2), (const struct tagPOINT *)a3);
  v18 = 0LL;
  v19 = 0LL;
  v5 = *((_QWORD *)v4 + 6);
  v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 72LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v19);
  v7 = v6(v5, &v19);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1010LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = a3[2];
  if ( v8 )
  {
    if ( !Win32kInterop::IsDeviceAttached(v4, v8, 1) )
      goto LABEL_11;
    v12 = v19;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v19 + 56LL);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
    v14 = v13(v12, a3[2], 1LL, &v18);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1024LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  else
  {
    v9 = v19;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 40LL);
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
    v11 = v10(v9, &v18);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1014LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
  }
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, *a3, a3[1]);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1027LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v15);
LABEL_11:
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v19);
  return Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
}
