/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71
 * Callers:
 *     TelpReadRegistryString @ 0x10002247 (TelpReadRegistryString.c)
 *     TelpIsDeviceAzureADJoined @ 0x100022A6 (TelpIsDeviceAzureADJoined.c)
 *     _TelGetNumericPolicy@12 @ 0x10002610 (_TelGetNumericPolicy@12.c)
 *     _TelGetStringPolicy@12 @ 0x10002890 (_TelGetStringPolicy@12.c)
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z @ 0x10003E4A (-ReportFailure_Hr@details@wil@@YGXPAXIPBD110W4FailureType@2@J@Z.c)
 */

void __userpurge wil::details::in1diag3::Return_Hr(
        int a1@<edx>,
        int a2@<ecx>,
        wil::details::in1diag3 *this,
        wil::details *a4,
        unsigned int a5,
        const char *a6,
        int a7)
{
  int retaddr; // [esp+4h] [ebp+4h]

  wil::details::ReportFailure_Hr(
    a2,
    a1,
    (int)"onecore\\base\\telemetry\\permission\\lib\\telemetrypermission.cpp",
    0,
    0,
    retaddr,
    1,
    a4);
}
