/*
 * XREFs of ??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0021358
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019694 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

MOCKDRIVERSTATE *__fastcall MOCKDRIVERSTATE::MOCKDRIVERSTATE(MOCKDRIVERSTATE *this, struct DXGADAPTER *a2)
{
  int v5; // [rsp+30h] [rbp-18h]

  `vector constructor iterator'(
    (char *)this,
    16LL,
    160LL,
    (void (__fastcall *)(char *))_MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE);
  *((_BYTE *)this + 2568) = 0;
  *((_BYTE *)this + 2728) = 0;
  *((_QWORD *)this + 324) = MockDriverStateCreatePlaneLiveDump;
  *((_QWORD *)this + 322) = 0LL;
  *((_QWORD *)this + 340) = a2;
  *((_QWORD *)this + 320) = a2;
  *((_QWORD *)this + 325) = this;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MockDriverValidation__private_reporting,
    0x14A2756u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
    0,
    v5);
  return this;
}
