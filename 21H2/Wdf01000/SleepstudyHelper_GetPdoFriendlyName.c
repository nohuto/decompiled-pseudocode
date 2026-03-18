/*
 * XREFs of SleepstudyHelper_GetPdoFriendlyName @ 0x1C00BF9D0
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0089F00 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1C00270F0 (RtlUnicodeStringCopy.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_GetPdoFriendlyName(
        _DEVICE_OBJECT *Pdo,
        _UNICODE_STRING *FriendlyName,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax

  if ( !unk_1C00AB360 || (result = unk_1C00AB360(Pdo), (_DWORD)result == -1073741637) )
  {
    if ( FriendlyName )
      return RtlUnicodeStringCopy(FriendlyName, &SleepstudyHelperUnsupportedFriendlyName, a3, a4);
    else
      return 3221225485LL;
  }
  return result;
}
