/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140784938
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407792D8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14077A294 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140782414 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140782E48 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140783304 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140783A40 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783BCC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1409241E8 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096EC18 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ECB0 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096ED0C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1403FA420 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenMutant @ 0x1403FC840 (ZwOpenMutant.c)
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
