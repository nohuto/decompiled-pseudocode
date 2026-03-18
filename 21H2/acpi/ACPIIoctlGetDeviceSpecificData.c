/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x1C002B560
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001410 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001BE20 (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIIsObjectInGivenScope @ 0x1C001CF54 (AMLIIsObjectInGivenScope.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  _IRP *MasterIrp; // r13
  __int64 DeviceExtension; // rax
  _QWORD *v9; // rsi
  int v10; // ebx
  __int64 Pool2; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  _DWORD *v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbx
  unsigned int v20; // eax
  SIZE_T v21; // rax
  __int64 *v22; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  v22 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x1C )
  {
    v10 = -1073741820;
    goto LABEL_10;
  }
  if ( (unsigned int)(v5 - 1) <= 0x12 )
  {
    v10 = -1073741789;
    goto LABEL_10;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v10 = -1073741585;
    goto LABEL_10;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = *(_QWORD **)(DeviceExtension + 760);
  if ( !v9 )
  {
    v10 = -1073741810;
    goto LABEL_10;
  }
  v10 = AMLIGetNameSpaceObject("_DSD", *(__int64 **)(DeviceExtension + 760), &v22, 1);
  if ( v10 >= 0 )
  {
    v10 = AMLIIsObjectInGivenScope((__int64)v22, v9);
    if ( v10 >= 0 )
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1383097153LL);
      v6 = Pool2;
      if ( !Pool2 )
      {
        v10 = -1073741670;
        goto LABEL_6;
      }
      v10 = AMLIEvalNameSpaceObject(v22, Pool2, 0, 0LL);
      if ( v10 >= 0 )
      {
        if ( *(_WORD *)(v6 + 2) != 4 )
          goto LABEL_20;
        v13 = *(_DWORD **)(v6 + 32);
        v14 = 0LL;
        if ( *v13 <= 1u )
          goto LABEL_20;
        while ( HIWORD(v13[10 * v14 + 2]) != 3
             || v13[10 * v14 + 8] != 16
             || RtlCompareMemory(&MasterIrp->AllocationProcessorNumber, *(const void **)&v13[10 * v14 + 10], 0x10uLL) != 16 )
        {
          v14 = (unsigned int)(v14 + 2);
          if ( (unsigned int)(v14 + 1) >= *v13 )
            goto LABEL_20;
        }
        LODWORD(v15) = *(&MasterIrp->Flags + 1);
        if ( (_DWORD)v15 )
        {
          if ( HIWORD(v13[10 * (unsigned int)(v14 + 1) + 2]) != 4 )
            goto LABEL_20;
          v17 = *(_DWORD **)&v13[10 * (unsigned int)(v14 + 1) + 10];
          v18 = 0LL;
          if ( !*v17 )
            goto LABEL_20;
          while ( 1 )
          {
            if ( HIWORD(v17[10 * v18 + 2]) == 4 )
            {
              v19 = *(_QWORD *)&v17[10 * v18 + 10];
              if ( *(_DWORD *)v19 > 1u && *(_WORD *)(v19 + 10) == 2 )
              {
                v20 = *(_DWORD *)(v19 + 32);
                if ( (_DWORD)v15 == v20 )
                {
                  v21 = RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v19 + 40), v20);
                  v15 = *(&MasterIrp->Flags + 1);
                  if ( v15 == v21 )
                    break;
                }
              }
            }
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= *v17 )
              goto LABEL_20;
          }
          v16 = v19 + 48;
        }
        else
        {
          v16 = (__int64)&v13[10 * (unsigned int)(v14 + 1) + 2];
        }
        if ( v16 )
        {
          v10 = ACPIIoctlEvalPostProcessingV1(a2, v16, 1);
          goto LABEL_21;
        }
LABEL_20:
        v10 = -1073741275;
LABEL_21:
        dword_1C0081AC8 = 0;
        byte_1C0081ACC = 0;
        FreeDataBuffs(v6, 1u);
      }
    }
  }
LABEL_6:
  if ( v22 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v22);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x52706341u);
LABEL_10:
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
