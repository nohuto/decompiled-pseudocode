/*
 * XREFs of PoDisableSleepStates @ 0x1408E6420
 * Callers:
 *     VslpIumPhase4Initialize @ 0x1403CE3EC (VslpIumPhase4Initialize.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 *     HalpLoadMicrocode @ 0x140868410 (HalpLoadMicrocode.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoDisableSleepStates(int a1, int a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x64536F50u);
  v7 = 0;
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_DWORD *)PoolWithTag + 4) = a1;
    *((_DWORD *)PoolWithTag + 5) = a2;
    ExAcquireFastMutex(&PopDisableSleepMutex);
    v9 = (_QWORD *)qword_140C24AC8;
    if ( *(__int64 **)qword_140C24AC8 != &PopDisableSleepList )
      __fastfail(3u);
    *v8 = &PopDisableSleepList;
    v8[1] = v9;
    *v9 = v8;
    qword_140C24AC8 = (__int64)v8;
    KeReleaseGuardedMutex(&PopDisableSleepMutex);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
