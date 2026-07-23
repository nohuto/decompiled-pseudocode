/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140772558
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407662F8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407672B0 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140770034 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140770A68 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140770F24 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x140920BF8 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096B730 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096B7C8 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096B824 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1403F3640 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenMutant @ 0x1403F5A40 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  MutantHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = BcdMutantHandle;
  if ( !BcdMutantHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
        ZwClose(MutantHandle);
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
