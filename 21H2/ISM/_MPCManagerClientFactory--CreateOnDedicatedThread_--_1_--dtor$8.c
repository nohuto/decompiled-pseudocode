/*
 * XREFs of _MPCManagerClientFactory::CreateOnDedicatedThread_::_1_::dtor$8 @ 0x180107A03
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18003AFC4 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall MPCManagerClientFactory::CreateOnDedicatedThread_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 136) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 136) &= ~1u;
    return Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>((_QWORD *)(a2 + 56));
  }
  return result;
}
