/*
 * XREFs of KiEndCounterAccumulation @ 0x14051C190
 * Callers:
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiEndCounterAccumulation(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r11
  __int64 v3; // r9
  unsigned int *v4; // r10
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 360);
  v2 = *(_QWORD *)(v1 + 32);
  if ( v2 )
  {
    v3 = 1LL;
    if ( KiHwCountersCount )
    {
      v4 = (unsigned int *)&KiHwCounters;
      v5 = v1 + 48;
      v6 = (unsigned int)KiHwCountersCount;
      do
      {
        if ( (v2 & v3) != 0 )
        {
          v7 = __readpmc(*v4);
          *(_QWORD *)(v5 + 8) += (unsigned int)(v7 - *(_DWORD *)v5);
          *(_QWORD *)v5 = v7;
        }
        v3 *= 2LL;
        ++v4;
        v5 += 24LL;
        --v6;
      }
      while ( v6 );
    }
  }
}
