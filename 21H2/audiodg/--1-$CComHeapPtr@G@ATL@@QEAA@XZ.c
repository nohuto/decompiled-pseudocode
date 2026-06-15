/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x14003CCFC
 * Callers:
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$28 @ 0x14002C8B0 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$28.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x14003D0C8 (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
