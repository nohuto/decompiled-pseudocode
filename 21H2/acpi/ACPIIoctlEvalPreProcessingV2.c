/*
 * XREFs of ACPIIoctlEvalPreProcessingV2 @ 0x1C0058160
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058E44 (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  void *v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // eax
  int v13; // ecx
  __int64 result; // rax
  int *v15; // rbx
  __int64 *v16; // rdx
  void *Pool2; // rbp
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // r14
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  volatile signed __int32 *v29; // [rsp+30h] [rbp-78h] BYREF
  __int64 v30; // [rsp+38h] [rbp-70h]
  _QWORD *v31; // [rsp+40h] [rbp-68h]
  _QWORD *v32; // [rsp+48h] [rbp-60h]
  _QWORD *v33; // [rsp+50h] [rbp-58h]
  unsigned int *v34; // [rsp+58h] [rbp-50h]
  int Src; // [rsp+60h] [rbp-48h] BYREF
  char v36; // [rsp+64h] [rbp-44h]

  v31 = a5;
  v9 = 0LL;
  v32 = a6;
  v10 = 0;
  v33 = a7;
  v34 = a8;
  v11 = *(_DWORD *)(a3 + 16);
  v30 = a4;
  v13 = *(_DWORD *)(a3 + 8);
  v29 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v13 - 1) <= 0x16 )
    return 3221225507LL;
  v15 = *(int **)(a2 + 24);
  v36 = 0;
  Src = v15[1];
  v16 = *(__int64 **)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 760);
  if ( !v16 )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src, v16, &v29, 1);
  if ( (int)result >= 0 )
  {
    Pool2 = (void *)ExAllocatePool2(a4, 40LL, 1383097153LL);
    if ( Pool2 )
    {
      v18 = *v15;
      if ( *v15 == 1265198401 )
        goto LABEL_45;
      if ( v18 != 1281975617 && v18 != 1298752833 )
      {
        if ( v18 != 1315530049 )
          return 3221225711LL;
        v19 = (unsigned int)v15[3];
        if ( (_DWORD)v19 )
        {
          v20 = v15 + 4;
          v10 = v15[3];
          v21 = ExAllocatePool2(a4, 40 * v19, 1097884481LL);
          v9 = (void *)v21;
          if ( v21 )
          {
            v22 = 0;
            v23 = v21 + 24;
            while ( 1 )
            {
              if ( *(_WORD *)v20 == 4 )
                v24 = 4;
              else
                v24 = *(_WORD *)v20 + 1;
              *(_WORD *)(v23 - 22) = v24;
              v25 = *(_WORD *)v20;
              if ( *(_WORD *)v20 )
              {
                if ( v25 > 2u )
                {
                  if ( v25 == 4 )
                  {
                    v26 = AcpiIoctlArgumentToPackageObjV2(
                            (_DWORD)v20,
                            v30,
                            0,
                            (unsigned int)v9 + 8 * (5 * v22 + 3),
                            (__int64)v9 + 40 * v22 + 32);
                    if ( v26 < 0 )
                      goto LABEL_35;
                    goto LABEL_29;
                  }
                  *(_WORD *)(v23 - 22) = 3;
                }
                *(_DWORD *)v23 = v20[1];
                *(_QWORD *)(v23 + 8) = (unsigned __int64)(v20 + 2) & -(__int64)(v20[1] != 0);
              }
              else
              {
                *(_QWORD *)(v23 - 8) = (unsigned int)v20[2];
              }
LABEL_29:
              v27 = (unsigned int)v20[1];
              if ( (unsigned int)v27 < 4 )
                v27 = 4LL;
              ++v22;
              v20 = (_DWORD *)((char *)v20 + v27 + 8);
              v23 += 40LL;
              if ( v22 >= v10 )
                goto LABEL_45;
            }
          }
          goto LABEL_34;
        }
LABEL_45:
        *v31 = v29;
        *v32 = Pool2;
        *v33 = v9;
        *v34 = v10;
        return 0LL;
      }
      v10 = 1;
      v28 = ExAllocatePool2(a4, 40LL, 1097884481LL);
      v9 = (void *)v28;
      if ( v28 )
      {
        if ( *v15 == 1281975617 )
        {
          *(_WORD *)(v28 + 2) = 1;
          *(_QWORD *)(v28 + 16) = (unsigned int)v15[2];
        }
        else
        {
          *(_WORD *)(v28 + 2) = 2;
          *(_DWORD *)(v28 + 24) = v15[2];
          *(_QWORD *)(v28 + 32) = (unsigned __int64)(v15 + 3) & -(__int64)(v15[2] != 0);
        }
        goto LABEL_45;
      }
    }
LABEL_34:
    v26 = -1073741670;
LABEL_35:
    if ( v29 )
      AMLIDereferenceHandleEx(v29);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x52706341u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52706341u);
    return (unsigned int)v26;
  }
  return result;
}
