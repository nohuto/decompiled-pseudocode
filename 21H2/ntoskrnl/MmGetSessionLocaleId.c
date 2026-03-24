/*
 * XREFs of MmGetSessionLocaleId @ 0x140620240
 * Callers:
 *     PspUserThreadStartup @ 0x140646E40 (PspUserThreadStartup.c)
 *     NtQueryDefaultLocale @ 0x14069F740 (NtQueryDefaultLocale.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].AffinityPadding[5];
  if ( !v1 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(v1 + 96);
}
