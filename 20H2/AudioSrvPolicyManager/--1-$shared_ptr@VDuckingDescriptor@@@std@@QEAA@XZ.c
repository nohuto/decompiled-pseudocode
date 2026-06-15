/*
 * XREFs of ??1?$shared_ptr@VDuckingDescriptor@@@std@@QEAA@XZ @ 0x18000A1D0
 * Callers:
 *     _CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains_::_1_::dtor$1 @ 0x18003C473 (_CStreamClassPolicyGainsWrapper--UpdateStreamClassPolicyGains_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains_::_1_::dtor$3 @ 0x18003C485 (_CStreamClassPolicyGainsWrapper--UpdateStreamClassPolicyGains_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$4 @ 0x18003C5EC (_TsSessionCreate_--_1_--dtor$4.c)
 *     _TsSessionCreate_::_1_::dtor$7 @ 0x18003C610 (_TsSessionCreate_--_1_--dtor$7.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x18003C622 (_TsSessionCreate_--_1_--dtor$10.c)
 *     _TsSessionCreate_::_1_::dtor$13 @ 0x18003C646 (_TsSessionCreate_--_1_--dtor$13.c)
 *     _TsSessionCreate_::_1_::dtor$16 @ 0x18003C66A (_TsSessionCreate_--_1_--dtor$16.c)
 *     _TsSessionCreate_::_1_::dtor$19 @ 0x18003C68E (_TsSessionCreate_--_1_--dtor$19.c)
 *     _TsSessionCreate_::_1_::dtor$22 @ 0x18003C6B2 (_TsSessionCreate_--_1_--dtor$22.c)
 *     _TsSessionUpdateDuckingGainForId_::_1_::dtor$0 @ 0x18003C76E (_TsSessionUpdateDuckingGainForId_--_1_--dtor$0.c)
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$2 @ 0x18003C8A3 (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<DuckingDescriptor>::~shared_ptr<DuckingDescriptor>(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
