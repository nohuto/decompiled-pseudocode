/*
 * XREFs of KeSelectIdealProcessor @ 0x1402CA440
 * Callers:
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x140337644 (KiComputeThreadAffinity.c)
 *     ExpNodeCreateSystemThread @ 0x140655448 (ExpNodeCreateSystemThread.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     ExpWorkQueueManagerInitialize @ 0x1407AD2F8 (ExpWorkQueueManagerInitialize.c)
 * Callees:
 *     KiSelectIdealProcessor @ 0x1402CA520 (KiSelectIdealProcessor.c)
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
