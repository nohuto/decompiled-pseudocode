/*
 * XREFs of ??1WORKER_THREAD_EVENT@@UEAA@XZ @ 0x18004DC40
 * Callers:
 *     _SpatialPolicy::DetectComboEndpoint_::_1_::dtor$11 @ 0x18007CADC (_SpatialPolicy--DetectComboEndpoint_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall WORKER_THREAD_EVENT::~WORKER_THREAD_EVENT(WORKER_THREAD_EVENT *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
