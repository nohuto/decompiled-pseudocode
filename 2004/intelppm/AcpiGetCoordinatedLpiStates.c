/*
 * XREFs of AcpiGetCoordinatedLpiStates @ 0x1C0032180
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00358FC (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     Display_LPI @ 0x1C000C058 (Display_LPI.c)
 *     AcpiParseProcessorContainer @ 0x1C0032DC0 (AcpiParseProcessorContainer.c)
 */

__int64 __fastcall AcpiGetCoordinatedLpiStates(__int64 a1, unsigned int **a2)
{
  SIZE_T v4; // rsi
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rdi
  __int64 i; // rdi
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  unsigned int v16; // ebp
  unsigned int *v17; // rax
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int128 v24; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+60h] [rbp-28h]
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF

  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v4 = 32LL;
  v5 = 0LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v4, 0x72637250u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_5;
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)&v24 = 1LL;
    *((_QWORD *)&v24 + 1) = PoolWithTag;
    v25 = (unsigned int)v4;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v6,
           0LL,
           2703748LL,
           0LL,
           &v24,
           0LL,
           &v26);
    v8 = v7;
    if ( v7 != -2147483643 )
      break;
    v4 = *v10;
    ExFreePoolWithTag(v10, 0);
  }
  if ( v7 >= 0 && v26 )
  {
    v16 = 40 * v10[1] + 8;
    v17 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x72637250u);
    v5 = v17;
    if ( !v17 )
    {
LABEL_5:
      v8 = -1073741670;
      goto LABEL_6;
    }
    memset(v17, 0, v16);
    v20 = v10[1];
    v21 = 0LL;
    *v5 = v20;
    if ( v10[1] )
    {
      while ( 1 )
      {
        v8 = AcpiParseProcessorContainer(v10, (unsigned int)v21, &v5[8 * v21 + 2 + 2 * (unsigned int)v21]);
        if ( v8 < 0 )
          break;
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v10[1] )
        {
          v20 = *v5;
          goto LABEL_26;
        }
      }
    }
    else
    {
LABEL_26:
      v22 = 0LL;
      if ( v20 )
      {
        do
        {
          v23 = *(_QWORD *)&v5[10 * v22 + 6];
          if ( v23 )
            Display_LPI(v23, *(const wchar_t **)&v5[10 * v22 + 4], v18, v19);
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < *v5 );
      }
      *a2 = v5;
      v5 = 0LL;
    }
  }
LABEL_6:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v5 )
  {
    for ( i = 0LL; (unsigned int)i < *v5; i = (unsigned int)(i + 1) )
    {
      v12 = *(void **)&v5[10 * i + 4];
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      v13 = *(void **)&v5[10 * i + 10];
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      v14 = *(void **)&v5[10 * i + 6];
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
    }
    ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v8;
}
