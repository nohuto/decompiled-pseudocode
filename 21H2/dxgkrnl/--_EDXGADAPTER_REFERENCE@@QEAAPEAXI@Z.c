/*
 * XREFs of ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C004973C
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C021BA30 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C02CE580 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall DXGADAPTER_REFERENCE::`vector deleting destructor'(DXGADAPTER_REFERENCE *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    16LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
