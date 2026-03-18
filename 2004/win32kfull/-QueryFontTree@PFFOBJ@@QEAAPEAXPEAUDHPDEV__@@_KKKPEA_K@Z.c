/*
 * XREFs of ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C00E142C
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00DCB18 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C0132D00 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02BB910 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C24B8 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00E0E70 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00E13E4 (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00E14CC (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryFontTree(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 (__fastcall *v10)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *); // rbx
  __int64 v11; // rbx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0LL;
  v10 = *(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)this + 88LL)
                                                                                                 + 2904LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v13, this);
  v11 = v10(a2, a3, a4, a5, a6);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v13);
  return v11;
}
