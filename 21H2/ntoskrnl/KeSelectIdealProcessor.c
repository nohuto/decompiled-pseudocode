/*
 * XREFs of KeSelectIdealProcessor @ 0x140265F28
 * Callers:
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     ExpNodeCreateSystemThread @ 0x1406A7338 (ExpNodeCreateSystemThread.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407C2CB8 (ExpWorkQueueManagerInitialize.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x140266008 (KiSelectIdealProcessor.c)
 */

__int64 __fastcall KeSelectIdealProcessor(__int64 a1, _QWORD *a2, _WORD *a3, unsigned int *a4)
{
  _WORD *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v4 = a3;
  if ( !a3 )
    v4 = (_WORD *)(a1 + 108);
  v5 = *a2 & *(_QWORD *)(a1 + 136);
  if ( a4 )
  {
    if ( (KiCacheAwareScheduling & 4) != 0 )
    {
      v6 = KiProcessorBlock[*a4];
      if ( *(_QWORD *)(v6 + 192) == a1 )
      {
        v7 = *(_QWORD *)(v6 + 33896);
        if ( (v5 & v7) != 0
          && (unsigned int)((0x101010101010101LL
                           * ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                             + ((((v7 - ((v7 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v7 - ((v7 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= 2 )
        {
          v5 &= v7;
        }
      }
    }
  }
  result = KiSelectIdealProcessor(a1, (unsigned __int16)*v4, v5);
  *v4 = result;
  return result;
}
