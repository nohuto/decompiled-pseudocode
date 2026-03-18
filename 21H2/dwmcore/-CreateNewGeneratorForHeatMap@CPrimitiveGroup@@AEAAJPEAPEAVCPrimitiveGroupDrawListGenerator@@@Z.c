/*
 * XREFs of ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180232098
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18000C388 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18000C850 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGeneratorForHeatMap(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v3; // rdx
  struct ID2D1PrivateCompositorBuffer *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+50h] [rbp-10h] BYREF
  CPrimitiveGroupDrawListGenerator *v12; // [rsp+78h] [rbp+18h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v9 = 0uLL;
  v3 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 81);
  v4 = (struct ID2D1PrivateCompositorBuffer *)*((_QWORD *)this + 80);
  v10 = 0uLL;
  v11 = 0uLL;
  v5 = CPrimitiveGroupDrawListGenerator::Create(v4, v3, &v11, &v10, &v9, &v12);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x2FBu);
    if ( v12 )
      (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    *a2 = v12;
  }
  return v7;
}
