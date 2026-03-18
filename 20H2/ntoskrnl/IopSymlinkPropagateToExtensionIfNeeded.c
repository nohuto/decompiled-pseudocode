/*
 * XREFs of IopSymlinkPropagateToExtensionIfNeeded @ 0x140600990
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkRemoveECP @ 0x14020C6F4 (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1405FD450 (FsRtlFreeExtraCreateParameter.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1406A8190 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     IopSymlinkSetFoExtension @ 0x1406BEC5C (IopSymlinkSetFoExtension.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406C6A28 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1406C6D34 (IopSymlinkInitializeSymlinkInfo.c)
 */

__int64 __fastcall IopSymlinkPropagateToExtensionIfNeeded(__int64 a1, struct _ECP_LIST *a2, unsigned __int16 *a3)
{
  _WORD *v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  __int64 FileObjectExtension; // rax
  FSRTL_ALLOCATE_ECP_FLAGS v10; // r8d
  __int64 v11; // rbp
  unsigned int v12; // r15d
  NTSTATUS v13; // eax
  int LookasideList; // [rsp+20h] [rbp-58h]
  __int16 v15; // [rsp+30h] [rbp-48h]
  __int16 v16; // [rsp+38h] [rbp-40h]
  __int16 v17; // [rsp+40h] [rbp-38h]
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
  v12 = *(unsigned __int16 *)(FileObjectExtension + 16) + *a3 + 2;
  if ( v12 >= 0xFFFF )
  {
    v7 = -1073741562;
    goto LABEL_5;
  }
  v13 = FsRtlAllocateExtraCreateParameterFromLookasideList(
          &IopSymlinkECPGuid,
          (unsigned __int16)v12 + 32,
          v10,
          IopSymlinkCleanupECP,
          &IopSymlinkInfoLookasideList,
          &EcpContext);
  v5 = EcpContext;
  v7 = v13;
  if ( v13 < 0 )
    goto LABEL_5;
  v17 = *(_WORD *)(v11 + 2);
  v16 = *(_WORD *)(v11 + 4);
  v15 = *(_WORD *)(v11 + 16);
  LOWORD(LookasideList) = 0;
  IopSymlinkInitializeSymlinkInfo(
    EcpContext,
    v12 + 32,
    *((_QWORD *)a3 + 1),
    *a3,
    LookasideList,
    *(_QWORD *)(v11 + 24),
    v15,
    v16,
    v17,
    0LL);
  *v5 = *(_WORD *)v11 + v5[8] - *(_WORD *)(v11 + 16);
LABEL_13:
  v7 = IopSymlinkSetFoExtension(a1, v5);
  if ( v7 >= 0 )
  {
    IopSymlinkFreeRelatedMountPointChain(v5);
    return (unsigned int)v7;
  }
LABEL_5:
  if ( v5 )
  {
    IopSymlinkFreeRelatedMountPointChain(v5);
    FsRtlFreeExtraCreateParameter(v5);
  }
  return (unsigned int)v7;
}
