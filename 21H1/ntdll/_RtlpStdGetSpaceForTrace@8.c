/*
 * XREFs of _RtlpStdGetSpaceForTrace@8 @ 0x4B369414
 * Callers:
 *     _RtlpStdLogCapturedStackTrace@12 @ 0x4B3694C1 (_RtlpStdLogCapturedStackTrace@12.c)
 * Callees:
 *     @RtlpInterlockedPopEntrySList@4 @ 0x4B2DFE20 (@RtlpInterlockedPopEntrySList@4.c)
 *     _RtlpStdExtendLowerWatermark@8 @ 0x4B36923A (_RtlpStdExtendLowerWatermark@8.c)
 */

int *__fastcall RtlpStdGetSpaceForTrace(PRTL_SRWLOCK SRWLock, unsigned __int16 a2)
{
  int v4; // eax
  unsigned int v5; // esi
  _RTL_SRWLOCK *v6; // edi
  int *v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // eax
  int *v10; // edx
  unsigned int v11; // ecx
  int v12; // [esp+Ch] [ebp-4h]

  if ( !a2 )
    return 0;
  v4 = a2;
  v12 = a2;
  v5 = a2 - 1;
  if ( v5 >= 0x20 )
  {
LABEL_8:
    v8 = (4 * v4 + 19) & 0xFFFFFFF8;
    v9 = RtlpStdExtendLowerWatermark(SRWLock, v8);
    v10 = (int *)v9;
    if ( v9 )
    {
      v11 = ((v8 - 12) >> 2) - 1;
      if ( v11 > 0x1F )
        LOWORD(v11) = 31;
      *(_WORD *)(v9 + 4) = ((_WORD)v11 << 11) | *(_WORD *)(v9 + 4) & 0x7FF;
    }
  }
  else
  {
    v6 = &SRWLock[2 * v5 + 30];
    while ( 1 )
    {
      v7 = RtlpInterlockedPopEntrySList((unsigned int)v6);
      if ( v7 )
        break;
      ++v5;
      v6 += 2;
      if ( v5 >= 0x20 )
      {
        v4 = v12;
        goto LABEL_8;
      }
    }
    v10 = v7 - 3;
    _InterlockedDecrement((volatile signed __int32 *)&SRWLock[27]);
  }
  return v10;
}
