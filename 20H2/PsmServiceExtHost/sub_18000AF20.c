/*
 * XREFs of sub_18000AF20 @ 0x18000AF20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B084 @ 0x18000B084 (sub_18000B084.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall sub_18000AF20(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  _QWORD *Value; // rax
  unsigned __int64 v9; // rdi

  v3 = (__int64 *)a1[11];
  if ( v3 )
  {
    v4 = *v3;
    v3[1] = 0LL;
    (*(void (**)(void))(v4 + 16))();
  }
  v5 = a1[10];
  if ( v5 )
  {
    sub_18000B084(v3, a2, 0LL);
    RtlAcquireSRWLockExclusive(&unk_1800B4210);
    dword_1800B4218 = GetCurrentThreadId();
    v7 = (*(_QWORD *)(v5 + 592))-- == 1LL;
    if ( v7 )
      sub_18000A1AC(v5 - 64, v6);
    dword_1800B4218 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800B4210);
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)Value & 1) == 0 )
        __int2c();
      v7 = Value[1]-- == 1LL;
      if ( v7 )
        *Value &= ~1uLL;
    }
  }
  if ( a1[3] )
    __int2c();
  if ( a1[2] != -1LL )
  {
    v9 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
    RtlAcquireSRWLockExclusive(v9 + 16);
    RtlRbRemoveNode(v9, a1);
    --*(_DWORD *)(v9 + 40);
    RtlReleaseSRWLockExclusive(v9 + 16);
    RtlWakeAllConditionVariable(v9 + 32);
  }
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
