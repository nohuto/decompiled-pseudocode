/*
 * XREFs of NtCreateEvent @ 0x140727DD0
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1407DDABC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnPrefetchMetadata @ 0x1407DE1A8 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x1407DF200 (PfSnPopulateReadList.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14084CC44 (SepAdtOpenEtwReadyEvent.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x140B25D38 (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 */

__int64 __fastcall NtCreateEvent(unsigned __int64 a1, __int64 a2, int a3, EVENT_TYPE a4, BOOLEAN a5)
{
  _QWORD *v6; // rdi
  unsigned __int8 PreviousMode; // si
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF

  v6 = (_QWORD *)a1;
  v9 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
  }
  if ( (unsigned int)a4 > SynchronizationEvent )
    return 3221225485LL;
  result = ObCreateObjectEx(PreviousMode, (_DWORD)ExEventObjectType, a3, PreviousMode);
  if ( (int)result >= 0 )
  {
    KeInitializeEvent(0LL, a4, a5);
    result = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v9);
    if ( (int)result >= 0 )
      *v6 = v9;
  }
  return result;
}
