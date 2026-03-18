/*
 * XREFs of BgConsoleGetInterface @ 0x1409EE810
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A94C8C (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A95268 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C132D0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140C13378 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
