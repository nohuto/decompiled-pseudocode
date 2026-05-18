/*
 * XREFs of ??1CApiPortClient@@QEAA@XZ @ 0x18000B354
 * Callers:
 *     _dynamic_atexit_destructor_for__g_PortClient__ @ 0x18000E100 (_dynamic_atexit_destructor_for__g_PortClient__.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x18000B3BC (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x18000BA90 (-ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NXZ @ 0x18000BB1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2431961401@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CApiPortClient::~CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  CApiPortClient *v2; // rcx

  EnterCriticalSection(&stru_180014B90);
  CApiPortClient::Disconnect(v1);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2431961401>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2431961401>::GetImpl'::`2'::impl) )
    CApiPortClient::ReleaseExtraDataSection(v2);
  byte_180014BB8 = 1;
  LeaveCriticalSection(&stru_180014B90);
  DeleteCriticalSection(&stru_180014B90);
}
