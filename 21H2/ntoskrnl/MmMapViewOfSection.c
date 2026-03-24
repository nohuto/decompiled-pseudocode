/*
 * XREFs of MmMapViewOfSection @ 0x140612470
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     PspMapView @ 0x1405841DC (PspMapView.c)
 *     PspMapSiloSharedDataView @ 0x140611C68 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140611CA0 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x140611D98 (MmCreatePeb.c)
 *     NtInitializeNlsFiles @ 0x140612AA0 (NtInitializeNlsFiles.c)
 *     AlpcpCreateView @ 0x140660B40 (AlpcpCreateView.c)
 *     NtGetNlsSectionPtr @ 0x1406B9930 (NtGetNlsSectionPtr.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140771C44 (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x1408D39BC (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x140959B20 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     MiMapViewOfSection @ 0x1406EBA30 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406EBFB0 (MiMapParametersInitialize.c)
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
        ++dword_140C4E7E4;
      else
        ++dword_140C4E7E0;
    }
    else
    {
      *a7 = v14[3];
      return (unsigned int)result;
    }
  }
  return result;
}
