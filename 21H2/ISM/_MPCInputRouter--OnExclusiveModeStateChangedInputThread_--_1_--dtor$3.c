/*
 * XREFs of _MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor$3 @ 0x1800B947D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18003AFC4 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 160) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 160) &= ~1u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 184));
  }
  return result;
}
