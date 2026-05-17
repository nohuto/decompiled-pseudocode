/*
 * XREFs of TppDirectExecuteCallback @ 0x180078950
 * Callers:
 *     <none>
 * Callees:
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall TppDirectExecuteCallback(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  bool v9; // bl
  signed __int64 result; // rax
  __int64 v11; // r8
  __int128 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 32, a2, a3, a4);
  v6 = (_QWORD *)(a2 + 40);
  v7 = *(_QWORD **)(a2 + 40);
  if ( v7 == (_QWORD *)(a2 + 40) )
  {
    v7 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
  }
  v9 = *v6 != (_QWORD)v6;
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  if ( v9 )
    result = TpPostTask(a2, a1[16], 1, 0LL);
  if ( v7 )
  {
    v12 = *((_OWORD *)v7 - 2);
    v13 = *((_OWORD *)v7 - 1);
    v11 = v7[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(_QWORD *)v11);
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    return (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, __int128 *))(a2 + 56))(
             a1,
             a2,
             *((_QWORD *)&v12 + 1),
             &v13);
  }
  return result;
}
