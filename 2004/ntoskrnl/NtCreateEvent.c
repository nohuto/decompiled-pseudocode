/*
 * XREFs of NtCreateEvent @ 0x140679490
 * Callers:
 *     PfSnPopulateReadList @ 0x1406049E0 (PfSnPopulateReadList.c)
 *     PfSnPrefetchMetadata @ 0x1406BCE74 (PfSnPrefetchMetadata.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406BD56C (PfSnOpenVolumesForPrefetch.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1407AABA4 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140A68364 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
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
    result = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v9);
    if ( (int)result >= 0 )
      *v6 = v9;
  }
  return result;
}
