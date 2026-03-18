/*
 * XREFs of GreOffsetRgn @ 0x1C0076320
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0032DA8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiOffsetRgn @ 0x1C004A9B0 (NtGdiOffsetRgn.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C00A7F90 (UserSetDCVisRgn.c)
 *     EngOffsetRgn @ 0x1C01556B0 (EngOffsetRgn.c)
 * Callees:
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0078FF0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007B944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C007FF20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  struct _POINTL v8; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 0);
  v5 = 0;
  v8.x = a2;
  v8.y = a3;
  if ( v7[0] && (unsigned int)RGNOBJ::bOffset((RGNOBJ *)v7, &v8) )
    v5 = RGNOBJ::iComplexity((RGNOBJ *)v7);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
