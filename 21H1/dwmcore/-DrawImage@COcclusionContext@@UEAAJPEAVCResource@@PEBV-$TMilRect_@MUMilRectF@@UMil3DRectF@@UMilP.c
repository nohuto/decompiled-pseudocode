/*
 * XREFs of ?DrawImage@COcclusionContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IM@@@@Z @ 0x1800C5EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800C5F6C (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawImage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+40h] [rbp-48h]
  char v15; // [rsp+50h] [rbp-38h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, 15LL) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v13[0] = *(_QWORD *)(a1 + 1232);
    v14 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v13[1] = a2;
    v15 = 0;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 224LL))(v12, v13);
  }
  if ( !a4 )
  {
    v9 = COcclusionContext::DrawImage(a1, a2, a3, 0LL);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3EFu, 0LL);
  }
  return v6;
}
