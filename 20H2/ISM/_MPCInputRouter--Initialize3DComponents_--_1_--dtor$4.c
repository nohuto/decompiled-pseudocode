/*
 * XREFs of _MPCInputRouter::Initialize3DComponents_::_1_::dtor$4 @ 0x1800B836C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18003B304 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MPCInputRouter::Initialize3DComponents_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 160) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 64));
  }
  return result;
}
