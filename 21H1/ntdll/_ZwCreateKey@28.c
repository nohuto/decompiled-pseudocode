/*
 * XREFs of _ZwCreateKey@28 @ 0x4B2F2B50
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     @RtlpOpenBaseImageFileOptionsKeyEx@12 @ 0x4B2E5F7F (@RtlpOpenBaseImageFileOptionsKeyEx@12.c)
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _RtlpCreateIFEOKeyFilterKey@16 @ 0x4B342064 (_RtlpCreateIFEOKeyFilterKey@16.c)
 *     _RXactpOpenTargetKey@16 @ 0x4B3454BA (_RXactpOpenTargetKey@16.c)
 *     _RtlInitializeRXact@12 @ 0x4B345820 (_RtlInitializeRXact@12.c)
 *     _RtlpSetMachineUILanguagesImmediate@8 @ 0x4B35519D (_RtlpSetMachineUILanguagesImmediate@8.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpNtCreateKey@24 @ 0x4B36D150 (_RtlpNtCreateKey@24.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwCreateKey(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return Wow64SystemServiceCall();
}
