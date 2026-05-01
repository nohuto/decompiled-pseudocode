/*
 * XREFs of _lambda_64af9837b8ba3858f1e82a38d8cf173b_::operator() @ 0x180381554
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___::RunTask @ 0x180381990 (CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___--RunTask.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_64af9837b8ba3858f1e82a38d8cf173b_::operator()(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
         a2,
         2LL,
         &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
         &v8) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
LABEL_6:
    v5 = 0;
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
         a2,
         2LL,
         &GUID_389221b7_bf28_4d25_9501_b4491d822be1,
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 48LL))(
           v8,
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 8),
           *(unsigned int *)(a1 + 16));
    if ( v5 >= 0 )
      goto LABEL_6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v5;
}
