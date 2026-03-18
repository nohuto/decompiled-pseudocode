/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C02CE580
 * Callers:
 *     _lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_ @ 0x1C02CE300 (_lambda_85aa73a68ff66b421643f8c78198376d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C004973C (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter(
        unsigned int *a1,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  DXGADAPTER_REFERENCE *v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // eax
  DXGADAPTER **v20; // rcx

  v6 = *a1;
  v7 = a1[1];
  if ( (unsigned int)v6 < v7 )
  {
LABEL_14:
    v19 = v6 + 1;
    v20 = (DXGADAPTER **)(*((_QWORD *)a1 + 1) + 16 * v6);
    *a1 = v19;
    DXGADAPTER_REFERENCE::Assign(v20, a2);
    return 0LL;
  }
  v8 = v7 + 16;
  v9 = v7 + 16;
  v10 = 16 * v9;
  if ( !is_mul_ok(v9, 0x10uLL) )
    v10 = -1LL;
  v11 = __CFADD__(v10, 8LL);
  v12 = v10 + 8;
  if ( v11 )
    v12 = -1LL;
  v13 = operator new[](v12, 0x4B677844u, 256LL, a4);
  if ( v13 )
  {
    v14 = v13 + 8;
    *(_QWORD *)v13 = v9;
    `vector constructor iterator'(
      (char *)(v13 + 8),
      16LL,
      (unsigned int)v9,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    if ( v14 )
    {
      v15 = (DXGADAPTER_REFERENCE *)*((_QWORD *)a1 + 1);
      if ( v15 )
      {
        v16 = 0;
        if ( !*a1 )
          goto LABEL_12;
        do
        {
          v17 = *((_QWORD *)a1 + 1);
          v18 = v16++;
          v18 *= 2LL;
          *(_QWORD *)(v14 + 8 * v18) = *(_QWORD *)(v17 + 8 * v18);
          *(_QWORD *)(v14 + 8 * v18 + 8) = *(_QWORD *)(v17 + 8 * v18 + 8);
          *(_QWORD *)(v17 + 8 * v18) = 0LL;
          *(_QWORD *)(v17 + 8 * v18 + 8) = 0LL;
        }
        while ( v16 < *a1 );
        v15 = (DXGADAPTER_REFERENCE *)*((_QWORD *)a1 + 1);
        if ( v15 )
LABEL_12:
          DXGADAPTER_REFERENCE::`vector deleting destructor'(v15);
      }
      v6 = *a1;
      a1[1] = v8;
      *((_QWORD *)a1 + 1) = v14;
      goto LABEL_14;
    }
  }
  WdLogSingleEntry1(6LL, 11801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXGADAPTER_REFERENCE array.",
    11801LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
