/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140780B58
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140775328 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407762E0 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14077E634 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14077F068 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14077F524 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x140926A18 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x140971500 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x140971598 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1409715F4 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1403F81F0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenMutant @ 0x1403FA610 (ZwOpenMutant.c)
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
