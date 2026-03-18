/*
 * XREFs of FsRtlFindExtraCreateParameter @ 0x14072AB80
 * Callers:
 *     IopSymlinkGetECP @ 0x14024013C (IopSymlinkGetECP.c)
 *     FsRtlpAttachOplockKey @ 0x1402A22E0 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1406EACD8 (IopSymlinkEnforceEnabledTypes.c)
 *     IopCheckTopDeviceHint @ 0x14071C4C0 (IopCheckTopDeviceHint.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x1409369D0 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlFindExtraCreateParameter(
        PECP_LIST EcpList,
        LPCGUID EcpType,
        PVOID *EcpContext,
        ULONG *EcpContextSize)
{
  struct _LIST_ENTRY *Flink; // rax
  char *v6; // rdx

  if ( EcpContext )
    *EcpContext = 0LL;
  if ( EcpContextSize )
    *EcpContextSize = 0;
  Flink = EcpList->EcpList.Flink;
  if ( Flink == &EcpList->EcpList )
    return -1073741275;
  while ( 1 )
  {
    v6 = (char *)Flink[1].Flink - *(_QWORD *)&EcpType->Data1;
    if ( !v6 )
      v6 = (char *)Flink[1].Blink - *(_QWORD *)EcpType->Data4;
    if ( !v6 )
      break;
    Flink = Flink->Flink;
    if ( Flink == &EcpList->EcpList )
      return -1073741275;
  }
  LODWORD(Flink[2].Blink) |= 4u;
  if ( EcpContext )
    *EcpContext = &Flink[4];
  if ( EcpContextSize )
    *EcpContextSize = HIDWORD(Flink[2].Blink) - 72;
  return 0;
}
