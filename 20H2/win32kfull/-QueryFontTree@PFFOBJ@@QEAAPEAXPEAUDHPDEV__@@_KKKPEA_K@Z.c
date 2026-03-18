/*
 * XREFs of ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C0065700
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00640E0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C0134C50 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BA3B0 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0F58 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00613F4 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00657A0 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryFontTree(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 (__fastcall *v12)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *); // rbx
  __int64 v13; // rbx
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0LL;
  v12 = *(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)this + 88LL)
                                                                                                 + 2904LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v15, this, v10, v11);
  v13 = v12(a2, a3, a4, a5, a6);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v15);
  return v13;
}
