/*
 * XREFs of ??1NotificationData@@QEAA@XZ @ 0x180068EA4
 * Callers:
 *     _NotifyInputSinkRemoved_::_1_::dtor$1 @ 0x18004F974 (_NotifyInputSinkRemoved_--_1_--dtor$1.c)
 *     _NotifyInputSinkParented_::_1_::dtor$2 @ 0x18004FB80 (_NotifyInputSinkParented_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall NotificationData::~NotificationData(NotificationData *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v1);
}
