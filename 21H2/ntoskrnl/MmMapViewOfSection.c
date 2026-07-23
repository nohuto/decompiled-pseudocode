/*
 * XREFs of MmMapViewOfSection @ 0x1406A1F20
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     PspMapView @ 0x14058440C (PspMapView.c)
 *     NtGetNlsSectionPtr @ 0x14060EE10 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x140655960 (AlpcpCreateView.c)
 *     PspMapSiloSharedDataView @ 0x1406A1718 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406A1750 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 *     NtInitializeNlsFiles @ 0x1406A2550 (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140771E04 (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3B1C (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x140959CF0 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     MiMapViewOfSection @ 0x140702E10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140703390 (MiMapParametersInitialize.c)
 */

__int64 __fastcall MmMapViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v14[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  result = MiMapParametersInitialize(v14, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (unsigned int)v14, (_DWORD)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140C4E824;
      else
        ++dword_140C4E820;
    }
    else
    {
      *a7 = v14[3];
      return (unsigned int)result;
    }
  }
  return result;
}
