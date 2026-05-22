/*
 * XREFs of _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkTreeCache_::_1_::dtor$164 @ 0x18004FC50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B224 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall InputSiteHierarchyManager::UpdateHierarchyFromInputSinkTreeCache_::_1_::dtor_164(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 0x20);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~0x20u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 96));
  }
  return result;
}
