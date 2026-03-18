/*
 * XREFs of ACPIIoctlEvalPreProcessingV2Ex @ 0x1C00584B0
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C001CF54 (AMLIIsObjectInGivenScope.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058E44 (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2Ex(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  int v9; // r10d
  char *v11; // rdi
  void *Pool2; // r15
  unsigned int v13; // r12d
  int *v15; // rsi
  __int64 *v16; // rbp
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
  unsigned __int16 *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // ebp
  __int64 v23; // r14
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rcx
  volatile signed __int32 *v29; // [rsp+78h] [rbp+10h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = *(_DWORD *)(a3 + 8);
  v29 = 0LL;
  v11 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  Pool2 = 0LL;
  v13 = 0;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v9 - 1) <= 0x16 )
    return 3221225507LL;
  v15 = *(int **)(a2 + 24);
  v16 = *(__int64 **)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v16 )
    return 3221225486LL;
  _strupr((char *)v15 + 4);
  v17 = AMLIGetNameSpaceObject((_BYTE *)v15 + 4, v16, &v29, 1);
  if ( v17 < 0 )
    goto LABEL_11;
  v17 = AMLIIsObjectInGivenScope((__int64)v29, v16);
  if ( v17 < 0 )
    goto LABEL_11;
  Pool2 = (void *)ExAllocatePool2(a4, 40LL, 1383097153LL);
  if ( !Pool2 )
    goto LABEL_10;
  v18 = *v15;
  if ( *v15 == 1332307265 )
    goto LABEL_46;
  if ( v18 == 1349084481 || v18 == 1365861697 )
  {
    v13 = 1;
    v27 = ExAllocatePool2(a4, 40LL, 1097884481LL);
    v11 = (char *)v27;
    if ( !v27 )
      goto LABEL_10;
    v28 = v15 + 66;
    if ( *v15 == 1349084481 )
    {
      *(_WORD *)(v27 + 2) = 1;
      *(_QWORD *)(v27 + 16) = *v28;
    }
    else
    {
      *(_WORD *)(v27 + 2) = 2;
      *(_DWORD *)(v27 + 24) = v15[65];
      *(_QWORD *)(v27 + 32) = v28;
    }
LABEL_46:
    *a5 = v29;
    *a6 = Pool2;
    *a7 = v11;
    *a8 = v13;
    return 0LL;
  }
  if ( v18 != 1382638913 )
  {
    v17 = -1073741585;
    goto LABEL_11;
  }
  v19 = (unsigned int)v15[66];
  if ( !(_DWORD)v19 )
    goto LABEL_46;
  v13 = v15[66];
  v20 = (unsigned __int16 *)(v15 + 67);
  v21 = ExAllocatePool2(a4, 40 * v19, 1097884481LL);
  v11 = (char *)v21;
  if ( v21 )
  {
    v22 = 0;
    v23 = v21 + 24;
    while ( 1 )
    {
      if ( *v20 == 4 )
        v24 = 4;
      else
        v24 = *v20 + 1;
      *(_WORD *)(v23 - 22) = v24;
      v25 = *v20;
      if ( *v20 )
      {
        if ( v25 > 2u )
        {
          if ( v25 == 4 )
          {
            v17 = AcpiIoctlArgumentToPackageObjV2(
                    (_DWORD)v20,
                    v30,
                    1,
                    (unsigned int)v11 + 8 * (5 * v22 + 3),
                    (__int64)&v11[40 * v22 + 32]);
            if ( v17 < 0 )
              goto LABEL_11;
            goto LABEL_38;
          }
          *(_WORD *)(v23 - 22) = 3;
        }
        *(_DWORD *)v23 = *((_DWORD *)v20 + 1);
        *(_QWORD *)(v23 + 8) = (unsigned __int64)(v20 + 4) & -(__int64)(*((_DWORD *)v20 + 1) != 0);
      }
      else
      {
        *(_QWORD *)(v23 - 8) = 0LL;
        memmove(&v11[32 * v22 + 16 + 8 * v22], v20 + 4, *((unsigned int *)v20 + 1));
      }
LABEL_38:
      v26 = *((unsigned int *)v20 + 1);
      if ( (unsigned int)v26 < 4 )
        v26 = 4LL;
      v20 = (unsigned __int16 *)((char *)v20 + v26 + 8);
      ++v22;
      v23 += 40LL;
      if ( v22 >= v13 )
        goto LABEL_46;
    }
  }
LABEL_10:
  v17 = -1073741670;
LABEL_11:
  if ( v29 )
    AMLIDereferenceHandleEx(v29);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x52706341u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x52706341u);
  return (unsigned int)v17;
}
