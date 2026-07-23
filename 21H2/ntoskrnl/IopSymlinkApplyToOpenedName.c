/*
 * XREFs of IopSymlinkApplyToOpenedName @ 0x140895620
 * Callers:
 *     IopGraftName @ 0x1405FDA74 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     IopSymlinkUpdateECP @ 0x1405FD41C (IopSymlinkUpdateECP.c)
 *     IopReplaceSymlinkPath @ 0x140895310 (IopReplaceSymlinkPath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopSymlinkApplyToOpenedName(
        __int64 a1,
        UNICODE_STRING *EcpContext,
        unsigned __int16 *a3,
        PIRP Irp,
        PVOID P,
        __int16 a6)
{
  void *v6; // r13
  PVOID PoolWithTag; // r14
  UNICODE_STRING *v13; // rsi
  unsigned int v14; // edx
  unsigned __int16 v15; // dx
  NTSTATUS v16; // edi

  v6 = *(void **)(a1 + 96);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, EcpContext[1].Length, 0x63466F49u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = (UNICODE_STRING *)(a1 + 88);
  v14 = *(unsigned __int16 *)(a1 + 88);
  if ( v14 > 2
    && *(_WORD *)(*(_QWORD *)(a1 + 96) + 2 * ((unsigned __int64)*(unsigned __int16 *)(a1 + 88) >> 1) - 2) == 92 )
  {
    if ( a3[3] < 2u )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225485LL;
    }
    v13->Length = v14 - 2;
    a3[3] -= 2;
  }
  memmove(P, EcpContext[1].Buffer, *(&EcpContext->MaximumLength + 1));
  memmove(
    PoolWithTag,
    (char *)EcpContext[1].Buffer + *(&EcpContext->MaximumLength + 1),
    EcpContext[1].Length - (unsigned __int64)*(&EcpContext->MaximumLength + 1));
  *(_QWORD *)(a1 + 96) = PoolWithTag;
  v15 = EcpContext[1].Length - *(&EcpContext->MaximumLength + 1);
  *(_WORD *)(a1 + 90) = v15;
  v13->Length = v15;
  ExFreePoolWithTag(v6, 0);
  v16 = IopReplaceSymlinkPath(
          (const wchar_t *)P,
          *(&EcpContext->MaximumLength + 1) >> 1,
          a1,
          a3,
          *(&EcpContext->MaximumLength + 1) >> 1,
          *(&EcpContext->MaximumLength + 1),
          a6);
  if ( v16 < 0 )
    ExFreePoolWithTag(P, 0);
  else
    return (unsigned int)IopSymlinkUpdateECP(
                           Irp,
                           EcpContext,
                           0,
                           v13,
                           *(&EcpContext->MaximumLength + 1),
                           EcpContext->MaximumLength & 0xFFFE);
  return (unsigned int)v16;
}
