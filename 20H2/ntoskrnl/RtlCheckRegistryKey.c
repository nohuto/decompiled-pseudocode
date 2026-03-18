/*
 * XREFs of RtlCheckRegistryKey @ 0x1406DC310
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14032BC70 (RtlCheckPortableOperatingSystem.c)
 *     WheapCommitPolicy @ 0x1409604D0 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x14066D824 (RtlpGetRegistryHandle.c)
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
