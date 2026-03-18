/*
 * XREFs of ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C01330A8
 * Callers:
 *     ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1C01311E0 (-UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0132770 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02A8AF0 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A91D0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02AA480 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02AABF0 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C00723BC (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C01331AC (-LookUp@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z.c)
 */

__int64 __fastcall UMPDOBJ::pfo(UMPDOBJ *this, __m128i **a2)
{
  __m128i *v2; // rax
  __m128i v5; // xmm2
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i v11; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  v2 = *a2;
  if ( !*a2 )
    return 1LL;
  v5 = v2[1];
  v6 = v2[3];
  v11 = *v2;
  v7 = v2[2];
  v12[0] = v5;
  v8 = _mm_srli_si128(v5, 8).m128i_u64[0];
  v12[1] = v7;
  v12[2] = v6;
  if ( v8 >= (unsigned __int64)MmSystemRangeStart )
  {
    KeEnterCriticalRegion();
    GreAcquirePushLockShared(&UmfdLookupPushLock);
    v13 = 0LL;
    if ( (unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LookUp(
                            v9,
                            (char *)v12 + 8,
                            &v13) )
      v8 = 0LL;
    *((_QWORD *)&v12[0] + 1) = v8;
    GreReleasePushLockShared(&UmfdLookupPushLock);
    KeLeaveCriticalRegion();
  }
  return UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 176), (const void **)a2, 0x40u, &v11);
}
