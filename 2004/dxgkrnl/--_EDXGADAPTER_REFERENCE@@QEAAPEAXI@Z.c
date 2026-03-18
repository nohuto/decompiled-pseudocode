/*
 * XREFs of ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C003D850
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C0176A20 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C0220BE4 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C378 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
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
