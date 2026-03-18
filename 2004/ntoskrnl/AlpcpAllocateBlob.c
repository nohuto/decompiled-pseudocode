/*
 * XREFs of AlpcpAllocateBlob @ 0x14068A024
 * Callers:
 *     AlpcpCreateSection @ 0x14060D8B4 (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x1406106C4 (AlpcpCreateRegion.c)
 *     AlpcpCreateClientPort @ 0x14062B308 (AlpcpCreateClientPort.c)
 *     AlpcpAllocateMessage @ 0x14062B79C (AlpcpAllocateMessage.c)
 *     AlpcpCreateSecurityContext @ 0x140689E64 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x14068AC9C (AlpcpCreateView.c)
 *     AlpcpCreateReserve @ 0x1406E2DA4 (AlpcpCreateReserve.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406E8DC0 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateConnectionPort @ 0x1406FA218 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

_OWORD *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  SIZE_T v3; // rdx
  _OWORD *result; // rax
  char v6; // dl
  _OWORD *v7; // rcx
  char v8; // al

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      result = (_OWORD *)(*((__int64 (__fastcall **)(__int64, SIZE_T, _QWORD))&AlpcpLookasides
                          + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8)
                          + 6))(
                           1LL,
                           v3,
                           *(unsigned int *)(a1 + 4));
    else
      result = ExAllocatePoolWithTag(PagedPool, v3, *(_DWORD *)(a1 + 4));
    v6 = 0;
  }
  else
  {
    result = ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
  }
  v7 = result;
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    result[2] = 0LL;
    *((_BYTE *)result + 17) = *(_BYTE *)a1;
    v8 = result[1] & 0xFD;
    *((_QWORD *)v7 + 1) = v7;
    *(_QWORD *)v7 = v7;
    *((_BYTE *)v7 + 16) = v6 | v8;
    result = v7 + 3;
    *((_QWORD *)v7 + 3) = 1LL;
  }
  return result;
}
