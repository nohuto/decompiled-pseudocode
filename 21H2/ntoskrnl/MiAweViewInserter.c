/*
 * XREFs of MiAweViewInserter @ 0x1408D583C
 * Callers:
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiLockAweVadsExclusive @ 0x14054D240 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054E238 (MiUnlockAweVadsExclusive.c)
 */

char __fastcall MiAweViewInserter(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  bool v5; // dl
  _QWORD *v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(a1 + 1680);
  MiLockAweVadsExclusive((__int64)CurrentThread);
  v5 = 0;
  v6 = *(_QWORD **)(v4 + 400);
  v7 = *(unsigned int *)(a2[3] + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(a2[3] + 32LL) << 32);
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = v6[3];
      if ( v7 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
        || v7 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) )
      {
        v9 = (_QWORD *)v6[1];
        if ( !v9 )
        {
          v5 = 1;
          break;
        }
      }
      else
      {
        v9 = (_QWORD *)*v6;
        if ( !*v6 )
          break;
      }
      v6 = v9;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(v4 + 400), (unsigned __int64)v6, v5, a2);
  return MiUnlockAweVadsExclusive((__int64)CurrentThread);
}
