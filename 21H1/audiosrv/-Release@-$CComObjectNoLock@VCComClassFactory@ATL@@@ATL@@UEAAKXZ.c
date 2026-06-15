/*
 * XREFs of ?Release@?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x180121650
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x18006F2E8 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     ??_G?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x180120CEC (--_G-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComObjectNoLock<ATL::CComClassFactory>::Release(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v2; // r10

  v1 = ATL::CComMultiThreadModel::SafeDecrementReference((int *)(a1 + 8));
  if ( !v1 && v2 )
    ATL::CComObjectNoLock<ATL::CComClassFactory>::`scalar deleting destructor'(v2);
  return v1;
}
