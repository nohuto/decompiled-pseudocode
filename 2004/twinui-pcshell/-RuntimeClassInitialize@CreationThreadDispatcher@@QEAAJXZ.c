/*
 * XREFs of ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1801EAED8
 * Callers:
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1801E7118 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18004A94C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgileRef@01@@Z @ 0x1801E6BCC (--$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgile.c)
 *     ??$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAsyncCallbackDispatcher@@@Z @ 0x1801E71A0 (--$MakeAndInitialize@VNonAgileDispatcher@@UIAsyncCallbackDispatcher@@$$V@Details@WRL@Microsoft@@.c)
 */

__int64 __fastcall CreationThreadDispatcher::RuntimeClassInitialize(CreationThreadDispatcher *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 *v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<NonAgileDispatcher,IAsyncCallbackDispatcher,>(&v8);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 63LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v2);
    goto LABEL_6;
  }
  v9 = (__int64 *)((char *)this + 48);
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v9);
  v2 = Microsoft::WRL::AsAgile<IAsyncCallbackDispatcher>(v8, v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 64LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v3;
}
