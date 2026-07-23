/*
 * XREFs of _LdrInitShimEngineDynamic@8 @ 0x4B331380
 * Callers:
 *     <none>
 * Callees:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 *     _LdrFindEntryForAddress@8 @ 0x4B2CF200 (_LdrFindEntryForAddress@8.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __stdcall LdrInitShimEngineDynamic(PVOID DllHandle, int a2)
{
  int v2; // ebx
  __int16 v3; // ax
  __int16 v4; // di
  NTSTATUS EntryForAddress; // eax
  int v6; // ecx
  unsigned __int8 ShimEngine; // [esp+13h] [ebp-5h]
  PLDR_DATA_TABLE_ENTRY Entry; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  v3 = NtCurrentTeb()->SameTebFlags & 0x1000;
  Entry = 0;
  v4 = v3;
  if ( !v3 )
    LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = DllHandle;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( EntryForAddress >= 0 )
  {
    LdrpPinModule(Entry);
    ShimEngine = LdrpLoadShimEngine(*(PCWSTR *)(a2 + 4));
    if ( ShimEngine )
      goto LABEL_13;
  }
  else
  {
    v6 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (int)"minkernel\\ntdll\\ldrinit.c",
        2719,
        (int)"LdrInitShimEngineDynamic",
        0,
        "Finding the shim engine entry failed with status 0x%08lx\n",
        EntryForAddress);
      v6 = ShowSnaps;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
    ShimEngine = 0;
  }
  v2 = -1073741823;
LABEL_13:
  LdrpReleaseLoaderLock(v6, 2, v2, v6);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
