/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140705EF0
 * Callers:
 *     IoShutdownSystem @ 0x140A651B8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140A65554 (IopShutdownBaseFileSystems.c)
 *     IopCreateArcNamesCd @ 0x140B0E310 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x140705F30 (IopBuildSynchronousFsdRequest.c)
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
