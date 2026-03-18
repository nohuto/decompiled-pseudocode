/*
 * XREFs of MiMapViewInSystemSpace @ 0x1406F3FDC
 * Callers:
 *     MmMapViewInSessionSpace @ 0x1406DEFB0 (MmMapViewInSessionSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x1406DF660 (MmMapViewInSystemSpaceEx.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140700A40 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     NtGetNlsSectionPtr @ 0x140784CB0 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x1407A66CC (AlpcpCreateView.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     CmFcpMapSection @ 0x140832C70 (CmFcpMapSection.c)
 *     ExInitializeLeapSecondData @ 0x140857D34 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x14085A124 (EtwpCoverageEnsureContext.c)
 *     NtCreateIoRing @ 0x140938B40 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x1409AB9D8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1409AC998 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409F352C (EtwpCoverageSamplerSetBloomFilter.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA6E0 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x140A05860 (NtMapCMFModule.c)
 * Callees:
 *     MiDereferenceControlArea @ 0x14025E274 (MiDereferenceControlArea.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140287450 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  int v14; // ebx
  ULONG_PTR v16[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v16[0] = 0LL;
  v10 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v10);
  v11 = *a3;
  if ( !*a3 )
  {
    *(_WORD *)a4 = 0;
    v13 = *(_QWORD *)(a1 + 48) - *a4;
    *a3 = v13;
    goto LABEL_5;
  }
  v12 = (unsigned __int16)*(_DWORD *)a4;
  if ( v11 + v12 >= v12 )
  {
    *a3 = v11 + v12;
    *(_WORD *)a4 = 0;
    v13 = *a3;
    if ( *a3 <= *(_QWORD *)(a1 + 48) - *a4 )
    {
LABEL_5:
      v14 = MiInsertInSystemSpace(v13, a1, a4, a5, a6, v16);
      if ( v14 >= 0 )
      {
        *a2 = v16[0];
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v14 = -1073741793;
LABEL_10:
  MiDereferenceControlArea(v10);
  return (unsigned int)v14;
}
