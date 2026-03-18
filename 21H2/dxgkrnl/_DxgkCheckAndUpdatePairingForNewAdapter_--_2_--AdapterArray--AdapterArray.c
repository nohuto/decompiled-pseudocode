/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1C02CE340
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C021BA30 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = a2;
  v6 = 16LL * a2;
  if ( !is_mul_ok(a2, 0x10uLL) )
    v6 = -1LL;
  v7 = __CFADD__(v6, 8LL);
  v8 = v6 + 8;
  if ( v7 )
    v8 = -1LL;
  v9 = operator new[](v8, 0x4B677844u, 256LL, a4);
  if ( v9 )
  {
    v10 = v9 + 8;
    *(_QWORD *)v9 = v5;
    `vector constructor iterator'(
      (char *)(v9 + 8),
      16LL,
      (unsigned int)v5,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    *(_QWORD *)(a1 + 8) = v10;
    if ( v10 )
      *(_DWORD *)(a1 + 4) = v5;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return a1;
}
