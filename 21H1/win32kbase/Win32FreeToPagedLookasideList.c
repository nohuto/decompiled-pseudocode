/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C008BD10
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C000BE2C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     zzzDestroyQueue @ 0x1C006FE70 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     UnlockQueue @ 0x1C00CE340 (UnlockQueue.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0128E9C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C012925C (NullifyLookasideRef.c)
 *     UserDeleteW32Thread @ 0x1C0129350 (UserDeleteW32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C01333E4 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall Win32FreeToPagedLookasideList(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0258C20;
  if ( qword_1C0258C20 )
  {
    result = (__int64 (*)(void))qword_1C0258C20();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0258C28;
      if ( qword_1C0258C28 )
        return (__int64 (*)(void))qword_1C0258C28(a1, a2);
    }
  }
  return result;
}
