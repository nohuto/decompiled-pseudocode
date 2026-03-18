/*
 * XREFs of ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0018C4C
 * Callers:
 *     ?GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z @ 0x1C01D2160 (-GetNumericManufacturerIds@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C0018CC0 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_FillProductIdManufacturerName(
        unsigned __int8 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  __int64 result; // rax
  _WORD *v5; // r11
  __int64 v6; // rcx
  _QWORD v7[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v6 = v7[0];
    *a2 = *(_WORD *)(v7[0] + 8LL);
    *v5 = *(_WORD *)(v6 + 10);
    return 0LL;
  }
  return result;
}
