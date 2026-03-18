/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x14033D1E0
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x14070DD60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14070DE80 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A850 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A8F0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x14033D220 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildAsynchronousFsdRequest(
                 MajorFunction,
                 DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 IoStatusBlock,
                 retaddr);
}
