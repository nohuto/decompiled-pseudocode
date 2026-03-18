/*
 * XREFs of RtlCheckRegistryKey @ 0x1406E9090
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140320C80 (RtlCheckPortableOperatingSystem.c)
 *     WheapCommitPolicy @ 0x140959370 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 0, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
