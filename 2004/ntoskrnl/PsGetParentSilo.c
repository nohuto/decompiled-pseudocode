/*
 * XREFs of PsGetParentSilo @ 0x140902730
 * Callers:
 *     VRegEnabledInJob @ 0x1405CC700 (VRegEnabledInJob.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1405EA880 (CmpGetRegistryNamespaceRootForSilo.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     PspConvertSiloToServerSilo @ 0x140902C94 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x14097CFE0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097D31C (ObGetSiloRootDirectoryPath.c)
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
