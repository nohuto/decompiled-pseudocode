/*
 * XREFs of ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0026B38
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall MOCKDRIVERSTATE::Initialize(MOCKDRIVERSTATE *this, struct DXGADAPTER *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  char *v8; // rax
  __int64 v9; // r9
  char *v10; // rsi
  void *v11; // rax
  __int64 v12; // r9
  void *v13; // rsi
  void *v14; // rax
  void *v15; // rsi
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx

  *((_QWORD *)this + 3) = a2;
  v5 = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MockDriverValidation__private_reporting,
    0x14A2756u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
    0);
  if ( *((_BYTE *)this + 32) )
  {
    v8 = (char *)operator new[](0xAA8uLL, 0x4B677844u, 64LL, v6);
    v10 = v8;
    if ( v8 )
    {
      memset(v8, 0, 0xAA8uLL);
      `vector constructor iterator'(
        v10 + 56,
        16LL,
        160LL,
        (void (__fastcall *)(char *))_MOCKDRIVERSTATE_PER_PLANE::_MOCKDRIVERSTATE_PER_PLANE);
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)this = v10;
    v11 = (void *)operator new[](0x68uLL, 0x4B677844u, 64LL, v9);
    v13 = v11;
    if ( v11 )
      memset(v11, 0, 0x68uLL);
    else
      v13 = 0LL;
    *((_QWORD *)this + 1) = v13;
    v14 = (void *)operator new[](0xC48uLL, 0x4B677844u, 64LL, v12);
    v15 = v14;
    if ( v14 )
      memset(v14, 0, 0xC48uLL);
    else
      v15 = 0LL;
    v16 = *(_QWORD **)this;
    *((_QWORD *)this + 2) = v15;
    if ( v16 && *((_QWORD *)this + 1) && v15 )
    {
      *v16 = *((_QWORD *)this + 3);
      v16[5] = MockDriverStateCreatePlaneLiveDump;
      v16[6] = v16;
      v16[3] = 0LL;
      v17 = (_QWORD *)*((_QWORD *)this + 1);
      *v17 = *((_QWORD *)this + 3);
      v17[5] = MockDriverStateCreateFbrLiveDump;
      v17[6] = v17;
      v17[3] = 0LL;
      v18 = (_QWORD *)*((_QWORD *)this + 2);
      *v18 = *((_QWORD *)this + 3);
      v18[5] = MockDriverStateCreateDurationLiveDump;
      v18[6] = v18;
      v18[3] = 0LL;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v5;
}
