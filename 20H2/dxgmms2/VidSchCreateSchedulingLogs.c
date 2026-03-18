/*
 * XREFs of VidSchCreateSchedulingLogs @ 0x1C0095A90
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009596C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B43B4 (-RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C003AA30 (VidSchiCreateNodeSchedulingLog.c)
 */

__int64 __fastcall VidSchCreateSchedulingLogs(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 result; // rax
  struct _VIDSCH_NODE **v7; // rcx

  if ( *(int *)(*(_QWORD *)(a1 + 16) + 2596LL) < 2500 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_DWORD *)(a1 + 72) )
    return 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 624);
    v4 = *(_DWORD *)(a1 + 696);
    v5 = v3 + 8 * v2;
    if ( (unsigned int)v2 >= v4 )
      v5 = *(_QWORD *)(a1 + 624);
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 12LL) & 2) != 0 )
    {
      v7 = (struct _VIDSCH_NODE **)(v3 + 8 * v2);
      if ( (unsigned int)v2 >= v4 )
        v7 = *(struct _VIDSCH_NODE ***)(a1 + 624);
      result = VidSchiCreateNodeSchedulingLog(*v7, 0x800u);
      if ( (int)result < 0 )
        break;
    }
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 72) )
      return 0LL;
  }
  return result;
}
