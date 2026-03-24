/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C000BAC4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C000B8A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0012510 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A990 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeData @ 0x1C00036E8 (FreeData.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B5F4 (ACPIIoctlEvalPreProcessingV1.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C000BD98 (ACPIIoctlEvalPostProcessingV1.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C000C248 (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029BB4 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C005789C (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0057978 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057CE8 (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  PVOID v4; // rbx
  __int64 v5; // r13
  PVOID v6; // r15
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // edi
  __int64 v11; // r8
  int v12; // esi
  int v13; // esi
  int v14; // eax
  int v16; // esi
  PVOID v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF
  PVOID P; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  v7 = 0;
  v17[0] = 0LL;
  LODWORD(v18) = 0;
  switch ( v3 )
  {
    case 3325956:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)a2, a3, PagedPool, &v20, &P, v17, (unsigned int *)&v18);
      break;
    case 3325976:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(a1, a2, a3, 1LL, &v20, &P, v17, &v18);
      break;
    case 3326012:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v20, (__int64)&P, (__int64)v17, (__int64)&v18);
      break;
    case 3326020:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(a1, a2, a3, 1LL, &v20, &P, v17, &v18);
      break;
    default:
      goto LABEL_6;
  }
  v4 = P;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_15;
  v5 = v20;
  v6 = v17[0];
  v7 = v18;
LABEL_6:
  v10 = AMLIEvalNameSpaceObject(v5, v4, v7, v6);
  AMLIDereferenceHandleEx(v5);
  if ( v6 )
  {
    AcpiIoctlCleanupArgumentObjects(v6, v7);
    ExFreePoolWithTag(v6, 0x41706341u);
  }
  if ( v10 >= 0 )
  {
    v12 = v3 - 3325956;
    if ( v12 )
    {
      v13 = v12 - 20;
      if ( v13 )
      {
        v16 = v13 - 36;
        if ( v16 )
        {
          if ( v16 != 8 )
            goto LABEL_14;
          LOBYTE(v11) = 1;
        }
        else
        {
          v11 = 0LL;
        }
        v14 = ACPIIoctlEvalPostProcessingV2(a2, v4, v11);
LABEL_13:
        v10 = v14;
LABEL_14:
        dword_1C0082908 = 0;
        pszDest = 0;
        FreeData((__int64)v4);
        goto LABEL_15;
      }
      LOBYTE(v11) = 1;
    }
    else
    {
      v11 = 0LL;
    }
    v14 = ACPIIoctlEvalPostProcessingV1(a2, v4, v11);
    goto LABEL_13;
  }
LABEL_15:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
