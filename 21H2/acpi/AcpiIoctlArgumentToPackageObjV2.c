/*
 * XREFs of AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058E44
 * Callers:
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0058160 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C00584B0 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058E44 (AcpiIoctlArgumentToPackageObjV2.c)
 * Callees:
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C0058E44 (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall AcpiIoctlArgumentToPackageObjV2(__int64 a1, __int64 a2, char a3, unsigned int *a4, PVOID *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int v9; // r14d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int *Pool2; // rax
  int v18; // r8d
  unsigned int v19; // ebx
  unsigned int v20; // ebp
  __int64 i; // rdi
  char *v22; // rdx
  __int16 v23; // ax
  unsigned __int16 v24; // ax
  int v25; // eax
  __int64 v26; // rax
  int v28; // [rsp+68h] [rbp+10h]

  v28 = a2;
  *a4 = 0;
  v7 = a2;
  *a5 = 0LL;
  if ( !a1 || (v8 = *(unsigned int *)(a1 + 4), (unsigned int)(v8 - 1) <= 0xA) || *(_WORD *)a1 != 4 )
  {
    v19 = -1073741811;
LABEL_34:
    if ( *a5 )
    {
      ExFreePoolWithTag(*a5, 0x41706341u);
      *a4 = 0;
      *a5 = 0LL;
    }
    return v19;
  }
  v9 = 0;
  v10 = a1 + 8;
  v11 = v8 + a1 + 8;
  v12 = v10;
  if ( v10 >= v11 )
  {
LABEL_13:
    v16 = 40 * v9 + 8;
    *a4 = v16;
    Pool2 = (unsigned int *)ExAllocatePool2(v7, v16, 1097884481LL);
    v18 = 0;
    *a5 = Pool2;
    if ( !Pool2 )
    {
      v19 = -1073741670;
      goto LABEL_34;
    }
    *Pool2 = v9;
    v20 = 0;
    if ( !v9 )
      return 0;
    for ( i = 0LL; ; i += 40LL )
    {
      v22 = (char *)*a5;
      if ( *(_WORD *)v10 == 4 )
        v23 = 4;
      else
        v23 = *(_WORD *)v10 + 1;
      *(_WORD *)&v22[i + 10] = v23;
      v24 = *(_WORD *)v10;
      if ( *(_WORD *)v10 )
      {
        if ( v24 > 2u )
        {
          if ( v24 == 4 )
          {
            LOBYTE(v18) = a3;
            v25 = AcpiIoctlArgumentToPackageObjV2(v10, v7, v18, (int)i + (int)v22 + 32, (__int64)&v22[i + 40]);
            v18 = 0;
            v19 = v25;
            if ( v25 < 0 )
              goto LABEL_34;
            LODWORD(v7) = v28;
            goto LABEL_29;
          }
          *(_WORD *)&v22[i + 10] = 3;
        }
        *(_DWORD *)&v22[i + 32] = *(_DWORD *)(v10 + 4);
        *(_QWORD *)&v22[i + 40] = v10 + 8;
      }
      else
      {
        *(_DWORD *)&v22[i + 32] = a3 != 0 ? 8 : 4;
        *(_QWORD *)&v22[i + 24] = *(unsigned int *)(v10 + 8);
      }
LABEL_29:
      v26 = *(unsigned int *)(v10 + 4);
      if ( (unsigned int)v26 < 4 )
        v26 = 4LL;
      ++v20;
      v10 += v26 + 8;
      if ( v20 >= v9 )
        return 0;
    }
  }
  while ( *(_WORD *)v12 <= 4u )
  {
    v13 = *(_DWORD *)(v12 + 4);
    if ( v13 > (unsigned int)v8 )
      break;
    v14 = 4LL;
    if ( v13 >= 4 )
      v14 = v13;
    v15 = *(unsigned int *)(v12 + 4);
    if ( v12 + v14 + 8 > v11 )
      break;
    ++v9;
    if ( v13 < 4 )
      v15 = 4LL;
    v12 += v15 + 8;
    if ( v12 >= v11 )
      goto LABEL_13;
  }
  return (unsigned int)-1073741788;
}
