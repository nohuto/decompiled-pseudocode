/*
 * XREFs of BgConsoleDestroyInterface @ 0x1409F0F5C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398DB0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1409F1B08 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A949F8 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398FD0 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F0FBC (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CDAF58;
    if ( qword_140CDAF58 )
    {
      if ( *(_QWORD *)(qword_140CDAF58 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CDAF58 + 40));
        v2 = qword_140CDAF58;
      }
      BgpFwFreeMemory(v2);
      qword_140CDAF58 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
