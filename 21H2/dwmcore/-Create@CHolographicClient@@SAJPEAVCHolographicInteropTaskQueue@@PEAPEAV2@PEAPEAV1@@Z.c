/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18029D52C
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x180295C00 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x18029CE34 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x18029D1A4 (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?Initialize@CHolographicClient@@AEAAJXZ @ 0x18029DB14 (-Initialize@CHolographicClient@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        struct CHolographicClient **a3)
{
  int v6; // eax
  __int64 v7; // rcx
  struct CHolographicInteropTaskQueue *v8; // rdi
  unsigned int v9; // ebx
  CHolographicClient *v10; // rax
  __int64 v11; // rcx
  CHolographicClient *v12; // rax
  CHolographicClient *v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  struct CHolographicInteropTaskQueue *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  v6 = CHolographicInteropTaskQueue::Create(&v17);
  v8 = v17;
  v9 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x14u);
  }
  else
  {
    v10 = (CHolographicClient *)operator new(0x120uLL);
    if ( v10 && (v12 = CHolographicClient::CHolographicClient(v10, a1, v8), (v13 = v12) != 0LL) )
    {
      CMILRefCountImpl::AddReference((CHolographicClient *)((char *)v12 + 8));
      v14 = CHolographicClient::Initialize(v13);
      v9 = v14;
      if ( v14 >= 0 )
      {
        *a2 = v8;
        *a3 = v13;
        return v9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x1Au);
      CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v13);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147024882, 0x17u);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v8 + 8LL))(v8);
  return v9;
}
