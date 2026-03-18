/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140770148
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140764944 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407658F0 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14076DC24 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14076E658 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14076EB14 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x14091F948 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096A390 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096A428 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096A484 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1403F23B0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenMutant @ 0x1403F47B0 (ZwOpenMutant.c)
 */

int __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  int result; // eax
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  Handle = 0LL;
  v1 = BcdMutantHandle;
  if ( !BcdMutantHandle )
  {
    result = ZwOpenMutant((__int64)&Handle, 0x100000LL);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)Handle, 0LL) )
        ZwClose(Handle);
    }
    v1 = BcdMutantHandle;
  }
  if ( v1 == (HANDLE)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(v1, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
