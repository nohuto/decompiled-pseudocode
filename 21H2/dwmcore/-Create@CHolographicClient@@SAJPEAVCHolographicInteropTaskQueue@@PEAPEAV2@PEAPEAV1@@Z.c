/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18025AE3C
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802537B0 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x18025A808 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x18025AB28 (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?Initialize@CHolographicClient@@AEAAJXZ @ 0x18025B3F4 (-Initialize@CHolographicClient@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        struct CHolographicClient **a3)
{
  CRenderTargetBitmap *v4; // rbx
  int v7; // eax
  __int64 v8; // rcx
  struct CHolographicInteropTaskQueue *v9; // rsi
  unsigned int v10; // edi
  CHolographicClient *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct CHolographicInteropTaskQueue *v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  v7 = CHolographicInteropTaskQueue::Create(&v16);
  v9 = v16;
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x14u, 0LL);
LABEL_10:
    if ( v4 )
      CRenderTargetBitmap::Release(v4);
    goto LABEL_12;
  }
  v11 = (CHolographicClient *)operator new(0x120uLL);
  if ( v11 )
    v4 = CHolographicClient::CHolographicClient(v11, a1, v9);
  if ( v4 )
  {
    CMILCOMBase::InternalAddRef(v4);
    v13 = CHolographicClient::Initialize(v4);
    v10 = v13;
    if ( v13 >= 0 )
    {
      *a2 = v9;
      *a3 = v4;
      return v10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1Au, 0LL);
    goto LABEL_10;
  }
  v10 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x17u, 0LL);
LABEL_12:
  if ( v9 )
    (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v9 + 8LL))(v9);
  return v10;
}
