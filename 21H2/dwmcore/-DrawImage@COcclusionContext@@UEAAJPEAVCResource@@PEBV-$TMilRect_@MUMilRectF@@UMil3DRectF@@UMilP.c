/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IL@@@@Z @ 0x1800D75F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800D76C4 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+40h] [rbp-48h]
  char v15; // [rsp+50h] [rbp-38h]

  v8 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 16LL) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13[0] = *(_QWORD *)(a1 + 1192);
    v14 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v13[1] = a2;
    v15 = 0;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 200LL))(v12, v13);
  }
  if ( !a4 )
  {
    v9 = COcclusionContext::DrawImage(a1, a2, a3, 0LL);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x3C9u);
  }
  return v8;
}
