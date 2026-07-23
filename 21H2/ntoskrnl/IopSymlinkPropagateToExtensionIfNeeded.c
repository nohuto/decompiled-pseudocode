/*
 * XREFs of IopSymlinkPropagateToExtensionIfNeeded @ 0x14071A9B0
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x14035FB2C (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DE140 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopSymlinkSetFoExtension @ 0x1405FABEC (IopSymlinkSetFoExtension.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1405FD868 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1405FE108 (IopSymlinkFreeRelatedMountPointChain.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14069C490 (FsRtlFreeExtraCreateParameter.c)
 */

__int64 __fastcall IopSymlinkPropagateToExtensionIfNeeded(__int64 a1, struct _ECP_LIST *a2, const void **a3)
{
  _WORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  __int64 FileObjectExtension; // rax
  FSRTL_ALLOCATE_ECP_FLAGS v10; // r8d
  __int64 v11; // rbp
  unsigned int v12; // r15d
  NTSTATUS v13; // eax
  PVOID EcpContext; // [rsp+88h] [rbp+10h] BYREF

  EcpContext = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    IopSymlinkRemoveECP(a2, &EcpContext);
    v5 = EcpContext;
    if ( EcpContext )
    {
      if ( (*((_BYTE *)EcpContext + 2) & 1) != 0 )
        goto LABEL_13;
LABEL_4:
      v7 = 0;
      goto LABEL_5;
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    goto LABEL_4;
  FileObjectExtension = IopGetFileObjectExtension(v6, 5, 0LL);
  v11 = FileObjectExtension;
  if ( !FileObjectExtension )
    goto LABEL_4;
  v12 = *(unsigned __int16 *)(FileObjectExtension + 16) + *(unsigned __int16 *)a3 + 2;
  if ( v12 >= 0xFFFF )
  {
    v7 = -1073741562;
    goto LABEL_5;
  }
  v13 = FsRtlAllocateExtraCreateParameterFromLookasideList(
          &IopSymlinkECPGuid,
          (unsigned __int16)v12 + 32,
          v10,
          (PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK)IopSymlinkCleanupECP,
          &IopSymlinkInfoLookasideList,
          &EcpContext);
  v5 = EcpContext;
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_5;
  IopSymlinkInitializeSymlinkInfo(
    (__int64)EcpContext,
    v12 + 32,
    a3[1],
    *(_WORD *)a3,
    0,
    *(void **)(v11 + 24),
    *(_WORD *)(v11 + 16),
    *(_WORD *)(v11 + 4),
    *(_WORD *)(v11 + 2),
    0LL);
  *v5 = *(_WORD *)v11 + v5[8] - *(_WORD *)(v11 + 16);
LABEL_13:
  v7 = IopSymlinkSetFoExtension(a1, (signed __int64)v5);
  if ( v7 >= 0 )
  {
    IopSymlinkFreeRelatedMountPointChain((__int64)v5);
    return (unsigned int)v7;
  }
LABEL_5:
  if ( v5 )
  {
    IopSymlinkFreeRelatedMountPointChain((__int64)v5);
    FsRtlFreeExtraCreateParameter(v5);
  }
  return (unsigned int)v7;
}
