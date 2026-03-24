/*
 * XREFs of ??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0021C20
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019FF4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     Feature_MockDriverValidation__private_ReportDeviceUsage @ 0x1C00249E4 (Feature_MockDriverValidation__private_ReportDeviceUsage.c)
 */

MOCKDRIVERSTATE *__fastcall MOCKDRIVERSTATE::MOCKDRIVERSTATE(MOCKDRIVERSTATE *this, struct DXGADAPTER *a2)
{
  `vector constructor iterator'(
    (char *)this,
    16LL,
    160LL,
    (void (__fastcall *)(char *))_MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE);
  *((_BYTE *)this + 2568) = 0;
  *((_QWORD *)this + 340) = a2;
  *((_BYTE *)this + 2728) = 0;
  *((_QWORD *)this + 320) = a2;
  *((_QWORD *)this + 324) = MockDriverStateCreatePlaneLiveDump;
  *((_QWORD *)this + 325) = this;
  *((_QWORD *)this + 322) = 0LL;
  Feature_MockDriverValidation__private_ReportDeviceUsage();
  return this;
}
