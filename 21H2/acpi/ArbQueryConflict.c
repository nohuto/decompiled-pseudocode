/*
 * XREFs of ArbQueryConflict @ 0x1C00B7D10
 * Callers:
 *     IrqArbQueryConflict @ 0x1C00B6940 (IrqArbQueryConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B6FF8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     RtlFreeRangeList_0 @ 0x1C002F18F (RtlFreeRangeList_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ArbpBuildAlternative @ 0x1C009BFF8 (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbQueryConflict(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  void *Pool2; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  struct _RTL_RANGE_LIST *v8; // rdx
  struct _RTL_RANGE_LIST *v9; // rcx
  int v10; // edi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS DeviceProperty; // eax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ecx
  unsigned __int8 (__fastcall *v16)(__int64, _QWORD *); // rax
  void *v17; // r12
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  _QWORD v25[10]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v26[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27[8]; // [rsp+100h] [rbp+0h] BYREF

  memset(v26, 0, sizeof(v26));
  memset(v27, 0, sizeof(v27));
  v21 = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  LODWORD(v6) = 10;
  memset(v25, 0, sizeof(v25));
  v7 = *(_QWORD *)(a1 + 336);
  v8 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  v22 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 336) = ArbpQueryConflictCallback;
  v9 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  *(_QWORD *)(a1 + 328) = &v21;
  v24 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), v27);
  if ( v10 < 0 )
    goto LABEL_18;
  *(_QWORD *)((char *)&v25[8] + 2) = 0LL;
  *(_DWORD *)((char *)&v25[9] + 2) = 0;
  HIWORD(v25[9]) = 0;
  v25[1] = v27[1];
  v25[3] = v27[1];
  v25[5] = v27;
  v25[7] = v27;
  v25[4] = v26;
  v25[0] = v27[0];
  v25[2] = v27[0];
  v11 = *(struct _DEVICE_OBJECT **)a2;
  v25[6] = 1LL;
  LOWORD(v25[8]) = 4;
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
  Pool2 = (void *)ExAllocatePool2(256LL, 240LL, 1130525249LL);
  if ( !Pool2 )
  {
    v10 = -1073741670;
LABEL_18:
    v19 = v22;
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224))(a1, v25);
  if ( v10 < 0 )
    goto LABEL_18;
  RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), *(PVOID *)(v25[4] + 32LL));
  while ( 1 )
  {
    v25[2] = v25[0];
    v10 = 0;
    v25[3] = v25[1];
    v16 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 248);
    v21 = 0LL;
    if ( v16(a1, v25) )
      break;
    if ( v4 == (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 + 5);
      v17 = Pool2;
      Pool2 = (void *)ExAllocatePool2(256LL, 24 * v6, 1130525249LL);
      if ( !Pool2 )
      {
        v10 = -1073741670;
        Pool2 = v17;
LABEL_17:
        v7 = v24;
        goto LABEL_18;
      }
      memmove(Pool2, v17, 24LL * v4);
      ExFreePoolWithTag(v17, 0);
    }
    v18 = v4++;
    if ( !v21 )
    {
      *((_QWORD *)Pool2 + 3 * v18 + 2) = -1LL;
      *((_QWORD *)Pool2 + 3 * v18) = 0LL;
      *((_QWORD *)Pool2 + 3 * v18 + 1) = 0LL;
      break;
    }
    *((_QWORD *)Pool2 + 3 * v18) = *(_QWORD *)(v21 + 24);
    *((_QWORD *)Pool2 + 3 * v18 + 1) = *(_QWORD *)v21;
    *((_QWORD *)Pool2 + 3 * v18 + 2) = *(_QWORD *)(v21 + 8);
    v10 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), *(PVOID *)(v21 + 24));
    if ( v10 < 0 )
      goto LABEL_17;
  }
  RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
  v7 = v24;
  v19 = v22;
  *(_QWORD *)(a1 + 336) = v24;
  *(_QWORD *)(a1 + 328) = v19;
  **(_QWORD **)(a2 + 24) = Pool2;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_19:
  if ( (v25[8] & 0x10) != 0 )
  {
    ExFreePoolWithTag((PVOID)v25[9], 0);
    LOWORD(v25[8]) &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
    *(_QWORD *)(a1 + 336) = v7;
    *(_QWORD *)(a1 + 328) = v19;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
