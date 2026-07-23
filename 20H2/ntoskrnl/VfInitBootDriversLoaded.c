/*
 * XREFs of VfInitBootDriversLoaded @ 0x140A4D7D4
 * Callers:
 *     MiInitializeDriverImages @ 0x140A4D154 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     NtSetDebugFilterState @ 0x14079AFA0 (NtSetDebugFilterState.c)
 *     VfDriverLoadImage @ 0x1409C50A0 (VfDriverLoadImage.c)
 *     VfAvlInitializeTreeEx @ 0x1409C5644 (VfAvlInitializeTreeEx.c)
 *     VfLookasideInitializeInternalNPagedList @ 0x1409C5758 (VfLookasideInitializeInternalNPagedList.c)
 *     IoVerifierInit @ 0x1409C777C (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x1409C9E80 (VfInitVerifierComponents.c)
 *     VfObjectContextInit @ 0x1409CB418 (VfObjectContextInit.c)
 *     VfDriverLoadBootDrivers @ 0x140A4D8D4 (VfDriverLoadBootDrivers.c)
 *     VfThunkFindExportAddressAllTables @ 0x140A4D930 (VfThunkFindExportAddressAllTables.c)
 *     VfThunkInit @ 0x140A4DBCC (VfThunkInit.c)
 *     ViLogAndLoadXdv @ 0x140A96A84 (ViLogAndLoadXdv.c)
 *     VfTriageAddDrivers @ 0x140A96B04 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A96F68 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A97124 (VfXdvExcludeParseRegistryString.c)
 */

void __fastcall VfInitBootDriversLoaded(__int64 a1)
{
  int v2; // esi
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx

  VfBugcheckTmpDataLock = 0LL;
  v2 = BYTE4(VfRuleClasses) & 8;
  VfThunkInit();
  VfLookasideInitializeInternalNPagedList(
    (__int64)&ViAvlNodeLookaside,
    0LL,
    (__int64)VfUtilFreePoolCheckIRQL,
    v3,
    48LL,
    1413572182,
    16);
  _InterlockedExchange(&ViAvlInitialized, 1);
  if ( !VfSafeMode )
  {
    if ( (int)VfAvlInitializeTreeEx(ViTargetDriversAvl, 0LL, 64, 1, (PRTL_AVL_FREE_ROUTINE)ViTargetDelayFreeAvlNode) < 0 )
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
    }
    else
    {
      dword_140C1CF48 = 0;
      _InterlockedExchange(&ViTargetInitialized, 1);
    }
  }
  if ( ViVerifierDriverAddedThunkListHead )
    VfObjectContextInit();
  VfThunkFindExportAddressAllTables(a1);
  if ( ViVerifierDriverAddedThunkListHead )
  {
    NtSetDebugFilterState(0x5Du, 0, 1u);
    if ( MmVerifyDriverBufferLength )
      VfSuspectDriversParseRegistryString();
    if ( VfXdvSuppressDriversBufferLength )
      VfXdvExcludeParseRegistryString();
    VfInitVerifierComponents(MmVerifierData, ViVerifyAllDrivers, KernelVerifier);
    IoVerifierInit(MmVerifierData);
    ViFullyInitialized = 1;
    VfTriageAddDrivers(a1);
    v4 = *(_QWORD *)(a1 + 16);
    v5 = *(_QWORD *)(v4 + 48) + *(unsigned int *)(v4 + 64);
    ViDriverKernelBase = *(_QWORD *)(v4 + 48);
    ViDriverKernelEnd = v5;
    if ( KernelVerifier )
      VfDriverLoadImage(v4, 0, 1u, 0);
    v6 = *(_QWORD *)v4;
    if ( v2 )
      ViLogAndLoadXdv(a1);
    while ( v6 != a1 + 16 )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 88), &XdvName, 1u) )
      {
        if ( !v2 )
          ViLogAndLoadXdv(a1);
      }
      else
      {
        VfDriverLoadImage(v6, 0, 0, 0);
      }
      v6 = *(_QWORD *)v6;
    }
  }
  else
  {
    VfDriverLoadBootDrivers(a1 + 16);
  }
}
