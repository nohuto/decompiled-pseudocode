/*
 * XREFs of sub_180070868 @ 0x180070868
 * Callers:
 *     StartAddress @ 0x18003E530 (StartAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180070868(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax

  RtlAcquireSRWLockExclusive(a1);
  *(_DWORD *)(a1 + 8) = GetCurrentThreadId();
  *a3 = a1 + 84;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 84));
  NtClose(*(HANDLE *)(a2 + 32));
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 224) |= 3u;
  v6 = (_QWORD *)(a2 + 8);
  v7 = *v6;
  if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *(_OWORD *)v6 = 0LL;
  --*(_DWORD *)(a1 + 76);
  *(_DWORD *)(a1 + 8) = 0;
  RtlReleaseSRWLockExclusive(a1);
  return RtlWakeAllConditionVariable(a1 + 32);
}
