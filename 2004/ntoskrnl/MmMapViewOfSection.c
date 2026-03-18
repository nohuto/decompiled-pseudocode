/*
 * XREFs of MmMapViewOfSection @ 0x14065DF80
 * Callers:
 *     PsDispatchIumService @ 0x14057D8B4 (PsDispatchIumService.c)
 *     PspMapView @ 0x14057ED9C (PspMapView.c)
 *     NtInitializeNlsFiles @ 0x14065CEE0 (NtInitializeNlsFiles.c)
 *     PspMapSiloSharedDataView @ 0x14065D7D0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14065D808 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x14065D900 (MmCreatePeb.c)
 *     AlpcpCreateView @ 0x14068AC9C (AlpcpCreateView.c)
 *     NtGetNlsSectionPtr @ 0x1406FF070 (NtGetNlsSectionPtr.c)
 *     EtwpCoverageEnsureUserModeView @ 0x14075F400 (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x1408D03BC (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x1409564E0 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405FD590 (MiMapParametersInitialize.c)
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
        ++dword_140C4E5E4;
      else
        ++dword_140C4E5E0;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
