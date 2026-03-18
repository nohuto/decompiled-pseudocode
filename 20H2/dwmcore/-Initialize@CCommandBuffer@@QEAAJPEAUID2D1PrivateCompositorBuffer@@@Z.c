/*
 * XREFs of ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18006E2A4
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18006E140 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandBuffer::Initialize(CCommandBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // kr00_4
  LPVOID v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  const void *v9; // rax

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)this + 2) = v5 / 0x90;
  v6 = operator new(saturated_mul(v5 / 0x90, 0x90uLL));
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    v9 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
    memcpy_0(*(void **)this, v9, v8);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x20u, 0LL);
  }
  return v4;
}
