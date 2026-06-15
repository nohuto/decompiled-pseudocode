/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140041918
 * Callers:
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$1 @ 0x14002BFA7 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  ATL::CStringData::Release((ATL::CStringData *)(*a1 - 24LL));
}
