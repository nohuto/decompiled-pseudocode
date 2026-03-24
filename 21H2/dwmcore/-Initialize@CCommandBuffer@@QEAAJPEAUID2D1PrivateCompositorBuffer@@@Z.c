/*
 * XREFs of ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180062E94
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x180062D30 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ??$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@@Z @ 0x1800F39E4 (--$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@.c)
 *     memcpy_0 @ 0x1800F47DB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandBuffer::Initialize(CCommandBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  __int64 v2; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 v9; // rcx
  void *v10; // rbp
  unsigned int v11; // ebx
  const void *v12; // rax
  _DWORD *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-28h]
  LPVOID v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(v2 + 32))(a2);
  if ( v5 == 144 * (v5 / 0x90uLL) )
  {
    v8 = (*(unsigned int (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2) / 0x90;
    v16 = operator new(saturated_mul(v8, 0x90uLL));
    v10 = v16;
    if ( !v16 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x27u, 0LL);
      goto LABEL_12;
    }
    v11 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    v12 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
    memcpy_0(v10, v12, v11);
    v6 = 0LL;
    if ( !v8 )
    {
LABEL_11:
      v16 = 0LL;
      v7 = 0;
      *((_DWORD *)this + 2) = v8;
      *(_QWORD *)this = v10;
      goto LABEL_12;
    }
    v13 = v10;
    while ( *v13 <= 3u && v13[3] <= 7u )
    {
      v6 = (unsigned int)(v6 + 1);
      v13 += 36;
      if ( (unsigned int)v6 >= v8 )
        goto LABEL_11;
    }
    v15 = 52;
  }
  else
  {
    v15 = 34;
  }
  v7 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, v15, 0LL);
LABEL_12:
  SAFE_DELETE_ARRAY<D2D1_COMPOSITOR_DRAWING_STATE>(&v16);
  return v7;
}
