/*
 * XREFs of BgConsoleDestroyInterface @ 0x1409F4F5C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BC90 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1409F5B08 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A984E8 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F4FBC (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CDB198;
    if ( qword_140CDB198 )
    {
      if ( *(_QWORD *)(qword_140CDB198 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CDB198 + 40));
        v2 = qword_140CDB198;
      }
      BgpFwFreeMemory(v2);
      qword_140CDB198 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
