/*
 * XREFs of NdisTryAcquireRWLockWrite @ 0x1C00A5110
 * Callers:
 *     ?ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A4E60 (-ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NdisTryAcquireRWLockWrite(KSPIN_LOCK *a1, KIRQL *a2, char a3)
{
  KSPIN_LOCK *v3; // rdi
  KIRQL v7; // al
  char result; // al
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx

  v3 = a1 + 2;
  if ( KeTestSpinLock(a1 + 2) )
  {
    if ( (a3 & 1) != 0 )
      v7 = 2;
    else
      v7 = KfRaiseIrql(2u);
    *a2 = v7;
    if ( KeTryToAcquireSpinLockAtDpcLevel(v3) )
    {
      v9 = (_QWORD *)a1[4];
      v10 = &v9[512 * ndisMaxNumberOfProcessors];
      while ( 1 )
      {
        if ( v9 == v10 )
        {
          result = 1;
          a1[3] = (KSPIN_LOCK)KeGetCurrentThread();
          a2[1] = 4;
          return result;
        }
        if ( *v9 )
          break;
        v9 += 512;
      }
      KeReleaseSpinLockFromDpcLevel(v3);
    }
    if ( *a2 != 2 )
      KeLowerIrql(*a2);
  }
  return 0;
}
