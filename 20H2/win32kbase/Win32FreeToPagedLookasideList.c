/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C003C900
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UnlockQueue @ 0x1C00CE600 (UnlockQueue.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0120B6C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C0120F2C (NullifyLookasideRef.c)
 *     UserDeleteW32Thread @ 0x1C0121020 (UserDeleteW32Thread.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C012B0A4 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall Win32FreeToPagedLookasideList(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0250C60;
  if ( qword_1C0250C60 )
  {
    result = (__int64 (*)(void))qword_1C0250C60();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0250C68;
      if ( qword_1C0250C68 )
        return (__int64 (*)(void))qword_1C0250C68(a1, a2);
    }
  }
  return result;
}
