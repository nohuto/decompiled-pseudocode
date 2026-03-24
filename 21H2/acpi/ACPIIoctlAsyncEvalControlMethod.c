/*
 * XREFs of ACPIIoctlAsyncEvalControlMethod @ 0x1C00572F4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C000B8A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0012510 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A990 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B5F4 (ACPIIoctlEvalPreProcessingV1.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C000BD98 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C000C248 (AcpiIoctlCleanupArgumentObjects.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029BB4 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C005789C (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0057978 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057CE8 (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  __int64 *v4; // r13
  void *v5; // r15
  PVOID v6; // rdi
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r8
  __int64 result; // rax
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // eax
  char v17; // r8
  __int64 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = 0;
  P = 0LL;
  LODWORD(v20) = 0;
  switch ( v3 )
  {
    case 3325952:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, NonPagedPoolNx, &v18, &P, &v19, (unsigned int *)&v20);
      break;
    case 3325980:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(
             a1,
             (__int64)a2,
             a3,
             NonPagedPoolNx,
             &v18,
             &P,
             (unsigned int **)&v19,
             (unsigned int *)&v20);
      break;
    case 3326016:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v18, (__int64)&P, (__int64)&v19, (__int64)&v20);
      break;
    case 3326024:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(a1, a2, a3, 512LL, &v18, &P, &v19, &v20);
      break;
    default:
      goto LABEL_11;
  }
  v6 = P;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_27;
  v4 = (__int64 *)v18;
  v5 = (void *)v19;
  v7 = v20;
LABEL_11:
  v10 = AMLIAsyncEvalObject(v4, (__int64)v6, v7, v5, &ACPIIoctlAsyncEvalControlMethodCompletion, a2);
  AMLIDereferenceHandleEx((__int64)v4);
  if ( v5 )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)v5, v7);
    ExFreePoolWithTag(v5, 0x41706341u);
  }
  result = 259LL;
  if ( v10 != 259 )
  {
    if ( v10 >= 0 )
    {
      v13 = v3 - 3325952;
      if ( v13 )
      {
        v14 = v13 - 28;
        if ( v14 )
        {
          v15 = v14 - 36;
          if ( v15 )
          {
            if ( v15 != 8 )
            {
LABEL_26:
              dword_1C0082908 = 0;
              pszDest = 0;
              FreeDataBuffs((__int64)v6, 1u);
              goto LABEL_27;
            }
            LOBYTE(v11) = 1;
          }
          else
          {
            v11 = 0LL;
          }
          v16 = ACPIIoctlEvalPostProcessingV2(a2, v6, v11);
LABEL_25:
          v10 = v16;
          goto LABEL_26;
        }
        v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      v16 = ACPIIoctlEvalPostProcessingV1(a2, (__int64)v6, v17);
      goto LABEL_25;
    }
LABEL_27:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x52706341u);
    a2->IoStatus.Status = v10;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v10;
  }
  return result;
}
