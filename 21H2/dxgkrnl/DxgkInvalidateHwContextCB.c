/*
 * XREFs of DxgkInvalidateHwContextCB @ 0x1C004BDD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkInvalidateHwContextCB(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 DxgAdapter; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rcx

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 850LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0LL,
          2,
          -1,
          L"KeGetCurrentIrql() == PASSIVE_LEVEL",
          850LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)a1);
  if ( !*(_QWORD *)(DxgAdapter + 2800) )
    WdLogSingleEntry5(0LL, 275LL, 7LL, 0LL, 0LL, 0LL);
  if ( *(int *)(DxgAdapter + 2424) < 9472 )
  {
    WdLogSingleEntry1(1LL, 863LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0LL,
          2,
          -1,
          L"pDxgAdapter->GetDriverCaps()->WDDMVersion >= DXGKDDI_WDDMv2_5",
          863LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2800) + 624LL)
                                                                  + 8LL)
                                                      + 256LL))(
             v9,
             *(unsigned int *)(a1 + 16));
  else
    return 0LL;
}
