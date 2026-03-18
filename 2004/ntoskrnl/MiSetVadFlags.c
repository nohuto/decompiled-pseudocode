/*
 * XREFs of MiSetVadFlags @ 0x1402480E0
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiRemoveSecureEntry @ 0x14024B900 (MiRemoveSecureEntry.c)
 *     MiAddSecureEntry @ 0x1405FCED0 (MiAddSecureEntry.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CAF04 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, __int64 a2, char a3)
{
  char v4; // di
  unsigned __int8 CurrentIrql; // si
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  signed __int32 v9; // eax
  int v10; // r10d
  int v11; // r11d
  int v12; // edi
  int v13; // r9d
  unsigned int v14; // ecx
  signed __int32 v15; // ett
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+48h] [rbp+10h] BYREF

  v23 = 0;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= a2;
  }
  v7 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v7 & 1) != 0 )
    {
      if ( (v7 & 2) != 0 )
      {
        v23 = 0;
        do
        {
          KeYieldProcessorEx(&v23, a2);
          v7 = *(_DWORD *)(a1 + 48);
        }
        while ( (v7 & 1) != 0 );
      }
      else
      {
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v7 | 2, v7);
      }
    }
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v7 & 0xFFFFFFFC | 1, v7);
  }
  while ( v8 != v7 );
  v9 = *(_DWORD *)(a1 + 48);
  v10 = v4 & 1;
  v11 = v4 & 2;
  v12 = v4 & 4;
  v13 = a3 & 1;
  do
  {
    v14 = v9;
    if ( v10 )
    {
      v13 = a3 & 1;
      v14 = v9 & 0xFFFFFFF7 | (8 * v13);
    }
    if ( v11 )
      v14 = (4 * v13) | v14 & 0xFFFFFFFB;
    else
      v13 = a3 & 1;
    if ( v12 )
      v14 = v14 & 0xFFBFFFFF | (v13 << 22);
    v15 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v14, v9);
  }
  while ( v15 != v9 );
  _InterlockedAnd((volatile signed __int32 *)(a1 + 48), 0xFFFFFFFC);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
