/*
 * XREFs of InternalRawAccessOpRegionHandler @ 0x1C005D960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0030C38 (ACPIInternalGetDeviceFromNSOBJ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0052650 (WPP_RECORDER_SF_qq.c)
 *     GetFieldUnitRegionObj @ 0x1C00666B8 (GetFieldUnitRegionObj.c)
 */

__int64 __fastcall InternalRawAccessOpRegionHandler(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  volatile signed __int32 *v8; // rbx
  int FieldUnitRegionObj; // ebp
  bool v12; // zf
  unsigned __int64 v13; // rdx
  volatile signed __int32 *v14; // r15
  __int64 v15; // r12
  int v16; // eax
  unsigned int v17; // ebp
  __int64 Pool2; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned int v22; // eax
  PVOID v23; // rbp
  unsigned int v24; // edi
  __int64 v25; // [rsp+28h] [rbp-60h]
  int v26; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF

  Object[0] = 0LL;
  v27 = 0LL;
  v8 = 0LL;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj(a3, &v27);
  v12 = FieldUnitRegionObj == 0;
  if ( FieldUnitRegionObj >= 0 )
  {
    v13 = v27;
    if ( v27 )
    {
      v8 = (volatile signed __int32 *)(v27 + 120);
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v27 + 128), 1u);
        v13 = v27;
      }
      DereferenceObjectEx(v13);
    }
    v12 = FieldUnitRegionObj == 0;
  }
  if ( !v12 || !v8 )
    return 3221225473LL;
  v14 = (volatile signed __int32 *)AMLIGetParent((__int64)v8);
  AMLIDereferenceHandleEx(v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xAu,
      (__int64)&WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
      a3,
      v14);
  if ( !a5 || !*(_QWORD *)(a5 + 16) )
    return 3221225473LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v15 = a4 + 16;
    v16 = 8;
  }
  else
  {
    v15 = *(_QWORD *)(a4 + 32);
    v16 = *(_DWORD *)(a4 + 24);
  }
  v12 = *(_DWORD *)(a3 + 28) == 0;
  v26 = v16;
  if ( v12 || (v17 = *(_DWORD *)(a3 + 36) + 56, v17 <= 0x40) )
    v17 = 64;
  Pool2 = ExAllocatePool2(64LL, v17, 1332765505LL);
  v20 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 4) = v17;
  *(_DWORD *)Pool2 = 1;
  *(_BYTE *)(Pool2 + 8) = a1;
  *(_BYTE *)(Pool2 + 9) = *(_BYTE *)(a3 + 20) & 0xF;
  *(_BYTE *)(Pool2 + 12) = (*(_DWORD *)(a3 + 20) >> 4) & 6;
  *(_BYTE *)(Pool2 + 10) = BYTE1(*(_DWORD *)(a3 + 20));
  *(_QWORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 24) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(Pool2 + 28) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(Pool2 + 11) = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 28) )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a3 + 32);
    v22 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(v20 + 52) = v22;
    memmove((void *)(v20 + 56), (const void *)(a3 + 40), v22);
  }
  ACPIInternalGetDeviceFromNSOBJ((__int64)v14, Object, v19, 0LL);
  v23 = Object[0];
  *(PVOID *)(v20 + 40) = Object[0];
  v24 = (*(__int64 (__fastcall **)(__int64, __int64, int *, _QWORD, __int64, __int64))(a5 + 16))(
          v20,
          v15,
          &v26,
          *(_QWORD *)(a5 + 24),
          a6,
          a7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v25) = v24;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      3u,
      0xBu,
      (__int64)&WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
      v25);
  }
  if ( v23 )
    ObfDereferenceObject(v23);
  if ( v24 == -1073741789 )
  {
    *(_WORD *)(a4 + 2) = 1;
    *(_DWORD *)(a4 + 16) = v26;
  }
  ExFreePoolWithTag((PVOID)v20, 0x4F706341u);
  AMLIDereferenceHandleEx(v14);
  return v24;
}
