/*
 * XREFs of _lambda_7690576b3c646601b77e641f2b19e007_::operator() @ 0x1800EEC68
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x18046D810 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_7690576b3c646601b77e641f2b19e007_::operator()(
        __int64 **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v9; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v15 = 0LL;
  v9 = *v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
          v9,
          *a1[1],
          a2,
          64LL,
          &v15,
          0LL,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 40LL))(v15, a3);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 56LL))(v15, a4);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v11 = 0;
        goto LABEL_9;
      }
      v12 = 506LL;
    }
    else
    {
      v12 = 505LL;
    }
  }
  else
  {
    v12 = 504LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v10);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v11;
}
