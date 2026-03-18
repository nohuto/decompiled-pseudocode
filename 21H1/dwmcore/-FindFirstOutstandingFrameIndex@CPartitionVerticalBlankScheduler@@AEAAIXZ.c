/*
 * XREFs of ?FindFirstOutstandingFrameIndex@CPartitionVerticalBlankScheduler@@AEAAIXZ @ 0x18003C318
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18003C860 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800D84C8 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::FindFirstOutstandingFrameIndex(
        CPartitionVerticalBlankScheduler *this)
{
  int v2; // ecx
  unsigned int v3; // r8d
  char i; // dl
  unsigned int v5; // edx
  __int64 v6; // r10
  unsigned int v7; // ecx
  int v9; // edx
  __int64 v10; // r10
  unsigned int v11; // eax

  v2 = *((_DWORD *)this + 1257);
  v3 = -1;
  if ( v2 == -1 )
  {
    v7 = *((_DWORD *)this + 1256);
    if ( v7 != -1 )
    {
      v9 = ((_BYTE)v7 + 1) & 0xF;
      while ( v7 != v9 )
      {
        v10 = 304LL * v7;
        if ( *((_BYTE *)this + v10 + 290) )
          break;
        v11 = v7;
        if ( !*((_BYTE *)this + v10 + 289) )
          v11 = v3;
        v7 = ((_BYTE)v7 - 1) & 0xF;
        v3 = v11;
      }
    }
  }
  else
  {
    for ( i = v2 + 1; ; i = v5 + 1 )
    {
      v5 = i & 0xF;
      if ( v5 == v2 || v3 != -1 )
        break;
      v6 = 304LL * v5;
      if ( *((_BYTE *)this + v6 + 289) )
      {
        if ( !*((_BYTE *)this + v6 + 290) )
          v3 = v5;
      }
    }
  }
  return v3;
}
