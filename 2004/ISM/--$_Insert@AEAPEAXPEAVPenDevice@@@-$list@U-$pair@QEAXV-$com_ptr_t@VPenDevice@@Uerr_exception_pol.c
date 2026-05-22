/*
 * XREFs of ??$_Insert@AEAPEAXPEAVPenDevice@@@?$list@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEAX$$QEAPEAVPenDevice@@@Z @ 0x18012DE40
 * Callers:
 *     ?AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z @ 0x18012ED94 (-AttachRIMDevice@PenDeviceManager@@QEAAXPEAX0@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x1800146F0 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 */

_QWORD *__fastcall std::list<std::pair<void * const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>::_Insert<void * &,PenDevice *>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v9[2] = *a3;
  result = wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
             v9 + 3,
             *a4);
  *v9 = a2;
  v9[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v8 = v9;
  return result;
}
