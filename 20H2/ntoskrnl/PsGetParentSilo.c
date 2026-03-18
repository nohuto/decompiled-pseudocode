/*
 * XREFs of PsGetParentSilo @ 0x140908340
 * Callers:
 *     VRegEnabledInJob @ 0x1405D2D60 (VRegEnabledInJob.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1406A0B20 (CmpGetRegistryNamespaceRootForSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409088A4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140982DB0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409830EC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
