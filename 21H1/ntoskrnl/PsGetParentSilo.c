/*
 * XREFs of PsGetParentSilo @ 0x1409018D0
 * Callers:
 *     VRegEnabledInJob @ 0x1405CB330 (VRegEnabledInJob.c)
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x14061FEA0 (CmpGetRegistryNamespaceRootForSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140901E34 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x14097BC40 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097BF7C (ObGetSiloRootDirectoryPath.c)
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
