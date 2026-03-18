/*
 * XREFs of AlpcpAllocateBlob @ 0x1405F307C
 * Callers:
 *     AlpcpCreateClientPort @ 0x1405E751C (AlpcpCreateClientPort.c)
 *     AlpcpAllocateMessage @ 0x1405E79B4 (AlpcpAllocateMessage.c)
 *     AlpcpCreateSecurityContext @ 0x1405F2BD4 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x1405F4E04 (AlpcpCreateView.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A58B8 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateConnectionPort @ 0x1406CD198 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateReserve @ 0x1406D2E24 (AlpcpCreateReserve.c)
 *     AlpcpCreateSection @ 0x1407098CC (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x14070CF64 (AlpcpCreateRegion.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140205EF4 (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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
