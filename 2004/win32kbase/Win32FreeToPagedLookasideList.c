/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C00810E0
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0020D6C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     UnlockQueue @ 0x1C00CEE40 (UnlockQueue.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0122EBC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C012327C (NullifyLookasideRef.c)
 *     UserDeleteW32Thread @ 0x1C0123370 (UserDeleteW32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C012D3F4 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall Win32FreeToPagedLookasideList(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0252C60;
  if ( qword_1C0252C60 )
  {
    result = (__int64 (*)(void))qword_1C0252C60();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0252C68;
      if ( qword_1C0252C68 )
        return (__int64 (*)(void))qword_1C0252C68(a1, a2);
    }
  }
  return result;
}
