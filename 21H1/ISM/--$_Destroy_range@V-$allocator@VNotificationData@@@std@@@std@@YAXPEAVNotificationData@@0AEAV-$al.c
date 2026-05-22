/*
 * XREFs of ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@0AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180068C98
 * Callers:
 *     ??1InputSinkTreeCache@@QEAA@XZ @ 0x18003B3BC (--1InputSinkTreeCache@@QEAA@XZ.c)
 *     _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_NotificationData__::_1_::catch$64 @ 0x18004FB20 (_std--vector_NotificationData_std--allocator_NotificationData___--_Emplace_reallocate_Notificati.c)
 *     ??$_Uninitialized_move@PEAVNotificationData@@PEAV1@V?$allocator@VNotificationData@@@std@@@std@@YAPEAVNotificationData@@QEAV1@0PEAV1@AEAV?$allocator@VNotificationData@@@0@@Z @ 0x180068CE4 (--$_Uninitialized_move@PEAVNotificationData@@PEAV1@V-$allocator@VNotificationData@@@std@@@std@@Y.c)
 *     ??1?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@QEAA@XZ @ 0x180068E50 (--1-$vector@VNotificationData@@V-$allocator@VNotificationData@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Destroy_range<std::allocator<NotificationData>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 16);
      result = v4 - 1;
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        result = NtCloseCompositionInputSink(v4);
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
