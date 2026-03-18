/*
 * XREFs of ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18000CB84
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18000C850 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil@@QEAA_NXZ @ 0x180104A34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil@@QEAA_NX.c)
 *     ??$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@@Z @ 0x180105054 (--$SAFE_DELETE_ARRAY@UD2D1_COMPOSITOR_DRAWING_STATE@@@@YAXAEAPEAUD2D1_COMPOSITOR_DRAWING_STATE@@.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandBuffer::Initialize(
        CCommandBuffer *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        __int64 a3)
{
  unsigned int v4; // edi
  char IsEnabled; // al
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // edi
  void *v13; // rbp
  unsigned int v14; // ebx
  const void *v15; // rax
  _DWORD *v16; // rax
  unsigned int v17; // kr10_4
  void *v18; // rax
  unsigned int v19; // ebx
  const void *v20; // rax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  void *v23; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v23 = 0LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_3187573053>::__private_IsEnabled(
                &`wil::Feature<__WilFeatureTraits_Feature_3187573053>::GetImpl'::`2'::impl,
                a2,
                a3);
  v7 = *(_QWORD *)a2;
  if ( IsEnabled )
  {
    v8 = (*(unsigned int (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(v7 + 32))(a2);
    if ( v8 != 144 * (v8 / 0x90) )
    {
      v22 = 36;
LABEL_4:
      v9 = -2147024809;
LABEL_5:
      v4 = v9;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, v22, 0LL);
      goto LABEL_18;
    }
    v12 = (*(unsigned int (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2) / 0x90;
    v23 = operator new(saturated_mul(v12, 0x90uLL));
    v13 = v23;
    if ( !v23 )
    {
      v9 = -2147024882;
      v22 = 41;
      goto LABEL_5;
    }
    v14 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    v15 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
    memcpy_0(v13, v15, v14);
    LODWORD(v8) = 0;
    if ( v12 )
    {
      v16 = v13;
      while ( *v16 <= 3u && v16[3] <= 7u )
      {
        LODWORD(v8) = v8 + 1;
        v16 += 36;
        if ( (unsigned int)v8 >= v12 )
          goto LABEL_13;
      }
      v22 = 54;
      goto LABEL_4;
    }
LABEL_13:
    v23 = 0LL;
    *((_DWORD *)this + 2) = v12;
    v4 = 0;
    *(_QWORD *)this = v13;
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(v7 + 32))(a2);
    *((_DWORD *)this + 2) = v17 / 0x90;
    v18 = operator new(saturated_mul(v17 / 0x90, 0x90uLL));
    *(_QWORD *)this = v18;
    if ( !v18 )
    {
      v9 = -2147024882;
      v22 = 69;
      goto LABEL_5;
    }
    v19 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    v20 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
    memcpy_0(*(void **)this, v20, v19);
  }
LABEL_18:
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3187573053>::__private_IsEnabled(
                          &`wil::Feature<__WilFeatureTraits_Feature_3187573053>::GetImpl'::`2'::impl,
                          v10,
                          v11) )
    SAFE_DELETE_ARRAY<D2D1_COMPOSITOR_DRAWING_STATE>(&v23);
  return v4;
}
