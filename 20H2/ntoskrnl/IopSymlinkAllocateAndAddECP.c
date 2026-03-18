/*
 * XREFs of IopSymlinkAllocateAndAddECP @ 0x1406C6E18
 * Callers:
 *     IopSymlinkUpdateECP @ 0x1406C6884 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1406C6C0C (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1406C6F40 (IopGraftName.c)
 * Callees:
 *     IoClearIrpExtraCreateParameter @ 0x140503E10 (IoClearIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1405FD390 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1405FD450 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x140600340 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlInsertExtraCreateParameter @ 0x1406908C0 (FsRtlInsertExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x140690930 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1406A8190 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IoSetIrpExtraCreateParameter @ 0x1406B4D70 (IoSetIrpExtraCreateParameter.c)
 */

__int64 __fastcall IopSymlinkAllocateAndAddECP(PIRP Irp, PVOID *EcpContext, unsigned __int16 a3)
{
  int v4; // ebx
  char v6; // r14
  NTSTATUS ParameterFromLookasideList; // edi
  struct _ECP_LIST *v8; // rbx
  PECP_LIST EcpList; // [rsp+58h] [rbp+10h] BYREF

  *EcpContext = 0LL;
  EcpList = 0LL;
  v4 = a3;
  v6 = 0;
  IoGetIrpExtraCreateParameter(Irp, &EcpList);
  ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterFromLookasideList(
                                 &IopSymlinkECPGuid,
                                 v4 + 32,
                                 0,
                                 (PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)IopSymlinkCleanupECP,
                                 &IopSymlinkInfoLookasideList,
                                 EcpContext);
  if ( ParameterFromLookasideList >= 0 )
  {
    v8 = EcpList;
    if ( EcpList )
      goto LABEL_5;
    ParameterFromLookasideList = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
    if ( ParameterFromLookasideList >= 0 )
    {
      v8 = EcpList;
      IoSetIrpExtraCreateParameter(Irp, EcpList);
      v6 = 1;
LABEL_5:
      ParameterFromLookasideList = FsRtlInsertExtraCreateParameter(v8, *EcpContext);
      if ( ParameterFromLookasideList >= 0 )
        return (unsigned int)ParameterFromLookasideList;
      goto LABEL_8;
    }
  }
  v8 = EcpList;
LABEL_8:
  if ( *EcpContext )
  {
    *((_QWORD *)*EcpContext + 1) = 0LL;
    FsRtlFreeExtraCreateParameter(*EcpContext);
    *EcpContext = 0LL;
  }
  if ( v6 )
  {
    FsRtlFreeExtraCreateParameterList(v8);
    IoClearIrpExtraCreateParameter(Irp);
  }
  return (unsigned int)ParameterFromLookasideList;
}
