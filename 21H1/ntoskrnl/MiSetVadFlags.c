/*
 * XREFs of MiSetVadFlags @ 0x1402A1110
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiRemoveSecureEntry @ 0x1402A4930 (MiRemoveSecureEntry.c)
 *     MiAddSecureEntry @ 0x140631F10 (MiAddSecureEntry.c)
 *     MiSetImageHotPatchAllowed @ 0x1408C9BB4 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // bp
  char v5; // di
  unsigned __int8 CurrentIrql; // si
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed __int32 v10; // eax
  int v11; // r10d
  int v12; // r11d
  int v13; // edi
  int v14; // r9d
  unsigned int v15; // ecx
  signed __int32 v16; // ett
  __int64 result; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  int v23; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  v23 = 0;
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v8 = *(_DWORD *)(a1 + 48);
  do
  {
    while ( (v8 & 1) != 0 )
    {
      if ( (v8 & 2) != 0 )
      {
        v23 = 0;
        do
        {
          KeYieldProcessorEx(&v23, a2, a3, (__int64)SchedulerAssist);
          v8 = *(_DWORD *)(a1 + 48);
        }
        while ( (v8 & 1) != 0 );
      }
      else
      {
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v8 | 2, v8);
      }
    }
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v8 & 0xFFFFFFFC | 1, v8);
  }
  while ( v9 != v8 );
  v10 = *(_DWORD *)(a1 + 48);
  v11 = v5 & 1;
  v12 = v5 & 2;
  v13 = v5 & 4;
  v14 = v4 & 1;
  do
  {
    v15 = v10;
    if ( v11 )
    {
      v14 = v4 & 1;
      v15 = v10 & 0xFFFFFFF7 | (8 * v14);
    }
    if ( v12 )
      v15 = (4 * v14) | v15 & 0xFFFFFFFB;
    else
      v14 = v4 & 1;
    if ( v13 )
      v15 = v15 & 0xFFBFFFFF | (v14 << 22);
    v16 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v15, v10);
  }
  while ( v16 != v10 );
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
