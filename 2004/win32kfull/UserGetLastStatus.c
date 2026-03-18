/*
 * XREFs of UserGetLastStatus @ 0x1C00488F0
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0046334 (xxxLoadHmodIndex.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastStatus()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[200].Self);
  else
    return LODWORD(Self[83].ArbitraryUserPointer);
}
