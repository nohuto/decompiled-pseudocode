/*
 * XREFs of RtlEmptyAtomTable @ 0x14090FDC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x140603364 (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x1406F1D5C (RtlpFreeAtom.c)
 *     RtlpFreeHandleForAtom @ 0x1406F1D8C (RtlpFreeHandleForAtom.c)
 */

NTSTATUS __cdecl RtlEmptyAtomTable(PVOID AtomTableHandle, BOOLEAN IncludePinnedAtoms)
{
  unsigned int v5; // ebp
  __int64 *i; // r15
  __int64 *v7; // rsi
  __int64 v8; // rdx
  _QWORD **v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rbx

  if ( !RtlpLockAtomTable(AtomTableHandle) )
    return -1073741811;
  v5 = 0;
  for ( i = (__int64 *)((char *)AtomTableHandle + 32); v5 < *((_DWORD *)AtomTableHandle + 7); ++v5 )
  {
    v7 = i++;
    while ( 1 )
    {
      v12 = *v7;
      if ( !*v7 )
        break;
      if ( IncludePinnedAtoms || (*(_BYTE *)(v12 + 38) & 1) == 0 )
      {
        v8 = *v7;
        *v7 = *(_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        RtlpFreeHandleForAtom((__int64)AtomTableHandle, v8);
        v9 = (_QWORD **)(v12 + 16);
        while ( 1 )
        {
          v10 = *v9;
          if ( *v9 == v9 )
            break;
          if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
            __fastfail(3u);
          *v9 = v11;
          v11[1] = v9;
          RtlpFreeAtom((__int64)v10);
        }
        RtlpFreeAtom(v12);
      }
      else
      {
        v7 = (__int64 *)*v7;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return 0;
}
