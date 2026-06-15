/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x1800B4770
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x180076F20 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
