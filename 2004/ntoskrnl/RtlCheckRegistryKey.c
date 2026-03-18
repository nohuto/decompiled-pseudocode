/*
 * XREFs of RtlCheckRegistryKey @ 0x140709DC0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14035B210 (RtlCheckPortableOperatingSystem.c)
 *     WheapCommitPolicy @ 0x14095A710 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1405E1A94 (RtlpGetRegistryHandle.c)
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
