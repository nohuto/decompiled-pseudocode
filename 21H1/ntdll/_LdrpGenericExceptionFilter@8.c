/*
 * XREFs of _LdrpGenericExceptionFilter@8 @ 0x4B334947
 * Callers:
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 *     _LdrpAllocateTlsEntry@20 @ 0x4B2E1766 (_LdrpAllocateTlsEntry@20.c)
 *     _LdrLockLoaderLock@12 @ 0x4B2E85B0 (_LdrLockLoaderLock@12.c)
 *     _LdrUnlockLoaderLock@8 @ 0x4B2EA6A0 (_LdrUnlockLoaderLock@8.c)
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     LdrpIgnoreReadFaultsFilter @ 0x4B32F3EE (LdrpIgnoreReadFaultsFilter.c)
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 *     _LdrpTouchThreadStack@4 @ 0x4B333A93 (_LdrpTouchThreadStack@4.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpLogFatalLdrEtwEvent@8 @ 0x4B330261 (_LdrpLogFatalLdrEtwEvent@8.c)
 *     _DbgPrompt@12 @ 0x4B33EE60 (_DbgPrompt@12.c)
 */

int __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  char v2; // al
  NTSTATUS v4; // ebx
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  int v8; // eax
  CHAR Response[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = ShowSnaps;
  v4 = *(_DWORD *)*a1;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrutil.c",
      563,
      (int)"LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      v4,
      *a1,
      a1[1]);
    v2 = ShowSnaps;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  if ( (v2 & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", Response, 2u);
      if ( Response[0] > 98 )
      {
        v6 = Response[0] - 105;
        v5 = Response[0] == 105;
      }
      else
      {
        if ( Response[0] == 98 || Response[0] == 66 )
          break;
        v6 = Response[0] - 73;
        v5 = Response[0] == 73;
      }
      if ( v5 )
        return 1;
      v7 = v6 - 6;
      if ( !v7 )
        break;
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(
            &NtCurrentPeb()->ProcessParameters->ImagePathName.Length,
            (const EVENT_DESCRIPTOR *)LoaderFatalErrorThread);
          ZwTerminateThread((HANDLE)0xFFFFFFFE, v4);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(
          &NtCurrentPeb()->ProcessParameters->ImagePathName.Length,
          (const EVENT_DESCRIPTOR *)LoaderFatalErrorProc);
        ZwTerminateProcess((HANDLE)0xFFFFFFFF, v4);
      }
    }
    DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
    __debugbreak();
  }
  return 1;
}
