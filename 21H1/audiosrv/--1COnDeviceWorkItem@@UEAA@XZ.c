/*
 * XREFs of ??1COnDeviceWorkItem@@UEAA@XZ @ 0x1800B8710
 * Callers:
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2 @ 0x1800777A0 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$2.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$3 @ 0x1800BA984 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall COnDeviceWorkItem::~COnDeviceWorkItem(COnDeviceWorkItem *this)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
}
