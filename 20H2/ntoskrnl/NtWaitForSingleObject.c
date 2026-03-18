/*
 * XREFs of NtWaitForSingleObject @ 0x140611530
 * Callers:
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x1406D1048 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x1406115B0 (ObWaitForSingleObject.c)
 */

__int64 __fastcall NtWaitForSingleObject(int a1, unsigned __int8 a2, unsigned __int64 a3)
{
  int v3; // r9d
  int v4; // edx
  __int64 Timeout; // rax
  LARGE_INTEGER v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v7.QuadPart = 0LL;
  v4 = (unsigned __int8)KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  Timeout = a3;
  if ( a3 && (_BYTE)v4 )
  {
    if ( a3 >= 0x7FFFFFFF0000LL )
      Timeout = 0x7FFFFFFF0000LL;
    v7 = *(LARGE_INTEGER *)Timeout;
    Timeout = (__int64)&v7;
  }
  return ObWaitForSingleObject(a1, v4, (unsigned __int8)v4, v3, (PLARGE_INTEGER)Timeout);
}
