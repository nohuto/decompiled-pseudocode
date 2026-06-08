/*
 * XREFs of RegisterXsdDomain @ 0x1C003293C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002A3A0 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     PepQueryPerfDomainInfo @ 0x1C00362DC (PepQueryPerfDomainInfo.c)
 */

char __fastcall RegisterXsdDomain(_QWORD *a1)
{
  _DWORD *v1; // rsi
  _DWORD *v3; // r12
  char v4; // r15
  char v5; // di
  __int64 i; // rbx
  unsigned int v8; // r14d
  PVOID PoolWithTag; // rax
  __int64 *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx

  v1 = (_DWORD *)a1[67];
  v3 = (_DWORD *)a1[149];
  v4 = v1 == v3;
  v5 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00143F8,
    0LL);
  for ( i = qword_1C0014420; (__int64 *)i != &qword_1C0014420; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 36) == v1[3] )
    {
      if ( v4 != *(_BYTE *)(i + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x13u,
            (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids);
        goto LABEL_8;
      }
LABEL_14:
      a1[68] = i;
      v11 = *(_QWORD **)(i + 24);
      v12 = a1 + 69;
      if ( *v11 == i + 16 )
      {
        *v12 = i + 16;
        a1[70] = v11;
        *v11 = v12;
        *(_QWORD *)(i + 24) = v12;
        if ( ++*(_DWORD *)(i + 32) == *(_DWORD *)(i + 44)
          && (!*(_BYTE *)(i + 48) || (int)PepQueryPerfDomainInfo(a1, i) >= 0) )
        {
          v5 = 1;
        }
        goto LABEL_8;
      }
LABEL_19:
      __fastfail(3u);
    }
  }
  v8 = 56;
  if ( v1 == v3 )
    v8 = 72;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72637250u);
  i = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v8);
    *(_QWORD *)(i + 24) = i + 16;
    *(_QWORD *)(i + 16) = i + 16;
    v10 = (__int64 *)qword_1C0014428;
    if ( *(__int64 **)qword_1C0014428 == &qword_1C0014420 )
    {
      *(_QWORD *)i = &qword_1C0014420;
      *(_QWORD *)(i + 8) = v10;
      *v10 = i;
      qword_1C0014428 = i;
      *(_DWORD *)(i + 36) = v1[3];
      *(_DWORD *)(i + 40) = v1[4];
      *(_DWORD *)(i + 44) = v1[5];
      *(_BYTE *)(i + 48) = v4;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
LABEL_8:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00143F8);
  return v5;
}
