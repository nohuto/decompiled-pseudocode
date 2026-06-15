/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x14003CB6C
 * Callers:
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$28 @ 0x14002C7E0 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$28.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x14003CF38 (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
