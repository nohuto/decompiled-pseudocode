/*
 * XREFs of _std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_NotificationData__::_1_::catch$64 @ 0x18004F530
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@0AEAV?$allocator@VNotificationData@@@0@@Z @ 0x1800686C8 (--$_Destroy_range@V-$allocator@VNotificationData@@@std@@@std@@YAXPEAVNotificationData@@0AEAV-$al.c)
 */

void __fastcall __noreturn std::vector_NotificationData_std::allocator_NotificationData___::_Emplace_reallocate_NotificationData__::_1_::catch_64(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<NotificationData>>(*(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 112), (const struct std::nothrow_t *)(32LL * *(_QWORD *)(a2 + 32)));
  throw;
}
