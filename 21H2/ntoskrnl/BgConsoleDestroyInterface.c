/*
 * XREFs of BgConsoleDestroyInterface @ 0x140AAE968
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140AAE8BC (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B572D0 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AAE9C8 (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CE1AD8;
    if ( qword_140CE1AD8 )
    {
      if ( *(_QWORD *)(qword_140CE1AD8 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CE1AD8 + 40));
        v2 = qword_140CE1AD8;
      }
      BgpFwFreeMemory(v2);
      qword_140CE1AD8 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
