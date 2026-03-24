/*
 * XREFs of BgConsoleDestroyInterface @ 0x1409F3F5C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BB40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1409F4B08 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A974E8 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F3FBC (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v5 = qword_140CDB158;
    if ( qword_140CDB158 )
    {
      if ( *(_QWORD *)(qword_140CDB158 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CDB158 + 40));
        v5 = qword_140CDB158;
      }
      BgpFwFreeMemory(v5, v2, v3, v4);
      qword_140CDB158 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
