/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140704490
 * Callers:
 *     IoShutdownSystem @ 0x1409A7108 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1409A7464 (IopShutdownBaseFileSystems.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x1407044D0 (IopBuildSynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildSynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildSynchronousFsdRequest(
                 MajorFunction,
                 (_DWORD)DeviceObject,
                 (_DWORD)Buffer,
                 Length,
                 (__int64)StartingOffset,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
