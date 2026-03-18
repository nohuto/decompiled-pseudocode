/*
 * XREFs of FsRtlpAttachOplockKey @ 0x1402FFEA8
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH @ 0x1406C44D0 (FsRtlOplockBreakH.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x1402FFFB0 (IoGetOplockKeyContextEx.c)
 *     IoSetOplockKeyContext @ 0x14038D914 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     IoGetIrpExtraCreateParameter @ 0x1405FFDF0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFindExtraCreateParameter @ 0x1406010C0 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x140601150 (FsRtlRemoveExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066E310 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1406C7DC0 (FsRtlAcknowledgeEcp.c)
 */

__int64 __fastcall FsRtlpAttachOplockKey(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v3; // ebx
  struct _ECP_LIST *v4; // rdi
  struct _ECP_LIST *v5; // rcx
  unsigned __int16 v7; // di
  PVOID EcpContext; // [rsp+20h] [rbp-38h] BYREF
  struct _ECP_LIST *ExtraCreateParameter[2]; // [rsp+28h] [rbp-30h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  if ( !CurrentStackLocation->MajorFunction && !IoGetOplockKeyContextEx(CurrentStackLocation->FileObject) )
  {
    EcpContext = 0LL;
    ExtraCreateParameter[0] = 0LL;
    IoGetIrpExtraCreateParameter(Irp, ExtraCreateParameter);
    v4 = ExtraCreateParameter[0];
    if ( ExtraCreateParameter[0] )
    {
      v5 = ExtraCreateParameter[0];
      *(GUID *)ExtraCreateParameter = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(v5, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
      {
        *(GUID *)ExtraCreateParameter = GUID_ECP_OPLOCK_KEY;
        if ( FsRtlRemoveExtraCreateParameter(v4, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
          return v3;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
      v3 = IoSetOplockKeyContext(CurrentStackLocation->FileObject, EcpContext, v7);
      if ( v7 == 1 )
        FsRtlFreeExtraCreateParameter(EcpContext);
      else
        FsRtlAcknowledgeEcp(EcpContext);
      if ( v3 == -1073741823 )
        return 0;
    }
  }
  return v3;
}
