/*
 * XREFs of ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x18002B45C
 * Callers:
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x180017140 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180027AC0 (-ShouldHandleActivation@VoiceAssistantPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyValue@Foundation@4@@Z @ 0x18006F064 (-SetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAUIPropertyVa.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1801F40D0 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  if ( !v2 )
    return 2147500035LL;
  v3 = (**v2)(v2, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, a2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
