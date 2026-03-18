/*
 * XREFs of ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x180258938
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802519D0 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x180258F6C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??0CHolographicInteropTaskQueue@@AEAA@XZ @ 0x1802587DC (--0CHolographicInteropTaskQueue@@AEAA@XZ.c)
 *     ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x1802589EC (-Initialize@CHolographicInteropTaskQueue@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Create(struct CHolographicInteropTaskQueue **a1)
{
  CHolographicInteropTaskQueue *v2; // rax
  __int64 v3; // rcx
  CHolographicInteropTaskQueue *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  void (__fastcall **v8)(CHolographicInteropTaskQueue *); // rcx

  v2 = (CHolographicInteropTaskQueue *)operator new(0x40uLL);
  if ( v2 )
    v4 = CHolographicInteropTaskQueue::CHolographicInteropTaskQueue(v2);
  else
    v4 = 0LL;
  if ( v4 )
  {
    v6 = CHolographicInteropTaskQueue::Initialize(v4);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x10u, 0LL);
      (*(void (__fastcall **)(CHolographicInteropTaskQueue *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v8 = *(void (__fastcall ***)(CHolographicInteropTaskQueue *))v4;
      *a1 = v4;
      (*v8)(v4);
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0xEu, 0LL);
  }
  return v5;
}
