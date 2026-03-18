/*
 * XREFs of ?eqDiv@EPOINTFL@@QAEAAV1@AAV1@AAVEFLOAT@@@Z @ 0x206A20
 * Callers:
 *     ?bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x897A0 (-bIFIMetricsToLogFontW2@@YGHAAVDCOBJ@@PAUtagENUMLOGFONTEXW@@PAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 * Callees:
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

struct EPOINTFL *__thiscall EPOINTFL::eqDiv(EPOINTFL *this, struct EPOINTFL *a2, struct EFLOAT *a3)
{
  divff3_c(this, (int *)a2, (int *)a3);
  divff3_c((_DWORD *)this + 2, (int *)a2 + 2, (int *)a3);
  return this;
}
