/*
 * XREFs of AcpiGetCoordinatedLpiStates @ 0x1C00285A8
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003070C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     Display_LPI @ 0x1C0006B20 (Display_LPI.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     AcpiParseProcessorContainer @ 0x1C002948C (AcpiParseProcessorContainer.c)
 */

__int64 __fastcall AcpiGetCoordinatedLpiStates(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edi
  SIZE_T v11; // rbp
  _DWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbp
  __int64 i; // rbp
  __int64 v17; // rcx
  __int64 j; // rsi
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  __int128 v23; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+60h] [rbp-28h]
  __int64 v25; // [rsp+A0h] [rbp+18h] BYREF

  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = 32;
  v5 = 0LL;
  while ( 1 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v4, 0x72637250u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v8 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v23 + 1) = PoolWithTag;
    *(_QWORD *)&v23 = 1LL;
    v24 = v4;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v8,
           0LL,
           2703748LL,
           0LL,
           &v23,
           0LL,
           &v25);
    v10 = v9;
    if ( v9 != -2147483643 )
      break;
    v4 = *v7;
    ExFreePoolWithTag(v7, 0);
  }
  if ( v9 >= 0 && v25 )
  {
    v11 = 40 * v7[1] + 8;
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x72637250u);
    v5 = v12;
    if ( v12 )
    {
      memset(v12, 0, v11);
      v15 = 0LL;
      *v5 = v7[1];
      while ( (unsigned int)v15 < v7[1] )
      {
        v10 = AcpiParseProcessorContainer(v7, (unsigned int)v15, &v5[8 * v15 + 2 + 2 * (unsigned int)v15]);
        if ( v10 < 0 )
          goto LABEL_18;
        v15 = (unsigned int)(v15 + 1);
      }
      for ( i = 0LL; (unsigned int)i < *v5; i = (unsigned int)(i + 1) )
      {
        v17 = *(_QWORD *)&v5[10 * i + 6];
        if ( v17 )
          Display_LPI(v17, *(const wchar_t **)&v5[10 * i + 4], v13, v14);
      }
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      v10 = -1073741670;
    }
  }
LABEL_18:
  ExFreePoolWithTag(v7, 0);
  if ( v5 )
  {
    for ( j = 0LL; (unsigned int)j < *v5; j = (unsigned int)(j + 1) )
    {
      v19 = *(void **)&v5[10 * j + 4];
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      v20 = *(void **)&v5[10 * j + 10];
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      v21 = *(void **)&v5[10 * j + 6];
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
    }
    ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v10;
}
