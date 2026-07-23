/*
 * XREFs of FsRtlGetNextExtraCreateParameter @ 0x14061BE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlGetNextExtraCreateParameter(
        PECP_LIST EcpList,
        PVOID CurrentEcpContext,
        LPGUID NextEcpType,
        PVOID *NextEcpContext,
        ULONG *NextEcpContextSize)
{
  _LIST_ENTRY *p_EcpList; // rax
  _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // rcx
  NTSTATUS v8; // edx

  p_EcpList = &EcpList->EcpList;
  if ( CurrentEcpContext )
    Flink = (_LIST_ENTRY *)*((_QWORD *)CurrentEcpContext - 8);
  else
    Flink = p_EcpList->Flink;
  if ( Flink == p_EcpList || (p_Blink = &Flink[-1].Blink) == 0LL )
  {
    v8 = -1073741275;
    if ( NextEcpContext )
      *NextEcpContext = 0LL;
    if ( NextEcpContextSize )
      *NextEcpContextSize = 0;
    if ( NextEcpType )
      *NextEcpType = 0LL;
  }
  else
  {
    v8 = 0;
    if ( NextEcpContext )
      *NextEcpContext = p_Blink + 9;
    if ( NextEcpContextSize )
      *NextEcpContextSize = *((_DWORD *)p_Blink + 13) - 72;
    if ( NextEcpType )
      *NextEcpType = *(LPGUID)(p_Blink + 3);
  }
  return v8;
}
