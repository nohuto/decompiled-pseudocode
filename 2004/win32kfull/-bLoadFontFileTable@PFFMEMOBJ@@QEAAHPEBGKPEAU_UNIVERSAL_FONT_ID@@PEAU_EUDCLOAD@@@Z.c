/*
 * XREFs of ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0010ECC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C00D8FE8 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02739E0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0273D84 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0010FD4 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00118EC (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C0012FE4 (-bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C02984E0 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 */

__int64 __fastcall PFFMEMOBJ::bLoadFontFileTable(
        PFFMEMOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct _UNIVERSAL_FONT_ID *a4,
        struct _EUDCLOAD *a5)
{
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v10; // esi
  struct _EUDCLOAD *v11; // r15
  __int64 v12; // rdx
  struct _IFIMETRICS *v13; // rax
  struct _IFIMETRICS *v14; // rbp
  void (__fastcall *v16)(struct _IFIMETRICS *, unsigned __int64); // rax
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  struct _UNIVERSAL_FONT_ID *v19; // [rsp+A8h] [rbp+20h]

  v19 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  v17[0] = v8;
  if ( !(unsigned int)PFFMEMOBJ::bAllocPFEData(this, a3) )
    return 0;
  v9 = 1;
  v10 = 1;
  if ( a3 )
  {
    v11 = a5;
    while ( 1 )
    {
      v12 = *(_QWORD *)this;
      v18 = 0LL;
      v13 = PDEVOBJ::QueryFont((PDEVOBJ *)v17, *(struct DHPDEV__ **)(v12 + 96), *(_QWORD *)(v12 + 80), v10, &v18);
      v14 = v13;
      if ( !v13 )
        break;
      if ( bReadyToInitializeFontAssocDefault
        && !v11
        && !(unsigned int)FindDefaultLinkedFontEntry((wchar_t *)((char *)v13 + v13->dpwszFamilyName), a2)
        || !(unsigned int)PFFMEMOBJ::bAddEntry(this, v10, 0LL, 0LL, v14, v18, v19, v11) )
      {
        v16 = *(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v8 + 3024);
        if ( v16 )
          v16(v14, v18);
        return 0;
      }
      if ( ++v10 > a3 )
        return v9;
    }
    return 0;
  }
  return v9;
}
