/*
 * XREFs of NtCreateEvent @ 0x140601020
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140633050 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x140633B00 (PfSnPopulateReadList.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406E7EB4 (PfSnOpenVolumesForPrefetch.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1407B8AE4 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6EB94 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateEvent(unsigned __int64 a1, __int64 a2, int a3, EVENT_TYPE a4, BOOLEAN a5)
{
  _QWORD *v6; // rdi
  unsigned __int8 v7; // si
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v6 = (_QWORD *)a1;
  v9 = 0LL;
  v7 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
  if ( v7 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( (unsigned int)a4 > SynchronizationEvent )
    return 3221225485LL;
  result = ObCreateObjectEx(v7, (_DWORD)ExEventObjectType, a3, v7);
  if ( (int)result >= 0 )
  {
    KeInitializeEvent(0LL, a4, a5);
    result = ObInsertObjectEx(0LL, 0, 0LL, (__int64)&v9);
    if ( (int)result >= 0 )
      *v6 = v9;
  }
  return result;
}
