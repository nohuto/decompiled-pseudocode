/*
 * XREFs of SepSetTokenPackage @ 0x140655738
 * Callers:
 *     SepGetAnonymousToken @ 0x1402E17A8 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406FCB64 (RtlIsParentOfChildAppContainer.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // rcx
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  void *v8; // rcx

  v4 = *(void **)(a1 + 784);
  if ( v4 && !RtlIsParentOfChildAppContainer(v4, a2) )
    return 3221225506LL;
  v5 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, a2);
  v8 = *(void **)(a1 + 784);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 784) = v7;
  return 0LL;
}
