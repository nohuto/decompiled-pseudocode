/*
 * XREFs of MmMapViewOfSection @ 0x1406ADAC0
 * Callers:
 *     PsDispatchIumService @ 0x1405812E4 (PsDispatchIumService.c)
 *     PspMapView @ 0x1405827CC (PspMapView.c)
 *     AlpcpCreateView @ 0x1405F4E04 (AlpcpCreateView.c)
 *     NtInitializeNlsFiles @ 0x1406ACCE0 (NtInitializeNlsFiles.c)
 *     PspMapSiloSharedDataView @ 0x1406AD308 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406AD340 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406AD438 (MmCreatePeb.c)
 *     NtGetNlsSectionPtr @ 0x1406D1CC0 (NtGetNlsSectionPtr.c)
 *     EtwpCoverageEnsureUserModeView @ 0x14076DA70 (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x1408D61FC (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140621DD0 (MiMapParametersInitialize.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _WORD *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, a1, a2, *a3, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (__int64)v15, (void **)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C4E664;
      else
        ++dword_140C4E660;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
