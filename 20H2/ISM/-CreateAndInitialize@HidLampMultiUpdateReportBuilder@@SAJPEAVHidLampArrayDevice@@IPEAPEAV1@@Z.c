/*
 * XREFs of ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800A9360
 * Callers:
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800A6400 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037600 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??0HidLampMultiUpdateReportBuilder@@AEAA@XZ @ 0x1800A91D8 (--0HidLampMultiUpdateReportBuilder@@AEAA@XZ.c)
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x1800A9494 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportBuilder::CreateAndInitialize(
        struct HidLampArrayDevice *a1,
        int a2,
        struct HidLampMultiUpdateReportBuilder **a3)
{
  HidLampMultiUpdateReportBuilder *v6; // rax
  HidLampMultiUpdateReportBuilder *updated; // rbx
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (HidLampMultiUpdateReportBuilder *)RefCountedObject::operator new(0x50uLL);
  if ( v6 )
    updated = HidLampMultiUpdateReportBuilder::HidLampMultiUpdateReportBuilder(v6);
  else
    updated = 0LL;
  if ( updated )
  {
    v9 = HidLampMultiUpdateReportBuilder::Initialize(updated, a1, a2);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *a3 = updated;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
        (const char *)(unsigned int)v9);
      RefCountedObject::Release(updated);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
