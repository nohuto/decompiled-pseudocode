/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x18000F8C0
 * Callers:
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$1 @ 0x1800421CF (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
