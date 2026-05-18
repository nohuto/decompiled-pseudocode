/*
 * XREFs of sub_18001B108 @ 0x18001B108
 * Callers:
 *     sub_18001B77C @ 0x18001B77C (sub_18001B77C.c)
 *     sub_18001C764 @ 0x18001C764 (sub_18001C764.c)
 *     sub_18001C92C @ 0x18001C92C (sub_18001C92C.c)
 *     sub_18001FDD8 @ 0x18001FDD8 (sub_18001FDD8.c)
 * Callees:
 *     sub_18001A4D0 @ 0x18001A4D0 (sub_18001A4D0.c)
 */

bool __fastcall sub_18001B108(RTL_SRWLOCK *a1)
{
  DWORD LastError; // ebp
  __int64 v3; // rsi
  __int64 Ptr; // rcx
  void *v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1[3].Ptr )
  {
    LastError = GetLastError();
    if ( a1[3].Ptr )
    {
      v3 = 0LL;
    }
    else
    {
      if ( !a1[2].Ptr )
      {
        Ptr = (__int64)a1[1].Ptr;
        v6 = 0LL;
        if ( (int)sub_18001A4D0(Ptr, &v6) >= 0 && !a1[2].Ptr )
          a1[2].Ptr = v6;
      }
      v3 = ((__int64)a1[2].Ptr + 32) & -(__int64)(a1[2].Ptr != 0LL);
    }
    AcquireSRWLockExclusive(a1 + 4);
    if ( !a1[3].Ptr )
      a1[3].Ptr = (PVOID)v3;
    if ( a1 != (RTL_SRWLOCK *)-32LL )
      ReleaseSRWLockExclusive(a1 + 4);
    SetLastError(LastError);
  }
  return a1[3].Ptr != 0LL;
}
