/*
 * XREFs of ??_G?$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@UEAAPEAXI@Z @ 0x180007F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
