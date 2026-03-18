/*
 * XREFs of BgConsoleDestroyInterface @ 0x1409F6F5C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1409F7B08 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A9A658 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B490 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F6FBC (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CDAFD8;
    if ( qword_140CDAFD8 )
    {
      if ( *(_QWORD *)(qword_140CDAFD8 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CDAFD8 + 40));
        v2 = qword_140CDAFD8;
      }
      BgpFwFreeMemory(v2);
      qword_140CDAFD8 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
