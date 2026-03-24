/*
 * XREFs of ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C003F86C
 * Callers:
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C02274D4 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(int *P, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax

  if ( _InterlockedExchangeAdd(P, 0xFFFFFFFF) == 1 )
  {
    if ( P[2] )
    {
      v3 = P[2];
      v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(P, a2);
      v4[7] = 0LL;
      v4[3] = 270LL;
      v4[4] = 42LL;
      v4[5] = P;
      v4[6] = v3;
      WdLogEvent5_WdCriticalError(v4);
    }
    ExFreePoolWithTag(P, 0);
  }
}
