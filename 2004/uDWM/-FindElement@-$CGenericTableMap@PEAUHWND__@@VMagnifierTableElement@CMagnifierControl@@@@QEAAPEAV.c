/*
 * XREFs of ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18008C078
 * Callers:
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18008C300 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18008C9A0 (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18008CBC4 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x18008BFFC (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 */

PVOID __fastcall CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2)
{
  PVOID v2; // rbx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = a2;
  v2 = RtlLookupElementGenericTable(a1, Buffer);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
  return v2;
}
