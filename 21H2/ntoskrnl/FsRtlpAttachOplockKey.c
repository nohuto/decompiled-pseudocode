/*
 * XREFs of FsRtlpAttachOplockKey @ 0x1402A22E0
 * Callers:
 *     FsRtlOplockBreakH2 @ 0x1406D8C10 (FsRtlOplockBreakH2.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14071C610 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x1402A3840 (IoGetOplockKeyContextEx.c)
 *     IoSetOplockKeyContext @ 0x14039E588 (IoSetOplockKeyContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14066EF20 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14069B6E0 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlAcknowledgeEcp @ 0x1406B54B0 (FsRtlAcknowledgeEcp.c)
 *     FsRtlFindExtraCreateParameter @ 0x14072AB80 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlRemoveExtraCreateParameter @ 0x14072AC10 (FsRtlRemoveExtraCreateParameter.c)
 */

__int64 __fastcall FsRtlpAttachOplockKey(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v3; // ebx
  struct _ECP_LIST *v4; // rdi
  struct _ECP_LIST *v6; // rcx
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
      v6 = ExtraCreateParameter[0];
      *(GUID *)ExtraCreateParameter = GUID_ECP_DUAL_OPLOCK_KEY;
      if ( FsRtlFindExtraCreateParameter(v6, (LPCGUID)ExtraCreateParameter, &EcpContext, 0LL) )
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
