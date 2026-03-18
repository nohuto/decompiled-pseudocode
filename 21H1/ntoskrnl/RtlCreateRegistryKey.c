/*
 * XREFs of RtlCreateRegistryKey @ 0x1407BB050
 * Callers:
 *     WheapCommitPolicy @ 0x140959370 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
