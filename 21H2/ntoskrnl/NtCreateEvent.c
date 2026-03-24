/*
 * XREFs of NtCreateEvent @ 0x140703CD0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1406C7A68 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1406C8184 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x1406C8970 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14079E3F4 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140A6BB14 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateEvent(unsigned __int64 a1, __int64 a2, int a3, EVENT_TYPE a4, BOOLEAN a5)
{
  _QWORD *v6; // rdi
  unsigned __int8 v7; // si
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v6 = (_QWORD *)a1;
  v9 = 0LL;
  v7 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
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
