/*
 * XREFs of HamIpcChannelRundown @ 0x18000223C
 * Callers:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     RmpClientConnectionCleanup @ 0x18000FA38 (RmpClientConnectionCleanup.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x1800022D0 (RmpClientWnfDestroySubscription.c)
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x180011E14 (HampIpcChannelObjectMakeZombieUnsafe.c)
 */

__int64 __fastcall HamIpcChannelRundown(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rax
  _QWORD *i; // rbx
  __int64 result; // rax
  _QWORD **v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a1 + 20) |= 1u;
  *(_DWORD *)(a1 + 16) = CurrentThreadId;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      goto LABEL_4;
    i = (_QWORD *)(v3 ^ ((a1 + 24) | 1));
  }
  else
  {
    i = *(_QWORD **)(a1 + 32);
  }
  while ( i )
  {
    HampIpcChannelObjectMakeZombieUnsafe(i, a1);
    v6 = (_QWORD **)i[1];
    v7 = i;
    if ( v6 )
    {
      v8 = *v6;
      for ( i = (_QWORD *)i[1]; v8; v8 = (_QWORD *)*v8 )
        i = v8;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v7 )
          break;
        v7 = i;
      }
    }
  }
LABEL_4:
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( *(_QWORD *)a1 )
    return RmpClientWnfDestroySubscription(*(PVOID *)a1);
  return result;
}
