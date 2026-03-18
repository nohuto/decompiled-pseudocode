/*
 * XREFs of RtlDestroyAtomTable @ 0x1405D5B30
 * Callers:
 *     RtlDereferenceAtomTable @ 0x140203000 (RtlDereferenceAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpFreeAtom @ 0x1405D5D5C (RtlpFreeAtom.c)
 *     ExpRemoveHandleTable @ 0x1405D6158 (ExpRemoveHandleTable.c)
 *     ExpFreeHandleTable @ 0x1405D6204 (ExpFreeHandleTable.c)
 *     RtlpLockAtomTable @ 0x1406383A4 (RtlpLockAtomTable.c)
 */

__int64 __fastcall RtlDestroyAtomTable(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD **i; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  void *v6; // rbx
  _QWORD **v8; // r12
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 0xFFFFFFFF) != 1 )
    return 0LL;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v2 = 0;
    for ( i = (_QWORD **)(a1 + 32); v2 < *(_DWORD *)(a1 + 28); ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = (_QWORD *)*v4;
        v8 = (_QWORD **)(v5 + 2);
        *v5 = 0LL;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 == v8 )
            break;
          if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
            __fastfail(3u);
          *v8 = v10;
          v10[1] = v8;
          RtlpFreeAtom(v9);
        }
        RtlpFreeAtom(v5);
      }
    }
    *(_DWORD *)a1 = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 8);
    KeAbPostRelease(a1 + 8);
    KeLeaveCriticalRegion();
    v6 = *(void **)(a1 + 16);
    ExpRemoveHandleTable(v6);
    ExpFreeHandleTable(v6);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    RtlpFreeAtom(a1);
    return 0LL;
  }
  return 3221225485LL;
}
