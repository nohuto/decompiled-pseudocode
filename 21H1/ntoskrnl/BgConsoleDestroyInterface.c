/*
 * XREFs of BgConsoleDestroyInterface @ 0x1409F0F5C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1409F1B08 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A95268 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F0FBC (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CDB058;
    if ( qword_140CDB058 )
    {
      if ( *(_QWORD *)(qword_140CDB058 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CDB058 + 40));
        v2 = qword_140CDB058;
      }
      BgpFwFreeMemory(v2);
      qword_140CDB058 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
