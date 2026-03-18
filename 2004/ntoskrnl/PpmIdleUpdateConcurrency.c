/*
 * XREFs of PpmIdleUpdateConcurrency @ 0x140561B80
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     PpmIdleInstallConcurrency @ 0x140561570 (PpmIdleInstallConcurrency.c)
 *     PpmIdleRemoveConcurrency @ 0x1405617A0 (PpmIdleRemoveConcurrency.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 */

void __fastcall PpmIdleUpdateConcurrency(PKSPIN_LOCK SpinLock, KSPIN_LOCK a2, char a3, char a4)
{
  KSPIN_LOCK v8; // rax
  __int64 v9; // r9
  KSPIN_LOCK v10; // rcx
  int v11; // ecx
  __int16 v12; // [rsp+30h] [rbp-8h]

  _disable();
  KxAcquireSpinLock(SpinLock);
  v8 = SpinLock[2];
  v9 = *((unsigned int *)SpinLock + 3);
  if ( a2 > v8 )
  {
    SpinLock[2] = a2;
    v10 = a2 - v8;
    if ( a4 )
    {
      SpinLock[3] += v10;
      SpinLock[v9 + 4] += v10;
    }
  }
  v11 = v9 + 1;
  if ( a3 )
    v11 = v9 - 1;
  *((_DWORD *)SpinLock + 3) = v11;
  KxReleaseSpinLock(SpinLock);
  if ( (v12 & 0x200) != 0 )
    _enable();
}
