/*
 * XREFs of BgConsoleGetInterface @ 0x1409EE810
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A94414 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A949F8 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C13310 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140C133B8 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
