/*
 * XREFs of MmMapViewOfSection @ 0x1406FA5A0
 * Callers:
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     PspMapView @ 0x14057E75C (PspMapView.c)
 *     AlpcpCreateView @ 0x140612B1C (AlpcpCreateView.c)
 *     NtGetNlsSectionPtr @ 0x1406DC0D0 (NtGetNlsSectionPtr.c)
 *     NtInitializeNlsFiles @ 0x1406F97C0 (NtInitializeNlsFiles.c)
 *     PspMapSiloSharedDataView @ 0x1406F9DE8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406F9E20 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 *     EtwpCoverageEnsureUserModeView @ 0x14075CE64 (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x1408CF06C (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x140954E10 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     MiMapViewOfSection @ 0x140632050 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406325D0 (MiMapParametersInitialize.c)
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
        ++dword_140C4E724;
      else
        ++dword_140C4E720;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
