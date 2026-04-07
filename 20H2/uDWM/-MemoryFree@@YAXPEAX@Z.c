/*
 * XREFs of ?MemoryFree@@YAXPEAX@Z @ 0x180042D04
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18002DFC8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002E7F0 (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800324D0 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180040B88 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180040D10 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1800421EC (-Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z.c)
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18004DB14 (-SLGetHelper@@YA_NPEBG@Z.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18007CF20 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x18007D144 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18007D210 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18007DBA0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x18007DCE8 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18007E150 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MemoryFree(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
