/*
 * XREFs of ArbQueryConflict @ 0x140867320
 * Callers:
 *     IopMemQueryConflict @ 0x1408A3150 (IopMemQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     RtlCopyRangeList @ 0x1407613C0 (RtlCopyRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x140761670 (RtlDeleteOwnersRanges.c)
 *     RtlFreeRangeList @ 0x140761750 (RtlFreeRangeList.c)
 *     ArbpBuildAlternative @ 0x1407B41A0 (ArbpBuildAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ArbQueryConflict(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  PVOID PoolWithTag; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS DeviceProperty; // eax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ecx
  unsigned __int8 (__fastcall *v16)(__int64, _OWORD *); // rax
  void *v17; // r12
  __int64 v18; // rax
  __int64 v19; // r13
  _QWORD *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  _OWORD v25[5]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[12]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v27[4]; // [rsp+100h] [rbp+0h] BYREF

  memset(v26, 0, sizeof(v26));
  memset(v27, 0, sizeof(v27));
  v21 = 0LL;
  v4 = 0;
  ResultLength = 0;
  PoolWithTag = 0LL;
  LODWORD(v6) = 10;
  memset(v25, 0, sizeof(v25));
  v7 = *(_QWORD *)(a1 + 336);
  v8 = *(__int64 **)(a1 + 40);
  v22 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 336) = ArbpQueryConflictCallback;
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 328) = &v21;
  v24 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), (__int64 *)v27);
  if ( v10 < 0 )
    goto LABEL_18;
  v25[0] = v27[0];
  *((_QWORD *)&v25[2] + 1) = v27;
  *((_QWORD *)&v25[3] + 1) = v27;
  *(_QWORD *)&v25[2] = v26;
  v25[1] = v27[0];
  v11 = *(struct _DEVICE_OBJECT **)a2;
  *(_QWORD *)&v25[3] = 1LL;
  v25[4] = 4uLL;
  LODWORD(v26[5]) = 4;
  v26[4] = v11;
  DeviceProperty = IoGetDeviceProperty(v11, DevicePropertyLegacyBusType, 4u, &v26[7], &ResultLength);
  v13 = v26[7];
  if ( DeviceProperty < 0 )
    v13 = 1;
  LODWORD(v26[7]) = v13;
  v14 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, &v26[8], &ResultLength);
  v15 = v26[8];
  if ( v14 < 0 )
    v15 = 0;
  LODWORD(v26[8]) = v15;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x43627241u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
LABEL_18:
    v19 = v22;
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(a1 + 224))(a1, v25);
  if ( v10 < 0 )
    goto LABEL_18;
  RtlDeleteOwnersRanges(*(__int64 ***)(a1 + 48), *(_QWORD *)(*(_QWORD *)&v25[2] + 32LL));
  while ( 1 )
  {
    v25[1] = v25[0];
    v10 = 0;
    v16 = *(unsigned __int8 (__fastcall **)(__int64, _OWORD *))(a1 + 248);
    v21 = 0LL;
    if ( v16(a1, v25) )
      break;
    if ( v4 == (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 + 5);
      v17 = PoolWithTag;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * v6, 0x43627241u);
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
        PoolWithTag = v17;
LABEL_17:
        v7 = v24;
        goto LABEL_18;
      }
      memmove(PoolWithTag, v17, 24LL * v4);
      ExFreePoolWithTag(v17, 0);
    }
    v18 = v4++;
    if ( !v21 )
    {
      *((_QWORD *)PoolWithTag + 3 * v18 + 2) = -1LL;
      *((_QWORD *)PoolWithTag + 3 * v18) = 0LL;
      *((_QWORD *)PoolWithTag + 3 * v18 + 1) = 0LL;
      break;
    }
    *((_QWORD *)PoolWithTag + 3 * v18) = v21[3];
    *((_QWORD *)PoolWithTag + 3 * v18 + 1) = *v21;
    *((_QWORD *)PoolWithTag + 3 * v18 + 2) = v21[1];
    v10 = RtlDeleteOwnersRanges(*(__int64 ***)(a1 + 48), v21[3]);
    if ( v10 < 0 )
      goto LABEL_17;
  }
  RtlFreeRangeList(*(_QWORD **)(a1 + 48));
  v7 = v24;
  v19 = v22;
  *(_QWORD *)(a1 + 336) = v24;
  *(_QWORD *)(a1 + 328) = v19;
  **(_QWORD **)(a2 + 24) = PoolWithTag;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_19:
  if ( (v25[4] & 0x10) != 0 )
  {
    ExFreePoolWithTag(*((PVOID *)&v25[4] + 1), 0);
    LOWORD(v25[4]) &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    RtlFreeRangeList(*(_QWORD **)(a1 + 48));
    *(_QWORD *)(a1 + 336) = v7;
    *(_QWORD *)(a1 + 328) = v19;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
