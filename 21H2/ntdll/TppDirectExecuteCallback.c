/*
 * XREFs of TppDirectExecuteCallback @ 0x180079980
 * Callers:
 *     <none>
 * Callees:
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TppDirectExecuteCallback(__int64 a1, _RTL_SRWLOCK *a2)
{
  unsigned __int64 *v4; // rax
  _RTL_SRWLOCK *Value; // rdi
  unsigned __int64 v6; // rdx
  bool v7; // bl
  unsigned __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 4);
  v4 = (unsigned __int64 *)&a2[5];
  Value = (_RTL_SRWLOCK *)a2[5].Value;
  if ( Value == &a2[5] )
  {
    Value = 0LL;
  }
  else
  {
    if ( (unsigned __int64 *)Value[1].Value != v4 || (v6 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
  }
  v7 = *v4 != (_QWORD)v4;
  RtlReleaseSRWLockExclusive(a2 + 4);
  if ( v7 )
    TpPostTask((__int64)a2, *(char **)(a1 + 128), 1, 0LL);
  if ( Value )
  {
    v9 = *(_OWORD *)&Value[-4].0;
    v10 = *(_OWORD *)&Value[-2].0;
    v8 = Value[2].Value;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v8);
    *(_RTL_SRWLOCK *)(a1 + 88) = a2[7];
    *(_QWORD *)(a1 + 96) = a2;
    ((void (__fastcall *)(__int64, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Value)(a1, a2, *((_QWORD *)&v9 + 1), &v10);
  }
}
